
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop_device {int worker_task; int lo_number; int worker; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,char*,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct loop_device *VAR_3)
{
 FUNC_1(&VAR_3->worker);
 VAR_3->worker_task = FUNC_2(VAR_2,
   &VAR_3->worker, "loop%d", VAR_3->lo_number);
 if (FUNC_0(VAR_3->worker_task))
  return -VAR_0;
 FUNC_3(VAR_3->worker_task, VAR_1);
 return 0;
}
