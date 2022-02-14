
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbd_obj_request {int write_state; int flags; int num_img_extents; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rbd_obj_request*,int) ;
 scalar_t__ FUNC_1 (struct rbd_obj_request*) ;
 scalar_t__ FUNC_2 (struct rbd_obj_request*) ;

__attribute__((used)) static int FUNC_3(struct rbd_obj_request *VAR_4)
{
 int VAR_5;


 VAR_5 = FUNC_0(VAR_4, 1);
 if (VAR_5)
  return VAR_5;

 if (FUNC_1(VAR_4))
  VAR_4->flags |= VAR_0;
 if (!VAR_4->num_img_extents) {
  VAR_4->flags |= VAR_2;
  if (FUNC_2(VAR_4))
   VAR_4->flags |= VAR_1;
 }

 VAR_4->write_state = VAR_3;
 return 0;
}
