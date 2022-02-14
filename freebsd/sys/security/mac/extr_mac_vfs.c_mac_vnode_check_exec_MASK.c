
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_label; } ;
struct ucred {int dummy; } ;
struct image_params {int execlabel; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int FUNC_1 (int ,int,struct ucred*,struct vnode*,struct image_params*) ;
 int FUNC_2 (int ,struct ucred*,struct vnode*,int ,struct image_params*,int ) ;
 int VAR_0 ;

int
FUNC_3(struct ucred *VAR_1, struct vnode *VAR_2,
    struct image_params *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_2, "mac_vnode_check_exec");

 FUNC_2(VAR_0, VAR_1, VAR_2, VAR_2->v_label, VAR_3,
     VAR_3->execlabel);
 FUNC_1(VAR_0, VAR_4, VAR_1, VAR_2, VAR_3);

 return (VAR_4);
}
