
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cpufreq_policy {TYPE_1__* freq_table; } ;
struct TYPE_4__ {int bmips_type; } ;
struct TYPE_3__ {unsigned int driver_data; } ;




 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int,int) ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static int FUNC_1(struct cpufreq_policy *VAR_5,
          unsigned int VAR_6)
{
 unsigned int VAR_7 = VAR_5->freq_table[VAR_6].driver_data;

 switch (VAR_4->bmips_type) {
 case 128:
 case 129:
  FUNC_0(VAR_0 << VAR_2,
        (1 << VAR_1) |
        (VAR_7 << VAR_2));
  break;
 default:
  return -VAR_3;
 }

 return 0;
}
