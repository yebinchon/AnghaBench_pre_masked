
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {int idle_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_3 (int*) ;
 int FUNC_4 (int*,scalar_t__) ;
 int FUNC_5 (int*,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;

void
FUNC_9(uint32_t VAR_11)
{
 int *VAR_12;
 uint64_t VAR_13;
 VAR_12 = &FUNC_2(VAR_10)->idle_state;
 FUNC_0(FUNC_3(VAR_12) == VAR_7,
     ("cpu_mwait_cx: wrong monitorbuf state"));
 FUNC_4(VAR_12, VAR_5);
 if (FUNC_1(VAR_9) || VAR_8) {
  VAR_13 = FUNC_7(VAR_3);
  FUNC_8(VAR_3, VAR_13 & ~(VAR_0 |
      VAR_2 | VAR_1));
 } else {
  VAR_13 = 0;
 }
 FUNC_5(VAR_12, 0, 0);
 if (FUNC_3(VAR_12) == VAR_5)
  FUNC_6(VAR_4, VAR_11);






 if (VAR_13 != 0)
  FUNC_8(VAR_3, VAR_13);





 FUNC_4(VAR_12, VAR_6);
}
