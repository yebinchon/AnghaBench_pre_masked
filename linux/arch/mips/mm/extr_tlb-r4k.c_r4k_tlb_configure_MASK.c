
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tlbsize; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 () ;
 scalar_t__ VAR_9 ;
 TYPE_1__ VAR_10 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_11 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(void)
{







 FUNC_7(VAR_8);
 FUNC_0();
 if (FUNC_4() != VAR_8)
  FUNC_3("MMU doesn't support PAGE_SIZE=0x%lx", VAR_4);

 FUNC_8(0);
 if (FUNC_1() == VAR_0 ||
     FUNC_1() == VAR_1 ||
     FUNC_1() == VAR_2 ||
     FUNC_1() == VAR_3)
  FUNC_6(0);

 if (VAR_9) {







  FUNC_5(VAR_6 | VAR_7);

 }

 VAR_11 = VAR_10.tlbsize - 1;


 FUNC_2();


}
