
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binder_thread {int dummy; } ;
struct binder_proc {int dummy; } ;


 int VAR_0 ;
 struct binder_thread* FUNC_0 (struct binder_proc*,struct binder_thread*) ;
 int FUNC_1 (struct binder_proc*) ;
 int FUNC_2 (struct binder_proc*) ;
 int FUNC_3 (struct binder_thread*) ;
 struct binder_thread* FUNC_4 (int,int ) ;

__attribute__((used)) static struct binder_thread *FUNC_5(struct binder_proc *VAR_1)
{
 struct binder_thread *VAR_2;
 struct binder_thread *VAR_3;

 FUNC_1(VAR_1);
 VAR_2 = FUNC_0(VAR_1, ((void*)0));
 FUNC_2(VAR_1);
 if (!VAR_2) {
  VAR_3 = FUNC_4(sizeof(*VAR_2), VAR_0);
  if (VAR_3 == ((void*)0))
   return ((void*)0);
  FUNC_1(VAR_1);
  VAR_2 = FUNC_0(VAR_1, VAR_3);
  FUNC_2(VAR_1);
  if (VAR_2 != VAR_3)
   FUNC_3(VAR_3);
 }
 return VAR_2;
}
