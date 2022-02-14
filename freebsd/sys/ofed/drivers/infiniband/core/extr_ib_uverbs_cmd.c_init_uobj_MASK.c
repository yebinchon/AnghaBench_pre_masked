
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct uverbs_lock_class {int dummy; } ;
struct ib_uobject {scalar_t__ live; int mutex; int ref; struct ib_ucontext* context; int user_handle; } ;
struct ib_ucontext {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ib_uobject *VAR_0, u64 VAR_1,
        struct ib_ucontext *VAR_2, struct uverbs_lock_class *VAR_3)
{
 VAR_0->user_handle = VAR_1;
 VAR_0->context = VAR_2;
 FUNC_1(&VAR_0->ref);
 FUNC_0(&VAR_0->mutex);
 VAR_0->live = 0;
}
