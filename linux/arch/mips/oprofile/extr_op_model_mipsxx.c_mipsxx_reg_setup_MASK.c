
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct op_counter_config {scalar_t__ count; scalar_t__ exl; scalar_t__ user; scalar_t__ kernel; int event; int enabled; } ;
struct TYPE_4__ {unsigned int num_counters; } ;
struct TYPE_3__ {int* control; scalar_t__* counter; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 () ;
 TYPE_2__ VAR_6 ;
 TYPE_1__ VAR_7 ;

__attribute__((used)) static void FUNC_2(struct op_counter_config *VAR_8)
{
 unsigned int VAR_9 = VAR_6.num_counters;
 int VAR_10;


 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  VAR_7.control[VAR_10] = 0;
  VAR_7.counter[VAR_10] = 0;

  if (!VAR_8[VAR_10].enabled)
   continue;

  VAR_7.control[VAR_10] = FUNC_0(VAR_8[VAR_10].event) |
     VAR_2;
  if (VAR_8[VAR_10].kernel)
   VAR_7.control[VAR_10] |= VAR_3;
  if (VAR_8[VAR_10].user)
   VAR_7.control[VAR_10] |= VAR_4;
  if (VAR_8[VAR_10].exl)
   VAR_7.control[VAR_10] |= VAR_1;
  if (FUNC_1() == VAR_0)
   VAR_7.control[VAR_10] |= VAR_5;
  VAR_7.counter[VAR_10] = 0x80000000 - VAR_8[VAR_10].count;
 }
}
