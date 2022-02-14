
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct thread {int dummy; } ;
struct TYPE_2__ {scalar_t__* la_ioint_irqs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (scalar_t__) ;
 struct thread* VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (char*) ;
 int VAR_9 ;
 int FUNC_5 (struct thread*,int ) ;
 scalar_t__ FUNC_6 (struct thread*) ;
 int FUNC_7 (struct thread*) ;
 int FUNC_8 (struct thread*) ;
 int FUNC_9 (struct thread*) ;

__attribute__((used)) static void
FUNC_10(u_int VAR_10, u_int VAR_11, u_int VAR_12)
{
 struct thread *VAR_13;

 FUNC_0(VAR_11 >= VAR_0 && VAR_11 != VAR_3 &&
     VAR_11 <= VAR_0 + VAR_1,
     ("Vector %u does not map to an IRQ line", VAR_11));
 FUNC_0(VAR_12 < VAR_8, ("Invalid IRQ %u", VAR_12));
 FUNC_0(VAR_7[VAR_10].la_ioint_irqs[VAR_11 - VAR_0] ==
     VAR_12, ("IRQ mismatch"));
 VAR_13 = VAR_5;
 if (!VAR_9) {
  FUNC_8(VAR_13);
  if (FUNC_6(VAR_13))
   FUNC_4("apic_free_vector: Thread already bound.\n");
  FUNC_5(VAR_13, FUNC_1(VAR_10));
  FUNC_9(VAR_13);
 }
 FUNC_2(&VAR_6);
 VAR_7[VAR_10].la_ioint_irqs[VAR_11 - VAR_0] = VAR_4;
 FUNC_3(&VAR_6);
 if (!VAR_9) {
  FUNC_8(VAR_13);
  FUNC_7(VAR_13);
  FUNC_9(VAR_13);
 }
}
