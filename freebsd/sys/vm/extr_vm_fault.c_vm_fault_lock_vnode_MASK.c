
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct faultstate {struct vnode* vp; TYPE_1__* object; } ;
struct TYPE_2__ {scalar_t__ type; struct vnode* handle; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct vnode*) ;
 int VAR_8 ;
 int FUNC_3 (struct faultstate*) ;
 int FUNC_4 (struct faultstate*) ;
 int FUNC_5 (struct faultstate*) ;
 int FUNC_6 (struct vnode*) ;
 int FUNC_7 (struct vnode*,int,int ) ;
 int FUNC_8 (struct vnode*) ;

__attribute__((used)) static int
FUNC_9(struct faultstate *VAR_9)
{
 struct vnode *VAR_10;
 int VAR_11, VAR_12;

 if (VAR_9->object->type != VAR_7)
  return (VAR_1);
 VAR_10 = VAR_9->object->handle;
 if (VAR_10 == VAR_9->vp) {
  FUNC_0(VAR_10, "saved vnode is not locked");
  return (VAR_1);
 }





 FUNC_5(VAR_9);

 VAR_12 = FUNC_2(VAR_10);
 if (VAR_12 != VAR_3)
  VAR_12 = VAR_6;







 VAR_11 = FUNC_7(VAR_10, VAR_12 | VAR_2 | VAR_4, VAR_8);
 if (VAR_11 == 0) {
  VAR_9->vp = VAR_10;
  return (VAR_1);
 }

 FUNC_8(VAR_10);
 FUNC_3(VAR_9);
 FUNC_4(VAR_9);
 VAR_11 = FUNC_7(VAR_10, VAR_12 | VAR_5 | VAR_2, VAR_8);
 FUNC_6(VAR_10);
 VAR_9->vp = VAR_10;
 FUNC_1(VAR_11 == 0, ("vm_fault: vget failed %d", VAR_11));
 return (VAR_0);
}
