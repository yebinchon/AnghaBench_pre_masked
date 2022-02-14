
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u64 ;
struct TYPE_3__ {int tlbsize; } ;
struct TYPE_4__ {unsigned int tlbsize; unsigned int tlbsizevtlb; TYPE_1__ guest; } ;



 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 unsigned int FUNC_4 () ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(void)
{
 u64 VAR_5;
 unsigned int VAR_6;


 FUNC_1();

 switch (FUNC_0()) {
 case 128:





  VAR_5 = FUNC_4();
  VAR_6 = ((VAR_5 & VAR_0)
       >> VAR_1) + 1;
  VAR_5 &= ~VAR_2;
  VAR_5 |= VAR_6 - 1;
  FUNC_5(VAR_5);


  VAR_4.tlbsize = VAR_6;
  VAR_4.tlbsizevtlb = VAR_6;
  VAR_4.guest.tlbsize = 0;


  FUNC_3();
  break;
 }

 if (VAR_3) {
  FUNC_6(0);
  FUNC_2();
 }
}
