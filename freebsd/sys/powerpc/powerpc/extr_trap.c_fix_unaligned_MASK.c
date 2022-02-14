
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef double uint32_t ;
struct TYPE_10__ {int dsisr; } ;
struct TYPE_9__ {int esr; } ;
struct TYPE_11__ {TYPE_3__ aim; TYPE_2__ booke; } ;
struct trapframe {scalar_t__ dar; TYPE_4__ cpu; scalar_t__ srr0; int * fixreg; } ;
struct thread {TYPE_7__* td_pcb; } ;
typedef int inst ;
struct TYPE_13__ {TYPE_5__* fpr; } ;
struct TYPE_8__ {int ** vr; } ;
struct TYPE_14__ {TYPE_6__ pcb_fpu; TYPE_1__ pcb_vec; } ;
struct TYPE_12__ {double fpr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (double) ;

 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

 struct thread* FUNC_3 (struct thread*) ;
 scalar_t__ FUNC_4 (void*,double*,int) ;
 scalar_t__ FUNC_5 (double*,void*,int) ;
 int FUNC_6 (struct thread*) ;
 int FUNC_7 (struct thread*) ;
 int FUNC_8 (struct thread*) ;
 int FUNC_9 (struct thread*) ;
 struct thread* VAR_2 ;

__attribute__((used)) static int
FUNC_10(struct thread *VAR_3, struct trapframe *VAR_4)
{
 struct thread *VAR_5;



 int VAR_6, VAR_7;
 double *VAR_8;
 VAR_6 = FUNC_1(VAR_4->cpu.aim.dsisr);


 switch (VAR_6) {
 case 129:
 case 128:





  VAR_7 = FUNC_2(VAR_4->cpu.aim.dsisr);

  VAR_8 = &VAR_3->td_pcb->pcb_fpu.fpr[VAR_7].fpr;
  VAR_5 = FUNC_3(VAR_5);





  if (VAR_5 != VAR_3) {
   if (VAR_5)
    FUNC_8(VAR_5);
   FUNC_6(VAR_3);
  }
  FUNC_8(VAR_3);

  if (VAR_6 == 129) {
   if (FUNC_4((void *)VAR_4->dar, VAR_8,
       sizeof(double)) != 0)
    return (-1);
   FUNC_6(VAR_3);
  } else {
   if (FUNC_5(VAR_8, (void *)VAR_4->dar,
       sizeof(double)) != 0)
    return (-1);
  }
  return (0);
  break;
 }


 return (-1);
}
