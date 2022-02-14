
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct lm3533_als {TYPE_1__* pdev; int lm3533; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct lm3533_als *VAR_2, bool VAR_3)
{
 u8 VAR_4 = VAR_0;
 u8 VAR_5;
 int VAR_6;

 if (VAR_3)
  VAR_5 = VAR_4;
 else
  VAR_5 = 0;

 VAR_6 = FUNC_1(VAR_2->lm3533, VAR_1, VAR_5, VAR_4);
 if (VAR_6) {
  FUNC_0(&VAR_2->pdev->dev, "failed to set input mode %d\n",
        VAR_3);
  return VAR_6;
 }

 return 0;
}
