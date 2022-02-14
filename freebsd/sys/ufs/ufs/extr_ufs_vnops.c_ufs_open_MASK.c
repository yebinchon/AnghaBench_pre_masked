
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_open_args {int a_mode; int a_td; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; } ;
struct inode {int i_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct inode* FUNC_1 (struct vnode*) ;
 int VAR_7 ;
 int FUNC_2 (struct vnode*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct vop_open_args *VAR_8)
{
 struct vnode *VAR_9 = VAR_8->a_vp;
 struct inode *VAR_10;

 if (VAR_9->v_type == VAR_6 || VAR_9->v_type == VAR_5)
  return (VAR_1);

 VAR_10 = FUNC_1(VAR_9);



 if ((VAR_10->i_flags & VAR_0) &&
     (VAR_8->a_mode & (VAR_3 | VAR_4)) == VAR_3)
  return (VAR_2);
 FUNC_2(VAR_9, FUNC_0(VAR_10, VAR_7), VAR_8->a_td);
 return (0);
}
