
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct op_system_config {int enable_user; int enable_kernel; int enable_pal; } ;
struct op_register_config {int mux_select; int proc_mode; int freq; int reset_values; int need_reset; } ;
struct op_counter_config {unsigned long event; unsigned long count; int enabled; } ;



__attribute__((used)) static void
FUNC_0(struct op_register_config *VAR_0,
   struct op_counter_config *VAR_1,
   struct op_system_config *VAR_2,
   int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;
 VAR_6 = 0;
 for (VAR_5 = 0; VAR_5 < 3; ++VAR_5) {
  unsigned long VAR_9 = VAR_1[VAR_5].event;
  if (!VAR_1[VAR_5].enabled)
   continue;


  if (VAR_5 == 2) {
   if (VAR_9 == 0)
    VAR_9 = 12+48;
   else if (VAR_9 == 2+41)
    VAR_9 = 4+65;
  }


  if (VAR_9 < 2)
   VAR_6 |= VAR_9 << 31;
  else if (VAR_9 < 24)
              ;
  else if (VAR_9 < 40)
   VAR_6 |= (VAR_9 - 24) << 4;
  else if (VAR_9 < 48)
   VAR_6 |= (VAR_9 - 40) << VAR_3 | 15 << 4;
  else if (VAR_9 < 64)
   VAR_6 |= VAR_9 - 48;
  else if (VAR_9 < 72)
   VAR_6 |= (VAR_9 - 64) << VAR_4 | 15;
 }
 VAR_0->mux_select = VAR_6;




 VAR_6 = 0;
 VAR_6 |= !VAR_2->enable_pal << 9;
 VAR_6 |= !VAR_2->enable_kernel << 8;
 VAR_6 |= !VAR_2->enable_user << 30;
 VAR_0->proc_mode = VAR_6;






 VAR_6 = VAR_7 = VAR_8 = 0;
 for (VAR_5 = 0; VAR_5 < 3; ++VAR_5) {
  unsigned long VAR_10, VAR_11, VAR_12 = VAR_1[VAR_5].count;
  if (!VAR_1[VAR_5].enabled)
   continue;

  if (VAR_12 <= 256)
   VAR_12 = 256, VAR_11 = 3, VAR_10 = 256;
  else {
   VAR_10 = (VAR_5 == 2 ? 16384 : 65536);
   VAR_11 = 2;
   if (VAR_12 > VAR_10)
    VAR_12 = VAR_10;
  }
  VAR_1[VAR_5].count = VAR_12;

  VAR_6 |= VAR_11 << (8 - VAR_5*2);
  VAR_7 |= (VAR_10 - VAR_12) << (48 - 16*VAR_5);
  if (VAR_12 != VAR_10)
   VAR_8 |= 1 << VAR_5;
 }
 VAR_0->freq = VAR_6;
 VAR_0->reset_values = VAR_7;
 VAR_0->need_reset = VAR_8;
}
