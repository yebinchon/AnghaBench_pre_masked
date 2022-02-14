
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int c_flags; int (* c_label ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int,char*) ;
 int FUNC_1 (int,int,char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

void
FUNC_4(void)
{
 if (VAR_2->c_flags & VAR_0) {
  FUNC_0(0, 20,
      "/0   /1   /2   /3   /4   /5   /6   /7   /8   /9   /10");
  FUNC_0(1, 5, "Load Average");
 }
 if (VAR_2->c_flags & VAR_1) {
  FUNC_0(0, 20,
      "   Total     MFU     MRU    Anon     Hdr   L2Hdr   Other");
  FUNC_0(1, 5, "ZFS ARC     ");
 }
 (*VAR_2->c_label)();



 FUNC_2();
}
