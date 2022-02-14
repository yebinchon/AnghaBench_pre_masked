
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_label; } ;
struct ucred {int dummy; } ;
struct mount {int mnt_label; } ;
struct componentname {int dummy; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct ucred*,struct mount*,int ,struct vnode*,int ,struct vnode*,int ,struct componentname*) ;
 int VAR_1 ;
 int FUNC_2 (struct vnode*,int,int ,int ) ;
 int FUNC_3 (struct vnode*,struct ucred*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*) ;
 int VAR_4 ;

int
FUNC_5(struct ucred *VAR_5, struct mount *VAR_6,
    struct vnode *VAR_7, struct vnode *VAR_8, struct componentname *VAR_9)
{
 int VAR_10;

 FUNC_0(VAR_7, "mac_vnode_create_extattr");
 FUNC_0(VAR_8, "mac_vnode_create_extattr");

 VAR_10 = FUNC_3(VAR_8, VAR_5, VAR_2);
 if (VAR_10 == VAR_0) {
  if (VAR_3 == 0) {
   FUNC_4("Warning: transactions not supported "
       "in EA write.\n");
   VAR_3 = 1;
  }
 } else if (VAR_10)
  return (VAR_10);

 FUNC_1(VAR_4, VAR_5, VAR_6, VAR_6->mnt_label, VAR_7,
     VAR_7->v_label, VAR_8, VAR_8->v_label, VAR_9);

 if (VAR_10) {
  FUNC_2(VAR_8, 0, VAR_1, VAR_2);
  return (VAR_10);
 }

 VAR_10 = FUNC_2(VAR_8, 1, VAR_1, VAR_2);
 if (VAR_10 == VAR_0)
  VAR_10 = 0;

 return (VAR_10);
}
