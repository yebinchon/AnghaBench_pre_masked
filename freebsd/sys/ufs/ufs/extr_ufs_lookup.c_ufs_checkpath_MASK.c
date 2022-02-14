
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
struct vnode {struct mount* v_mount; } ;
struct ucred {int dummy; } ;
struct mount {int dummy; } ;
struct inode {scalar_t__ i_number; } ;
typedef scalar_t__ ino_t ;
struct TYPE_2__ {scalar_t__ i_number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vnode* FUNC_0 (struct inode*) ;
 int FUNC_1 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct mount*,scalar_t__,int,struct vnode**) ;
 TYPE_1__* FUNC_3 (struct vnode*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct vnode*,struct ucred*,scalar_t__*,struct vnode**) ;
 int FUNC_6 (struct vnode*) ;

int
FUNC_7(ino_t VAR_6, ino_t VAR_7, struct inode *VAR_8, struct ucred *VAR_9, ino_t *VAR_10)
{
 struct mount *VAR_11;
 struct vnode *VAR_12, *VAR_13, *VAR_14;
 int VAR_15;
 ino_t VAR_16;

 VAR_13 = VAR_12 = FUNC_0(VAR_8);
 VAR_11 = VAR_13->v_mount;
 *VAR_10 = 0;
 if (VAR_8->i_number == VAR_6)
  return (VAR_0);
 if (VAR_8->i_number == VAR_7)
  return (0);
 if (VAR_8->i_number == VAR_5)
  return (0);
 for (;;) {
  VAR_15 = FUNC_5(VAR_13, VAR_9, &VAR_16, &VAR_14);
  if (VAR_15 != 0)
   break;
  if (VAR_16 == VAR_6) {
   VAR_15 = VAR_1;
   break;
  }
  if (VAR_16 == VAR_5)
   break;
  if (VAR_16 == VAR_7)
   break;
  if (VAR_14 == ((void*)0)) {
   VAR_15 = FUNC_2(VAR_11, VAR_16, VAR_4 | VAR_3,
       &VAR_14);
   if (VAR_15 != 0) {
    *VAR_10 = VAR_16;
    break;
   }
  }
  FUNC_1(VAR_16 == FUNC_3(VAR_14)->i_number,
      ("directory %ju reparented\n",
      (uintmax_t)FUNC_3(VAR_14)->i_number));
  if (VAR_13 != VAR_12)
   FUNC_6(VAR_13);
  VAR_13 = VAR_14;
 }

 if (VAR_15 == VAR_2)
  FUNC_4("checkpath: .. not a directory\n");
 if (VAR_14 != ((void*)0))
  FUNC_6(VAR_14);
 if (VAR_13 != VAR_12)
  FUNC_6(VAR_13);
 return (VAR_15);
}
