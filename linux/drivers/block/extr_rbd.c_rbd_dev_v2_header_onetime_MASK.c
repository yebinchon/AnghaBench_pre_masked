
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int features; int * object_prefix; } ;
struct rbd_device {TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct rbd_device*) ;
 int FUNC_2 (struct rbd_device*) ;
 int FUNC_3 (struct rbd_device*) ;
 int FUNC_4 (struct rbd_device*) ;
 int FUNC_5 (struct rbd_device*) ;

__attribute__((used)) static int FUNC_6(struct rbd_device *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  goto out_err;





 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  goto out_err;



 if (VAR_2->header.features & VAR_1) {
  VAR_3 = FUNC_4(VAR_2);
  if (VAR_3 < 0)
   goto out_err;
 }

 if (VAR_2->header.features & VAR_0) {
  VAR_3 = FUNC_1(VAR_2);
  if (VAR_3)
   goto out_err;
 }

 FUNC_5(VAR_2);
 return 0;

out_err:
 VAR_2->header.features = 0;
 FUNC_0(VAR_2->header.object_prefix);
 VAR_2->header.object_prefix = ((void*)0);
 return VAR_3;
}
