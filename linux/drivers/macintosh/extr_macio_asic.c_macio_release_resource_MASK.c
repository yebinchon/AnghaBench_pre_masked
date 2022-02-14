
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macio_devres {int res_mask; } ;
struct macio_dev {int dummy; } ;


 struct macio_devres* FUNC_0 (struct macio_dev*) ;
 scalar_t__ FUNC_1 (struct macio_dev*,int) ;
 int FUNC_2 (struct macio_dev*,int) ;
 int FUNC_3 (int ,scalar_t__) ;

void FUNC_4(struct macio_dev *VAR_0, int VAR_1)
{
 struct macio_devres *VAR_2 = FUNC_0(VAR_0);

 if (FUNC_1(VAR_0, VAR_1) == 0)
  return;
 FUNC_3(FUNC_2(VAR_0, VAR_1),
      FUNC_1(VAR_0, VAR_1));
 if (VAR_2 && VAR_1 < 32)
  VAR_2->res_mask &= ~(1 << VAR_1);
}
