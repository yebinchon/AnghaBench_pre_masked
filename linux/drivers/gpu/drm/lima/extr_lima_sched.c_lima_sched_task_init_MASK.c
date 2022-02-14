
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lima_vm {int dummy; } ;
struct lima_sched_task {int num_bos; int deps; int vm; int bos; int base; } ;
struct lima_sched_context {int base; } ;
struct lima_bo {int gem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,struct lima_vm*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct lima_bo**,int,int ) ;
 int FUNC_4 (struct lima_vm*) ;
 int FUNC_5 (int *,int ) ;

int FUNC_6(struct lima_sched_task *VAR_3,
    struct lima_sched_context *VAR_4,
    struct lima_bo **VAR_5, int VAR_6,
    struct lima_vm *VAR_7)
{
 int VAR_8, VAR_9;

 VAR_3->bos = FUNC_3(VAR_5, sizeof(*VAR_5) * VAR_6, VAR_1);
 if (!VAR_3->bos)
  return -VAR_0;

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
  FUNC_0(&VAR_5[VAR_9]->gem);

 VAR_8 = FUNC_1(&VAR_3->base, &VAR_4->base, VAR_7);
 if (VAR_8) {
  FUNC_2(VAR_3->bos);
  return VAR_8;
 }

 VAR_3->num_bos = VAR_6;
 VAR_3->vm = FUNC_4(VAR_7);

 FUNC_5(&VAR_3->deps, VAR_2);

 return 0;
}
