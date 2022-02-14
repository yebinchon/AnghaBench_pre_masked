
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ s32 ;
struct TYPE_2__ {int pm_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int,int,scalar_t__,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
 int VAR_6 = 0;
 s32 VAR_7 = FUNC_2();

 if (VAR_7 == VAR_4)
  return;


 FUNC_1(VAR_1,
        VAR_1,
        VAR_7,
        VAR_5.pm_ctrl);
 FUNC_3(
  (((FUNC_0(VAR_7,
        VAR_5.pm_ctrl) &
     VAR_2) >>
    VAR_3) == 1),
  VAR_0, VAR_6);
 if (VAR_6 == VAR_0)
  FUNC_4("PRM: I/O chain clock line assertion timed out\n");


 FUNC_1(VAR_1, 0x0,
        VAR_7,
        VAR_5.pm_ctrl);
 FUNC_3(
  (((FUNC_0(VAR_7,
        VAR_5.pm_ctrl) &
     VAR_2) >>
    VAR_3) == 0),
  VAR_0, VAR_6);
 if (VAR_6 == VAR_0)
  FUNC_4("PRM: I/O chain clock line deassertion timed out\n");

 return;
}
