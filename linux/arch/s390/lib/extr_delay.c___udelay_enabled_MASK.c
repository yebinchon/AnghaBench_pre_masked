
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {int clock_comparator; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(unsigned long long VAR_1)
{
 u64 VAR_2, VAR_3;

 VAR_3 = FUNC_1() + (VAR_1 << 12);
 do {
  VAR_2 = 0;
  if (FUNC_5(VAR_0.clock_comparator, VAR_3)) {
   VAR_2 = FUNC_2();
   FUNC_4(VAR_3);
  }
  FUNC_0();
  if (VAR_2)
   FUNC_3(VAR_2);
 } while (FUNC_1() < VAR_3);
}
