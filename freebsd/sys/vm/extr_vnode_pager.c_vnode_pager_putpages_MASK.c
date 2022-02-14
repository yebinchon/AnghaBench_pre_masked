
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_page_t ;
typedef TYPE_1__* vm_object_t ;
struct vnode {int dummy; } ;
struct TYPE_5__ {struct vnode* handle; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_3 (struct vnode*,int *,int,int,int*) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(vm_object_t VAR_3, vm_page_t *VAR_4, int VAR_5,
    int VAR_6, int *VAR_7)
{
 int VAR_8;
 struct vnode *VAR_9;
 int VAR_10 = VAR_5 * VAR_1;
 if (FUNC_4())
  VAR_6 |= VAR_2;




 VAR_9 = VAR_3->handle;
 FUNC_2(VAR_3);
 VAR_8 = FUNC_3(VAR_9, VAR_4, VAR_10, VAR_6, VAR_7);
 FUNC_0(VAR_8 != VAR_0,
     ("vnode_pager: stale FS putpages\n"));
 FUNC_1(VAR_3);
}
