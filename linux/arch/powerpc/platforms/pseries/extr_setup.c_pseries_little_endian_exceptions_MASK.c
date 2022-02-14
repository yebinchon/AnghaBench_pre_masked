
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* progress ) (char*,int ) ;} ;


 int FUNC_0 (long) ;
 long FUNC_1 () ;
 int FUNC_2 (long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_5 (char*,int ) ;

void FUNC_6(void)
{
 long VAR_1;

 while (1) {
  VAR_1 = FUNC_1();
  if (!FUNC_0(VAR_1))
   break;
  FUNC_3(FUNC_2(VAR_1));
 }
 if (VAR_1) {
  VAR_0.progress("H_SET_MODE LE exception fail", 0);
  FUNC_4("Could not enable little endian exceptions");
 }
}
