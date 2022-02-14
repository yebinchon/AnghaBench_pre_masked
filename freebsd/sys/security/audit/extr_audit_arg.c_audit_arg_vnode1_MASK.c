
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct TYPE_2__ {int ar_arg_vnode1; } ;
struct kaudit_record {TYPE_1__ k_ar; } ;


 int FUNC_0 (struct kaudit_record*,int ) ;
 int FUNC_1 (struct kaudit_record*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct vnode*,int *) ;
 struct kaudit_record* FUNC_3 () ;

void
FUNC_4(struct vnode *VAR_1)
{
 struct kaudit_record *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_3();
 if (VAR_2 == ((void*)0))
  return;

 FUNC_0(VAR_2, VAR_0);
 VAR_3 = FUNC_2(VAR_1, &VAR_2->k_ar.ar_arg_vnode1);
 if (VAR_3 == 0)
  FUNC_1(VAR_2, VAR_0);
}
