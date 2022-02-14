
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ clock_comparator; unsigned long long last_update_clock; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(unsigned long long VAR_2)
{

 if (VAR_0.clock_comparator != VAR_1) {
  VAR_0.clock_comparator += VAR_2;
  FUNC_0(VAR_0.clock_comparator);
 }

 VAR_0.last_update_clock += VAR_2;
}
