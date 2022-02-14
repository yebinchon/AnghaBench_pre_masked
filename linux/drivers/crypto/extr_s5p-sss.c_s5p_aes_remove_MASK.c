
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5p_aes_dev {int use_hash; scalar_t__ clk; scalar_t__ pclk; int hash_tasklet; TYPE_1__* res; int tasklet; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {int end; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct s5p_aes_dev* FUNC_4 (struct platform_device*) ;
 int * VAR_3 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_4)
{
 struct s5p_aes_dev *VAR_5 = FUNC_4(VAR_4);
 int VAR_6;

 if (!VAR_5)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++)
  FUNC_3(&VAR_1[VAR_6]);

 FUNC_5(&VAR_5->tasklet);
 if (VAR_5->use_hash) {
  for (VAR_6 = FUNC_0(VAR_2) - 1; VAR_6 >= 0; VAR_6--)
   FUNC_2(&VAR_2[VAR_6]);

  VAR_5->res->end -= 0x300;
  FUNC_5(&VAR_5->hash_tasklet);
  VAR_5->use_hash = 0;
 }

 if (VAR_5->pclk)
  FUNC_1(VAR_5->pclk);

 FUNC_1(VAR_5->clk);
 VAR_3 = ((void*)0);

 return 0;
}
