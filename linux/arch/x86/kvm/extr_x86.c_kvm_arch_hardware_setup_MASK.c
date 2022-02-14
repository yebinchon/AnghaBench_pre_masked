
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int (* hardware_setup ) () ;} ;


 int FUNC_0 (int ,int ) ;
 unsigned long long VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long long VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 () ;
 int VAR_6 ;

int FUNC_4(void)
{
 int VAR_7;

 VAR_7 = VAR_5->hardware_setup();
 if (VAR_7 != 0)
  return VAR_7;

 if (VAR_1) {






  u64 VAR_8 = FUNC_2(0x7fffffffULL,
         FUNC_0(VAR_3, VAR_6));
  VAR_2 = VAR_8;

  VAR_0 = 1ULL << VAR_4;
 }

 FUNC_1();
 return 0;
}
