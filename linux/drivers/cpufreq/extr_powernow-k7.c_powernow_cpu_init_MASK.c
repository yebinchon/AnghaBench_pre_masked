
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t CFID; int SVID; int MFID; } ;
union msr_fidvidstatus {TYPE_1__ bits; int val; } ;
struct TYPE_4__ {int transition_latency; } ;
struct cpufreq_policy {scalar_t__ cpu; int freq_table; TYPE_2__ cpuinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned long,int,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int* VAR_5 ;
 scalar_t__ FUNC_2 () ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct cpufreq_policy *VAR_12)
{
 union msr_fidvidstatus VAR_13;
 int VAR_14;

 if (VAR_12->cpu != 0)
  return -VAR_1;

 FUNC_8(VAR_2, VAR_13.val);

 FUNC_9();

 VAR_6 = (10 * VAR_4) / VAR_5[VAR_13.bits.CFID];
 if (!VAR_6) {
  FUNC_7("can not determine bus frequency\n");
  return -VAR_0;
 }
 FUNC_5("FSB: %3dMHz\n", VAR_6/1000);

 if (FUNC_1(VAR_10) || VAR_3) {
  FUNC_6("PSB/PST known to be broken - trying ACPI instead\n");
  VAR_14 = FUNC_3();
 } else {
  VAR_14 = FUNC_4(VAR_13.bits.MFID,
    VAR_13.bits.SVID);
  if (VAR_14) {
   FUNC_6("Trying ACPI perflib\n");
   VAR_8 = 0;
   VAR_9 = -1;
   VAR_7 = 0;
   VAR_14 = FUNC_3();
   if (VAR_14) {
    FUNC_6("ACPI and legacy methods failed\n");
   }
  } else {

   VAR_7 = FUNC_2();
   FUNC_6("SGTC: %d\n", VAR_7);
  }
 }

 if (VAR_14)
  return VAR_14;

 FUNC_6("Minimum speed %d MHz - Maximum speed %d MHz\n",
  VAR_9/1000, VAR_8/1000);

 VAR_12->cpuinfo.transition_latency =
  FUNC_0(2000000UL, VAR_6, VAR_7);
 VAR_12->freq_table = VAR_11;

 return 0;
}
