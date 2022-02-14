
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vop_getpages_iodone_t ;
typedef int vm_page_t ;
typedef TYPE_1__* vm_object_t ;
struct vnode {int dummy; } ;
struct TYPE_5__ {struct vnode* handle; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct vnode*,int *,int,int*,int*,int ,void*) ;

__attribute__((used)) static int
FUNC_4(vm_object_t VAR_1, vm_page_t *VAR_2, int VAR_3,
    int *VAR_4, int *VAR_5, vop_getpages_iodone_t VAR_6, void *VAR_7)
{
 struct vnode *VAR_8;
 int VAR_9;

 VAR_8 = VAR_1->handle;
 FUNC_2(VAR_1);
 VAR_9 = FUNC_3(VAR_8, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 FUNC_0(VAR_9 != VAR_0,
     ("vnode_pager: FS getpages_async not implemented\n"));
 FUNC_1(VAR_1);
 return (VAR_9);
}
