
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serdev_device {int dummy; } ;
struct qca_serdev {int serdev_hu; int susclk; int btsoc_type; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 struct qca_serdev* FUNC_4 (struct serdev_device*) ;

__attribute__((used)) static void FUNC_5(struct serdev_device *VAR_0)
{
 struct qca_serdev *VAR_1 = FUNC_4(VAR_0);

 if (FUNC_2(VAR_1->btsoc_type))
  FUNC_3(&VAR_1->serdev_hu);
 else
  FUNC_0(VAR_1->susclk);

 FUNC_1(&VAR_1->serdev_hu);
}
