
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct trapframe {int dummy; } ;
struct intsrc {scalar_t__ is_pic; int * is_event; } ;
struct atpic {int at_ioaddr; } ;
struct TYPE_2__ {struct intsrc at_intsrc; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct intsrc*,struct trapframe*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

void
FUNC_7(u_int VAR_5, struct trapframe *VAR_6)
{
 struct intsrc *VAR_7;

 FUNC_1(VAR_5 < VAR_0, ("unknown int %u\n", VAR_5));
 VAR_7 = &VAR_4[VAR_5].at_intsrc;





 if (VAR_7->is_event == ((void*)0) && (VAR_5 == 7 || VAR_5 == 15)) {
  int VAR_8, VAR_9;





  VAR_8 = ((struct atpic *)VAR_7->is_pic)->at_ioaddr;
  FUNC_5();
  FUNC_4(VAR_8, VAR_3 | VAR_2 | VAR_1);
  VAR_9 = FUNC_2(VAR_8);
  FUNC_4(VAR_8, VAR_3 | VAR_2);
  FUNC_6();
  if ((VAR_9 & FUNC_0(7)) == 0)
   return;
 }
 FUNC_3(VAR_7, VAR_6);
}
