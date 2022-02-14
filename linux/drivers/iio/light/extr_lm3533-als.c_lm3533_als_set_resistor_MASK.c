
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct lm3533_als {TYPE_1__* pdev; int lm3533; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct lm3533_als *VAR_4, u8 VAR_5)
{
 int VAR_6;

 if (VAR_5 < VAR_2 || VAR_5 > VAR_1) {
  FUNC_0(&VAR_4->pdev->dev, "invalid resistor value\n");
  return -VAR_0;
 };

 VAR_6 = FUNC_1(VAR_4->lm3533, VAR_3, VAR_5);
 if (VAR_6) {
  FUNC_0(&VAR_4->pdev->dev, "failed to set resistor\n");
  return VAR_6;
 }

 return 0;
}
