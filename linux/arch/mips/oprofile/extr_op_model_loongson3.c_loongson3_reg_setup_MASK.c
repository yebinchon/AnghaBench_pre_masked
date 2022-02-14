
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct op_counter_config {scalar_t__ enabled; scalar_t__ count; scalar_t__ user; scalar_t__ kernel; int event; } ;
struct TYPE_2__ {unsigned int control1; unsigned int control2; scalar_t__ ctr2_enable; scalar_t__ ctr1_enable; scalar_t__ reset_counter2; scalar_t__ reset_counter1; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int,int ) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void FUNC_1(struct op_counter_config *VAR_5)
{
 unsigned int VAR_6 = 0;
 unsigned int VAR_7 = 0;

 VAR_4.reset_counter1 = 0;
 VAR_4.reset_counter2 = 0;


 if (VAR_5[0].enabled) {
  VAR_6 |= FUNC_0(0, VAR_5[0].event) |
     VAR_0;
  if (VAR_5[0].kernel)
   VAR_6 |= VAR_2;
  if (VAR_5[0].user)
   VAR_6 |= VAR_3;
  VAR_4.reset_counter1 = 0x8000000000000000ULL - VAR_5[0].count;
 }

 if (VAR_5[1].enabled) {
  VAR_7 |= FUNC_0(1, VAR_5[1].event) |
     VAR_0;
  if (VAR_5[1].kernel)
   VAR_7 |= VAR_2;
  if (VAR_5[1].user)
   VAR_7 |= VAR_3;
  VAR_4.reset_counter2 = 0x8000000000000000ULL - VAR_5[1].count;
 }

 if (VAR_5[0].enabled)
  VAR_6 |= VAR_1;
 if (VAR_5[1].enabled)
  VAR_7 |= VAR_1;

 VAR_4.control1 = VAR_6;
 VAR_4.control2 = VAR_7;
 VAR_4.ctr1_enable = VAR_5[0].enabled;
 VAR_4.ctr2_enable = VAR_5[1].enabled;
}
