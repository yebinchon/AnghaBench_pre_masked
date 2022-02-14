
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int info_source; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

void FUNC_6(void)
{
 FUNC_3(&VAR_4);

 if (!FUNC_4()) {
  VAR_5.info_source = VAR_3;
  return;
 }

 if (!FUNC_1()) {
  VAR_5.info_source = VAR_1;
  return;
 }

 if (VAR_4) {
  FUNC_0(0, VAR_4);
  VAR_5.info_source = VAR_2;
  return;
 }

 FUNC_5();
 VAR_5.info_source = VAR_0;
 VAR_4 = FUNC_2();
}
