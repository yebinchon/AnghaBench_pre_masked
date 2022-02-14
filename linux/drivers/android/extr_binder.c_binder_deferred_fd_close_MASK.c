
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binder_task_work_cb {int twork; scalar_t__ file; } ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct binder_task_work_cb*) ;
 struct binder_task_work_cb* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int *,int) ;

__attribute__((used)) static void FUNC_5(int VAR_3)
{
 struct binder_task_work_cb *VAR_4;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return;
 FUNC_1(&VAR_4->twork, VAR_1);
 FUNC_0(VAR_3, &VAR_4->file);
 if (VAR_4->file)
  FUNC_4(VAR_2, &VAR_4->twork, 1);
 else
  FUNC_2(VAR_4);
}
