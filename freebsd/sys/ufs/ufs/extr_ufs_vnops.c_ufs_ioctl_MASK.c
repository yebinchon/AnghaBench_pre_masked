
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_ioctl_args {int a_command; int a_cred; scalar_t__ a_data; struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (struct vnode*,int ) ;
 int FUNC_1 (struct vnode*,int *) ;
 int FUNC_2 (struct vnode*,int,int *,int ) ;
 int FUNC_3 (struct vnode*,int ) ;

__attribute__((used)) static int
FUNC_4(struct vop_ioctl_args *VAR_3)
{
 struct vnode *VAR_4;
 int VAR_5;

 VAR_4 = VAR_3->a_vp;
 switch (VAR_3->a_command) {
 case 129:
  VAR_5 = FUNC_3(VAR_4, VAR_2);
  if (VAR_5 == 0) {
   VAR_5 = FUNC_1(VAR_4, (off_t *)VAR_3->a_data);
   FUNC_0(VAR_4, 0);
  } else
   VAR_5 = VAR_0;
  return (VAR_5);
 case 128:
  return (FUNC_2(VAR_4, VAR_3->a_command, (off_t *)VAR_3->a_data,
      VAR_3->a_cred));
 default:
  return (VAR_1);
 }
}
