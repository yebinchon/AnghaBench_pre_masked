
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fimc_context {int * clocks; struct device* dev; } ;
struct device {struct device* parent; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device*,char*,int ) ;
 int * VAR_5 ;
 int FUNC_6 (struct fimc_context*) ;

__attribute__((used)) static int FUNC_7(struct fimc_context *VAR_6)
{
 struct device *VAR_7 = VAR_6->dev;
 struct device *VAR_8;
 int VAR_9, VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
  VAR_6->clocks[VAR_10] = FUNC_0(-VAR_0);

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  if (VAR_10 == VAR_3 || VAR_10 == VAR_4)
   VAR_8 = VAR_7->parent;
  else
   VAR_8 = VAR_7;

  VAR_6->clocks[VAR_10] = FUNC_3(VAR_8, VAR_5[VAR_10]);
  if (FUNC_1(VAR_6->clocks[VAR_10])) {
   VAR_9 = FUNC_2(VAR_6->clocks[VAR_10]);
   FUNC_5(VAR_7, "failed to get clock: %s\n",
      VAR_5[VAR_10]);
   goto e_clk_free;
  }
 }

 VAR_9 = FUNC_4(VAR_6->clocks[VAR_2]);
 if (!VAR_9)
  return VAR_9;
e_clk_free:
 FUNC_6(VAR_6);
 return VAR_9;
}
