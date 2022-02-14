
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_ooffset_t ;
struct vnode {int v_mount; } ;
typedef int daddr_t ;
struct TYPE_2__ {int um_fs; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static daddr_t
FUNC_2(struct vnode *VAR_0, vm_ooffset_t VAR_1)
{

 return (FUNC_1(FUNC_0(VAR_0->v_mount)->um_fs, VAR_1));
}
