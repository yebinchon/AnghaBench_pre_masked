
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int active; int ext_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

void FUNC_3(void)
{
 u16 VAR_3;






 if (FUNC_0() || !VAR_2.ext_ctrl)
  return;

 VAR_3 = FUNC_1(VAR_1);
 VAR_3 |= 1 << 8;
 FUNC_2(VAR_3, VAR_1);

 VAR_2.active = 1;

 VAR_3 = FUNC_1(VAR_0);
 VAR_3 |= 1 << 7;
 FUNC_2(VAR_3, VAR_0);
}
