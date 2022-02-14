
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct paca_struct {int dummy; } ;
struct kimage {scalar_t__ type; int control_code_page; int start; scalar_t__ preserve_context; } ;
struct TYPE_7__ {int preempt_count; scalar_t__ flags; } ;
struct TYPE_6__ {int data_offset; size_t paca_index; int * lppaca_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_5__* FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_1__ VAR_4 ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int ,struct kimage*,int ,int ,int) ;
 int VAR_5 ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int VAR_6 ;
 TYPE_1__** VAR_7 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 () ;

void FUNC_13(struct kimage *VAR_8)
{
 bool VAR_9;
 if (!FUNC_4())
  FUNC_5();

 FUNC_9("kexec: Starting switchover sequence.\n");





 FUNC_0()->flags = 0;
 FUNC_0()->preempt_count = VAR_2;





 FUNC_7(&VAR_4, FUNC_2(), sizeof(struct paca_struct));
 VAR_4.data_offset = 0xedeaddeadeeeeeeeUL;




 if (FUNC_3() && !(VAR_8->preserve_context ||
       VAR_8->type == VAR_3)) {
  FUNC_12();
  FUNC_9("kexec: Unshared all shared pages.\n");
 }

 VAR_7[VAR_4.paca_index] = &VAR_4;

 FUNC_11(&VAR_4);
 VAR_9 = FUNC_10() ||
  !(FUNC_1(VAR_0) ||
    FUNC_1(VAR_1));





 FUNC_6(&VAR_5, VAR_8->start, VAR_8,
         FUNC_8(VAR_8->control_code_page),
         VAR_6, VAR_9);

}
