
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbd_obj_request {int write_state; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rbd_obj_request*,int) ;
 scalar_t__ FUNC_1 (struct rbd_obj_request*) ;

__attribute__((used)) static int FUNC_2(struct rbd_obj_request *VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_0(VAR_2, 1);
 if (VAR_3)
  return VAR_3;

 if (FUNC_1(VAR_2))
  VAR_2->flags |= VAR_0;

 VAR_2->write_state = VAR_1;
 return 0;
}
