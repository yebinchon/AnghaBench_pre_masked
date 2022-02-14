
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serdev_device {int dummy; } ;
struct mtk_data {scalar_t__ vbackup; } ;
struct gnss_serial {int dummy; } ;


 int FUNC_0 (struct gnss_serial*) ;
 int FUNC_1 (struct gnss_serial*) ;
 struct mtk_data* FUNC_2 (struct gnss_serial*) ;
 int FUNC_3 (scalar_t__) ;
 struct gnss_serial* FUNC_4 (struct serdev_device*) ;

__attribute__((used)) static void FUNC_5(struct serdev_device *VAR_0)
{
 struct gnss_serial *VAR_1 = FUNC_4(VAR_0);
 struct mtk_data *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(VAR_1);
 if (VAR_2->vbackup)
  FUNC_3(VAR_2->vbackup);
 FUNC_1(VAR_1);
}
