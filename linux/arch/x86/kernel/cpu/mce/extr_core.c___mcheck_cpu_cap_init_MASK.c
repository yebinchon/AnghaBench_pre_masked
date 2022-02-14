
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_2__ {int ser; int rip_msr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*,int ,int,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void FUNC_6(void)
{
 u64 VAR_8;
 u8 VAR_9;

 FUNC_3(VAR_4, VAR_8);

 VAR_9 = VAR_8 & VAR_1;

 if (VAR_9 > VAR_0) {
  FUNC_2("CPU%d: Using only %u machine check banks out of %u\n",
   FUNC_4(), VAR_0, VAR_9);
  VAR_9 = VAR_0;
 }

 FUNC_5(VAR_7, VAR_9);

 FUNC_1();


 if ((VAR_8 & VAR_2) && FUNC_0(VAR_8) >= 9)
  VAR_6.rip_msr = VAR_5;

 if (VAR_8 & VAR_3)
  VAR_6.ser = 1;
}
