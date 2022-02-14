
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct inode {int i_flag; int i_ea_refs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*) ;
 struct inode* FUNC_2 (struct vnode*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct vnode *VAR_2)
{
 struct inode *VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 FUNC_0(VAR_2);
 if (VAR_3->i_flag & VAR_1)
  FUNC_3(&VAR_3->i_ea_refs);
 VAR_3->i_flag &= ~(VAR_0 | VAR_1);
 FUNC_1(VAR_2);
}
