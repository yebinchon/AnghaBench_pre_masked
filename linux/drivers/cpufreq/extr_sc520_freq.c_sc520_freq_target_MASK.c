
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct cpufreq_policy {int dummy; } ;
struct TYPE_2__ {int driver_data; } ;


 int* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_2(struct cpufreq_policy *VAR_2, unsigned int VAR_3)
{

 u8 VAR_4;

 FUNC_0();

 VAR_4 = *VAR_0 & ~0x03;
 *VAR_0 = VAR_4 | VAR_1[VAR_3].driver_data;

 FUNC_1();

 return 0;
}
