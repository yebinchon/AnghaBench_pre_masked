
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ufs2_dinode {int di_extsize; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct inode {int i_ea_refs; scalar_t__ i_ea_error; int i_ea_len; int * i_ea_area; struct ufs2_dinode* i_din2; } ;


 struct inode* FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (int **,struct vnode*,struct thread*,int ) ;
 int FUNC_3 (struct vnode*) ;

__attribute__((used)) static int
FUNC_4(struct vnode *VAR_0, struct ucred *VAR_1, struct thread *VAR_2)
{
 struct inode *VAR_3;
 struct ufs2_dinode *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_0(VAR_0);

 FUNC_1(VAR_0);
 if (VAR_3->i_ea_area != ((void*)0)) {
  VAR_3->i_ea_refs++;
  FUNC_3(VAR_0);
  return (0);
 }
 VAR_4 = VAR_3->i_din2;
 VAR_5 = FUNC_2(&VAR_3->i_ea_area, VAR_0, VAR_2, 0);
 if (VAR_5) {
  FUNC_3(VAR_0);
  return (VAR_5);
 }
 VAR_3->i_ea_len = VAR_4->di_extsize;
 VAR_3->i_ea_error = 0;
 VAR_3->i_ea_refs++;
 FUNC_3(VAR_0);
 return (0);
}
