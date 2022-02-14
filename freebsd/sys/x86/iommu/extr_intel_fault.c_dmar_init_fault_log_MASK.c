
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct dmar_unit {int fault_log_size; int unit; int fault_taskqueue; int fault_task; int fault_log; int fault_lock; } ;


 int FUNC_0 (struct dmar_unit*) ;
 int FUNC_1 (struct dmar_unit*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ,int ,struct dmar_unit*) ;
 int FUNC_3 (char*,int*) ;
 int FUNC_4 (struct dmar_unit*) ;
 int FUNC_5 (struct dmar_unit*) ;
 int FUNC_6 (struct dmar_unit*) ;
 int VAR_5 ;
 int FUNC_7 (int,int ,int) ;
 int FUNC_8 (int *,char*,int *,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int,int ,int *) ;
 int FUNC_11 (int *,int,int ,char*,int ) ;
 int VAR_6 ;

int
FUNC_12(struct dmar_unit *VAR_7)
{

 FUNC_8(&VAR_7->fault_lock, "dmarflt", ((void*)0), VAR_0);
 VAR_7->fault_log_size = 256;
 FUNC_3("hw.dmar.fault_log_size", &VAR_7->fault_log_size);
 if (VAR_7->fault_log_size % 2 != 0)
  FUNC_9("hw.dmar_fault_log_size must be even");
 VAR_7->fault_log = FUNC_7(sizeof(uint64_t) * VAR_7->fault_log_size,
     VAR_1, VAR_2 | VAR_3);

 FUNC_2(&VAR_7->fault_task, 0, VAR_5, VAR_7);
 VAR_7->fault_taskqueue = FUNC_10("dmarff", VAR_2,
     VAR_6, &VAR_7->fault_taskqueue);
 FUNC_11(&VAR_7->fault_taskqueue, 1, VAR_4,
     "dmar%d fault taskq", VAR_7->unit);

 FUNC_0(VAR_7);
 FUNC_5(VAR_7);
 FUNC_4(VAR_7);
 FUNC_6(VAR_7);
 FUNC_1(VAR_7);

 return (0);
}
