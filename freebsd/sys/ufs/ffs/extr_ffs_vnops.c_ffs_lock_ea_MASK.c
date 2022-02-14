
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_interlock; } ;
struct inode {int i_flag; int i_ea_refs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*) ;
 struct inode* FUNC_2 (struct vnode*) ;
 int FUNC_3 (int *,int *,scalar_t__,char*,int ) ;

__attribute__((used)) static void
FUNC_4(struct vnode *VAR_3)
{
 struct inode *VAR_4;

 VAR_4 = FUNC_2(VAR_3);
 FUNC_0(VAR_3);
 while (VAR_4->i_flag & VAR_0) {
  VAR_4->i_flag |= VAR_1;
  FUNC_3(&VAR_4->i_ea_refs, &VAR_3->v_interlock, VAR_2 + 2, "ufs_ea",
      0);
 }
 VAR_4->i_flag |= VAR_0;
 FUNC_1(VAR_3);
}
