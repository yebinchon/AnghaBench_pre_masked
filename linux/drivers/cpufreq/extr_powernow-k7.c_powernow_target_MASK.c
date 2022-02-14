
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int CFID; } ;
union msr_fidvidstatus {TYPE_1__ bits; int val; } ;
typedef int u8 ;
struct cpufreq_policy {int dummy; } ;
struct cpufreq_freqs {int old; int new; } ;
struct TYPE_4__ {int driver_data; int frequency; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_2__* VAR_4 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct cpufreq_policy *VAR_5, unsigned int VAR_6)
{
 u8 VAR_7, VAR_8;
 struct cpufreq_freqs VAR_9;
 union msr_fidvidstatus VAR_10;
 int VAR_11;






 VAR_7 = VAR_4[VAR_6].driver_data & 0xFF;
 VAR_8 = (VAR_4[VAR_6].driver_data & 0xFF00) >> 8;

 FUNC_4(VAR_0, VAR_10.val);
 VAR_11 = VAR_10.bits.CFID;
 VAR_9.old = VAR_2 * VAR_1[VAR_11] / 10;

 VAR_9.new = VAR_4[VAR_6].frequency;



 if (VAR_3 == 1)
  FUNC_2();

 if (VAR_9.old > VAR_9.new) {

  FUNC_0(VAR_7);
  FUNC_1(VAR_8);
 } else {

  FUNC_1(VAR_8);
  FUNC_0(VAR_7);
 }


 if (VAR_3 == 1)
  FUNC_3();

 return 0;
}
