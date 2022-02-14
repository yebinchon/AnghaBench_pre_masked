
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct cpufreq_policy {int dummy; } ;
struct TYPE_2__ {int driver_data; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct cpufreq_policy*,unsigned int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct cpufreq_policy *VAR_3,
       unsigned int VAR_4)
{
 unsigned int VAR_5;
 unsigned int VAR_6 = 0;
 u8 VAR_7, VAR_8;
 int VAR_9 = 0;

 if (!VAR_0)
  VAR_9 = FUNC_0(VAR_3, VAR_4);
 else {





  VAR_5 = VAR_1;
  VAR_8 = (VAR_2[VAR_1].driver_data >> 8);
  VAR_8 &= 0x1f;
  if (VAR_4 > VAR_1)
   VAR_6 = 1;
  while (VAR_5 != VAR_4) {
   VAR_7 = (VAR_2[VAR_5].driver_data >> 8) & 0x1f;
   if (VAR_7 != VAR_8) {
    VAR_9 = FUNC_0(VAR_3, VAR_5);
    VAR_8 = VAR_7;
    FUNC_1(200);
   }
   if (VAR_6)
    VAR_5++;
   else
    VAR_5--;
  }
  VAR_9 = FUNC_0(VAR_3, VAR_4);
 }

 VAR_1 = VAR_4;
 return VAR_9;
}
