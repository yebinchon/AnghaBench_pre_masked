
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rbd_obj_request {int flags; TYPE_1__* img_request; } ;
struct TYPE_4__ {int features; } ;
struct rbd_device {TYPE_2__ header; } ;
struct TYPE_3__ {struct rbd_device* rbd_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rbd_obj_request*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct rbd_obj_request *VAR_5)
{
 struct rbd_device *VAR_6 = VAR_5->img_request->rbd_dev;
 u8 VAR_7 = VAR_2;

 if (!(VAR_6->header.features & VAR_3))
  return 1;

 if (!(VAR_5->flags & VAR_4))
  return 1;

 return FUNC_0(VAR_5, VAR_0, VAR_1,
         &VAR_7);
}
