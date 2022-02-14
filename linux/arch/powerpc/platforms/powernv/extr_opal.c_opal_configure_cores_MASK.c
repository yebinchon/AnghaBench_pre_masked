
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int (* cpu_restore ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

void FUNC_4(void)
{
 u64 VAR_6 = 0;
 VAR_6 |= VAR_2;







 if (FUNC_0(VAR_0)) {
  VAR_6 |= VAR_3;
  if (FUNC_1())
   VAR_6 |= VAR_4;
 }

 FUNC_2(VAR_6);


 if (VAR_5->cpu_restore)
  VAR_5->cpu_restore();
}
