
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intsrc {int dummy; } ;
struct TYPE_2__ {scalar_t__ is_pic; int * is_straycount; int * is_count; } ;
struct atpic_intsrc {int at_trigger; int at_intr; int at_intr_pti; scalar_t__ at_irq; TYPE_1__ at_intsrc; int at_straycount; int at_count; } ;
struct atpic {scalar_t__ at_intbase; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 struct atpic_intsrc* VAR_9 ;
 int FUNC_0 (struct intsrc*) ;
 int * VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (scalar_t__,int ,int ,int ,int ) ;

void
FUNC_4(void)
{
 struct atpic_intsrc *VAR_13;
 int VAR_14;


 FUNC_2(&VAR_10[VAR_4], 0);
 FUNC_2(&VAR_10[VAR_8], 1);
 FUNC_0((struct intsrc *)&VAR_9[VAR_1]);


 for (VAR_14 = 0, VAR_13 = VAR_9; VAR_14 < VAR_5; VAR_14++, VAR_13++) {
  if (VAR_14 == VAR_1)
   continue;
  VAR_13->at_intsrc.is_count = &VAR_13->at_count;
  VAR_13->at_intsrc.is_straycount = &VAR_13->at_straycount;
  FUNC_3(((struct atpic *)VAR_13->at_intsrc.is_pic)->at_intbase +
      VAR_13->at_irq, VAR_12 ? VAR_13->at_intr_pti : VAR_13->at_intr, VAR_6,
      VAR_7, VAR_0);
 }
 if (VAR_11) {
  for (VAR_14 = 0, VAR_13 = VAR_9; VAR_14 < VAR_5; VAR_14++, VAR_13++)
   VAR_13->at_trigger = FUNC_1(VAR_14);
 } else {
  for (VAR_14 = 0, VAR_13 = VAR_9; VAR_14 < VAR_5; VAR_14++, VAR_13++)
   switch (VAR_14) {
   case 0:
   case 1:
   case 2:
   case 8:
   case 13:
    VAR_13->at_trigger = VAR_2;
    break;
   default:
    VAR_13->at_trigger = VAR_3;
    break;
   }
 }
}
