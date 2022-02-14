
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {scalar_t__ v_type; scalar_t__ v_mount; } ;
struct ucred {int dummy; } ;
struct dirtemplate {int dotdot_type; int dotdot_namlen; char* dotdot_name; int dotdot_ino; } ;
typedef int off_t ;
typedef int ino_t ;
typedef int caddr_t ;
struct TYPE_2__ {int i_number; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct vnode*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__* FUNC_3 (struct vnode*) ;
 struct vnode* FUNC_4 (struct vnode*) ;
 int FUNC_5 (int ,struct vnode*,int ,int,int ,int ,int,struct ucred*,int ,int *,int *) ;

__attribute__((used)) static int
FUNC_6(struct vnode *VAR_7, struct ucred *VAR_8, ino_t *VAR_9,
    struct vnode **VAR_10)
{
 struct dirtemplate VAR_11;
 struct vnode *VAR_12;
 int VAR_13, VAR_14;

 FUNC_0(VAR_7, "ufs_dir_dd_ino");
 *VAR_10 = ((void*)0);
 if (VAR_7->v_type != VAR_6)
  return (VAR_0);



 if ((VAR_12 = FUNC_4(VAR_7)) != ((void*)0)) {
  FUNC_1(VAR_12->v_mount == VAR_7->v_mount,
      ("ufs_dir_dd_ino: Unexpected mount point crossing"));
  *VAR_9 = FUNC_3(VAR_12)->i_number;
  *VAR_10 = VAR_12;
  return (0);
 }



 VAR_13 = FUNC_5(VAR_4, VAR_7, (caddr_t)&VAR_11,
     sizeof (struct dirtemplate), (off_t)0, VAR_5,
     VAR_1 | VAR_2, VAR_8, VAR_3, ((void*)0), ((void*)0));
 if (VAR_13 != 0)
  return (VAR_13);

 if (FUNC_2(VAR_7))
  VAR_14 = VAR_11.dotdot_type;
 else
  VAR_14 = VAR_11.dotdot_namlen;



 if (VAR_14 != 2 || VAR_11.dotdot_name[0] != '.' ||
     VAR_11.dotdot_name[1] != '.')
  return (VAR_0);
 *VAR_9 = VAR_11.dotdot_ino;
 return (0);
}
