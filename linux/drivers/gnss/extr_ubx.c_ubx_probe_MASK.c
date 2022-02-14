
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubx_data {struct gnss_serial* v_bckp; struct gnss_serial* vcc; } ;
struct serdev_device {int dev; } ;
struct gnss_serial {TYPE_1__* gdev; int * ops; } ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct gnss_serial*) ;
 int FUNC_1 (struct gnss_serial*) ;
 struct gnss_serial* FUNC_2 (int *,char*) ;
 struct gnss_serial* FUNC_3 (int *,char*) ;
 struct gnss_serial* FUNC_4 (struct serdev_device*,int) ;
 int FUNC_5 (struct gnss_serial*) ;
 struct ubx_data* FUNC_6 (struct gnss_serial*) ;
 int FUNC_7 (struct gnss_serial*) ;
 int FUNC_8 (struct gnss_serial*) ;
 int FUNC_9 (struct gnss_serial*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_10(struct serdev_device *VAR_3)
{
 struct gnss_serial *VAR_4;
 struct ubx_data *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_4(VAR_3, sizeof(*VAR_5));
 if (FUNC_0(VAR_4)) {
  VAR_6 = FUNC_1(VAR_4);
  return VAR_6;
 }

 VAR_4->ops = &VAR_2;

 VAR_4->gdev->type = VAR_1;

 VAR_5 = FUNC_6(VAR_4);

 VAR_5->vcc = FUNC_2(&VAR_3->dev, "vcc");
 if (FUNC_0(VAR_5->vcc)) {
  VAR_6 = FUNC_1(VAR_5->vcc);
  goto err_free_gserial;
 }

 VAR_5->v_bckp = FUNC_3(&VAR_3->dev, "v-bckp");
 if (FUNC_0(VAR_5->v_bckp)) {
  VAR_6 = FUNC_1(VAR_5->v_bckp);
  if (VAR_6 == -VAR_0)
   VAR_5->v_bckp = ((void*)0);
  else
   goto err_free_gserial;
 }

 if (VAR_5->v_bckp) {
  VAR_6 = FUNC_9(VAR_5->v_bckp);
  if (VAR_6)
   goto err_free_gserial;
 }

 VAR_6 = FUNC_7(VAR_4);
 if (VAR_6)
  goto err_disable_v_bckp;

 return 0;

err_disable_v_bckp:
 if (VAR_5->v_bckp)
  FUNC_8(VAR_5->v_bckp);
err_free_gserial:
 FUNC_5(VAR_4);

 return VAR_6;
}
