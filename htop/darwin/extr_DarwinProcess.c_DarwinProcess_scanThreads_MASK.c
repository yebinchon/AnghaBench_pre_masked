
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_address_t ;
typedef int thread_port_array_t ;
typedef int thread_info_t ;
typedef scalar_t__ thread_info_data_t ;
typedef TYPE_1__* thread_basic_info_t ;
typedef int * thread_array_t ;
typedef int task_t ;
typedef int task_info_t ;
typedef scalar_t__ task_info_data_t ;
typedef unsigned int mach_msg_type_number_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ integer_t ;
struct TYPE_7__ {int taskAccess; } ;
struct TYPE_6__ {char state; int pid; } ;
struct TYPE_5__ {scalar_t__ run_state; } ;
typedef TYPE_2__ Process ;
typedef TYPE_3__ DarwinProcess ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;





 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ,unsigned int*) ;
 scalar_t__ FUNC_4 (int ,int **,unsigned int*) ;
 scalar_t__ FUNC_5 (int ,int ,int ,unsigned int*) ;
 int FUNC_6 (int ,int ,int) ;

void FUNC_7(DarwinProcess *VAR_5) {
   Process* VAR_6 = (Process*) VAR_5;
   kern_return_t VAR_7;

   if (!VAR_5->taskAccess) {
      return;
   }

   if (VAR_6->state == 'Z') {
      return;
   }

   task_t VAR_8;
   VAR_7 = FUNC_2(FUNC_1(), VAR_6->pid, &VAR_8);
   if (VAR_7 != VAR_0) {
      VAR_5->taskAccess = 0;
      return;
   }

   task_info_data_t VAR_9;
   mach_msg_type_number_t VAR_10 = VAR_2;
   VAR_7 = FUNC_3(VAR_8, VAR_1, (task_info_t) VAR_9, &VAR_10);
   if (VAR_7 != VAR_0) {
      VAR_5->taskAccess = 0;
      return;
   }

   thread_array_t VAR_11;
   mach_msg_type_number_t VAR_12;
   VAR_7 = FUNC_4(VAR_8, &VAR_11, &VAR_12);
   if (VAR_7 != VAR_0) {
      VAR_5->taskAccess = 0;
      FUNC_0(FUNC_1(), VAR_8);
      return;
   }

   integer_t VAR_13 = 999;
   for (unsigned int VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {
      thread_info_data_t VAR_15;
      mach_msg_type_number_t VAR_16 = VAR_4;
      VAR_7 = FUNC_5(VAR_11[VAR_14], VAR_3, (thread_info_t)VAR_15, &VAR_16);
      if (VAR_7 == VAR_0) {
         thread_basic_info_t VAR_17 = (thread_basic_info_t) VAR_15;
         if (VAR_17->run_state < VAR_13) {
            VAR_13 = VAR_17->run_state;
         }
         FUNC_0(FUNC_1(), VAR_11[VAR_14]);
      }
   }
   FUNC_6(FUNC_1(), (vm_address_t) VAR_11, sizeof(thread_port_array_t) * VAR_12);
   FUNC_0(FUNC_1(), VAR_8);

   char VAR_18 = '?';
   switch (VAR_13) {
      case 131: VAR_18 = 'R'; break;
      case 130: VAR_18 = 'S'; break;
      case 128: VAR_18 = 'W'; break;
      case 129: VAR_18 = 'U'; break;
      case 132: VAR_18 = 'H'; break;
   }
   VAR_6->state = VAR_18;
}
