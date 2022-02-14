
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct vnode {int v_label; } ;
struct ucred {int dummy; } ;
typedef int gid_t ;


 int FUNC_0 (struct vnode*,char*) ;
 int FUNC_1 (int ,int,struct ucred*,struct vnode*,int ,int ) ;
 int FUNC_2 (int ,struct ucred*,struct vnode*,int ,int ,int ) ;
 int VAR_0 ;

int
FUNC_3(struct ucred *VAR_1, struct vnode *VAR_2, uid_t VAR_3,
    gid_t VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_2, "mac_vnode_check_setowner");

 FUNC_2(VAR_0, VAR_1, VAR_2, VAR_2->v_label, VAR_3, VAR_4);
 FUNC_1(VAR_0, VAR_5, VAR_1, VAR_2, VAR_3, VAR_4);

 return (VAR_5);
}
