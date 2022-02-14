
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dtl_enable_mask; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int,int,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;

void FUNC_12(int VAR_1, int VAR_2)
{






 if (FUNC_0(VAR_0) && !VAR_1) {
  int VAR_3;
  int VAR_4 = FUNC_4();
  int VAR_5 = FUNC_2();

  if (FUNC_1()->dtl_enable_mask) {
   VAR_3 = FUNC_5(VAR_5);
   if (VAR_3) {
    FUNC_3("WARNING: DTL deregistration for cpu "
           "%d (hw %d) failed with %d\n",
           VAR_4, VAR_5, VAR_3);
   }
  }

  VAR_3 = FUNC_6(VAR_5);
  if (VAR_3) {
   FUNC_3("WARNING: SLB shadow buffer deregistration "
          "for cpu %d (hw %d) failed with %d\n",
          VAR_4, VAR_5, VAR_3);
  }

  VAR_3 = FUNC_7(VAR_5);
  if (VAR_3) {
   FUNC_3("WARNING: VPA deregistration for cpu %d "
          "(hw %d) failed with %d\n", VAR_4, VAR_5, VAR_3);
  }
 }

 if (FUNC_9()) {
  FUNC_11();

  if (!VAR_2)
   FUNC_10();
 } else
  FUNC_8(VAR_2);
}
