
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int v_mount; } ;
typedef int daddr_t ;
struct TYPE_2__ {int um_fs; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct vnode *VAR_0, daddr_t VAR_1)
{

 return (FUNC_2(FUNC_0(VAR_0->v_mount)->um_fs, FUNC_1(VAR_0), VAR_1));
}
