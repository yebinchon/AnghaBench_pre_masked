
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vshr ;
typedef int uint64_t ;
struct thread {struct pcb* td_pcb; } ;
struct TYPE_4__ {TYPE_1__* fpr; } ;
struct pcb {int pcb_flags; TYPE_2__ pcb_fpu; int pcb_vec; } ;
struct TYPE_3__ {int * vsr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *,char*,int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct thread*) ;
 int FUNC_3 (struct thread*) ;

void
FUNC_4(struct thread *VAR_4, void *VAR_5, size_t *VAR_6)
{
 size_t VAR_7;
 struct pcb *VAR_8;
 uint64_t VAR_9[32];
 uint64_t *VAR_10;
 int VAR_11;

 VAR_7 = 0;
 VAR_8 = VAR_4->td_pcb;

 if (VAR_8->pcb_flags & VAR_2) {
  FUNC_3(VAR_4);
  if (VAR_5 != ((void*)0)) {
   VAR_7 += FUNC_0(VAR_0,
       &VAR_8->pcb_vec, (char *)VAR_5 + VAR_7,
       sizeof(VAR_8->pcb_vec), ((void*)0));
  } else
   VAR_7 += FUNC_0(VAR_0, ((void*)0), ((void*)0),
       sizeof(VAR_8->pcb_vec), ((void*)0));
 }

 if (VAR_8->pcb_flags & VAR_3) {
  FUNC_2(VAR_4);
  if (VAR_5 != ((void*)0)) {





   for (VAR_11 = 0; VAR_11 < FUNC_1(VAR_9); VAR_11++) {
    VAR_10 = (uint64_t *)&VAR_8->pcb_fpu.fpr[VAR_11].vsr[2];
    VAR_9[VAR_11] = *VAR_10;
   }
   VAR_7 += FUNC_0(VAR_1,
       VAR_9, (char *)VAR_5 + VAR_7,
       sizeof(VAR_9), ((void*)0));
  } else
   VAR_7 += FUNC_0(VAR_1, ((void*)0), ((void*)0),
       sizeof(VAR_9), ((void*)0));
 }

 *VAR_6 = VAR_7;
}
