
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_vflag; int v_mount; } ;
struct ufsmount {int dummy; } ;
struct inode {int * i_dquot; scalar_t__ i_gid; scalar_t__ i_uid; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct vnode* FUNC_0 (struct inode*) ;
 size_t VAR_2 ;
 struct ufsmount* FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct vnode*,scalar_t__,struct ufsmount*,size_t,int *) ;

int
FUNC_3(struct inode *VAR_4)
{
 struct ufsmount *VAR_5;
 struct vnode *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_4);





 if ((VAR_6->v_vflag & VAR_3) != 0)
  return (0);




 if ((int)VAR_4->i_uid < 0 || (int)VAR_4->i_gid < 0)
  return (0);
 VAR_5 = FUNC_1(VAR_6->v_mount);




 if ((VAR_7 =
  FUNC_2(VAR_6, VAR_4->i_uid, VAR_5, VAR_2, &VAR_4->i_dquot[VAR_2])) &&
     VAR_7 != VAR_0)
  return (VAR_7);




 if ((VAR_7 =
  FUNC_2(VAR_6, VAR_4->i_gid, VAR_5, VAR_1, &VAR_4->i_dquot[VAR_1])) &&
     VAR_7 != VAR_0)
  return (VAR_7);
 return (0);
}
