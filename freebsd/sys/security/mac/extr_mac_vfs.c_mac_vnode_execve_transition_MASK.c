
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_label; } ;
struct ucred {int dummy; } ;
struct label {int dummy; } ;
struct image_params {int execlabel; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int FUNC_1 (int ,struct ucred*,struct ucred*,struct vnode*,int ,struct label*,struct image_params*,int ) ;
 int VAR_0 ;

void
FUNC_2(struct ucred *VAR_1, struct ucred *VAR_2,
    struct vnode *VAR_3, struct label *VAR_4, struct image_params *VAR_5)
{

 FUNC_0(VAR_3, "mac_vnode_execve_transition");

 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3,
     VAR_3->v_label, VAR_4, VAR_5, VAR_5->execlabel);
}
