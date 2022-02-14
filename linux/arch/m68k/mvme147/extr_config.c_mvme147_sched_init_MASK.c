
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int irq_handler_t ;
struct TYPE_2__ {int t1_cntrl; int t1_int_cntrl; int t1_preload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,char*,int ) ;

void FUNC_3 (irq_handler_t VAR_10)
{
 if (FUNC_2(VAR_2, VAR_9, VAR_0,
   "timer 1", VAR_10))
  FUNC_1("Couldn't register timer interrupt\n");



 VAR_7->t1_preload = VAR_6;
 VAR_7->t1_cntrl = 0x0;
 VAR_7->t1_cntrl = 0x3;
 VAR_7->t1_int_cntrl = VAR_5;
 VAR_7->t1_int_cntrl = VAR_1|VAR_3;

 FUNC_0(&VAR_8, VAR_4);
}
