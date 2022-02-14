
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lm3533_als {TYPE_1__* pdev; int lm3533; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct lm3533_als *VAR_2)
{
 u8 VAR_3 = VAR_0;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2->lm3533, VAR_1, VAR_3, VAR_3);
 if (VAR_4)
  FUNC_0(&VAR_2->pdev->dev, "failed to enable ALS\n");

 return VAR_4;
}
