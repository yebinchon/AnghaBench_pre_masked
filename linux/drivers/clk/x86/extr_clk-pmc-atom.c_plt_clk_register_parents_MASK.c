
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmc_clk {scalar_t__ name; int freq; int parent_name; } ;
struct platform_device {int dev; } ;
struct clk_plt_data {int nparents; int * parents; } ;


 int VAR_0 ;
 char const** FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *,int,int,int ) ;
 char** FUNC_4 (int,int,int ) ;
 char* FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (char const**,unsigned int) ;
 int FUNC_7 (struct platform_device*,scalar_t__,int ,int ) ;
 int FUNC_8 (struct clk_plt_data*,unsigned int) ;

__attribute__((used)) static const char **FUNC_9(struct platform_device *VAR_2,
          struct clk_plt_data *VAR_3,
          const struct pmc_clk *VAR_4)
{
 const char **VAR_5;
 unsigned int VAR_6;
 int VAR_7;
 int VAR_8 = 0;

 VAR_3->nparents = 0;
 while (VAR_4[VAR_8].name)
  VAR_8++;

 VAR_3->parents = FUNC_3(&VAR_2->dev, VAR_8,
         sizeof(*VAR_3->parents), VAR_1);
 if (!VAR_3->parents)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_4(VAR_8, sizeof(*VAR_5),
          VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
  VAR_3->parents[VAR_6] =
   FUNC_7(VAR_2, VAR_4[VAR_6].name,
          VAR_4[VAR_6].parent_name,
          VAR_4[VAR_6].freq);
  if (FUNC_1(VAR_3->parents[VAR_6])) {
   VAR_7 = FUNC_2(VAR_3->parents[VAR_6]);
   goto err_unreg;
  }
  VAR_5[VAR_6] = FUNC_5(VAR_4[VAR_6].name, VAR_1);
 }

 VAR_3->nparents = VAR_8;
 return VAR_5;

err_unreg:
 FUNC_8(VAR_3, VAR_6);
 FUNC_6(VAR_5, VAR_6);
 return FUNC_0(VAR_7);
}
