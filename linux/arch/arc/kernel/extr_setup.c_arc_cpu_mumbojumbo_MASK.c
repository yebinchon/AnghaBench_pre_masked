
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int full; int ret_stk; int num_pred; int num_cache; scalar_t__ ver; } ;
struct TYPE_7__ {int be; int div_rem; int unalign; int ldd; int atomic; } ;
struct TYPE_6__ {int ver; int dsp; } ;
struct TYPE_5__ {int timer0; int timer1; int gfrc; int rtc; int dual_enb; int dual; } ;
struct bcr_identity {int chip_id; int cpu_id; int family; } ;
struct cpuinfo_arc {TYPE_4__ bpu; TYPE_3__ isa; TYPE_2__ extn_mpy; TYPE_1__ extn; int release; int name; struct bcr_identity core; } ;
struct bcr_lpb {int entries; scalar_t__ ver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cpuinfo_arc*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,struct bcr_lpb) ;
 struct cpuinfo_arc* VAR_6 ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 unsigned int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (char*,int,char*,...) ;

__attribute__((used)) static char *FUNC_10(int VAR_7, char *VAR_8, int VAR_9)
{
 struct cpuinfo_arc *VAR_10 = &VAR_6[VAR_7];
 struct bcr_identity *VAR_11 = &VAR_10->core;
 char VAR_12[16];
 int VAR_13 = 0;

 FUNC_0(VAR_10);

 VAR_13 += FUNC_9(VAR_8 + VAR_13, VAR_9 - VAR_13,
         "\nIDENTITY\t: ARCVER [%#02x] ARCNUM [%#02x] CHIPID [%#4x]\n",
         VAR_11->family, VAR_11->cpu_id, VAR_11->chip_id);

 VAR_13 += FUNC_9(VAR_8 + VAR_13, VAR_9 - VAR_13, "processor [%d]\t: %s %s (%s ISA) %s%s%s\n",
         VAR_7, VAR_10->name, VAR_10->release,
         FUNC_6() ? "ARCompact" : "ARCv2",
         FUNC_1(VAR_10->isa.be, "[Big-Endian]"),
         FUNC_3(VAR_10->extn.dual, VAR_10->extn.dual_enb, " Dual-Issue "));

 VAR_13 += FUNC_9(VAR_8 + VAR_13, VAR_9 - VAR_13, "Timers\t\t: %s%s%s%s%s%s\nISA Extn\t: ",
         FUNC_1(VAR_10->extn.timer0, "Timer0 "),
         FUNC_1(VAR_10->extn.timer1, "Timer1 "),
         FUNC_2(VAR_10->extn.rtc, "RTC [UP 64-bit] ", VAR_4),
         FUNC_2(VAR_10->extn.gfrc, "GFRC [SMP 64-bit] ", VAR_4));

 if (VAR_10->extn_mpy.ver) {
  if (FUNC_6()) {
   FUNC_9(VAR_12, 16, "mpy");
  } else {

   int VAR_14 = 2;

   if (VAR_10->extn_mpy.dsp)
    VAR_14 = VAR_10->extn_mpy.dsp + 6;

   FUNC_9(VAR_12, 16, "mpy[opt %d] ", VAR_14);
  }
 }

 VAR_13 += FUNC_9(VAR_8 + VAR_13, VAR_9 - VAR_13, "%s%s%s%s%s%s%s%s\n",
         FUNC_2(VAR_10->isa.atomic, "atomic ", VAR_3),
         FUNC_2(VAR_10->isa.ldd, "ll64 ", VAR_2),
         FUNC_2(VAR_10->isa.unalign, "unalign ", VAR_5),
         FUNC_1(VAR_10->extn_mpy.ver, VAR_12),
         FUNC_1(VAR_10->isa.div_rem, "div_rem "));

 if (VAR_10->bpu.ver) {
  VAR_13 += FUNC_9(VAR_8 + VAR_13, VAR_9 - VAR_13,
         "BPU\t\t: %s%s match, cache:%d, Predict Table:%d Return stk: %d",
         FUNC_1(VAR_10->bpu.full, "full"),
         FUNC_1(!VAR_10->bpu.full, "partial"),
         VAR_10->bpu.num_cache, VAR_10->bpu.num_pred, VAR_10->bpu.ret_stk);

  if (FUNC_7()) {
   struct bcr_lpb VAR_15;

   FUNC_5(VAR_0, VAR_15);
   if (VAR_15.ver) {
    unsigned int VAR_16;
    VAR_16 = FUNC_8(VAR_1);

    VAR_13 += FUNC_9(VAR_8 + VAR_13, VAR_9 - VAR_13, " Loop Buffer:%d %s",
            VAR_15.entries,
            FUNC_4(!VAR_16));
   }
  }
  VAR_13 += FUNC_9(VAR_8 + VAR_13, VAR_9 - VAR_13, "\n");
 }

 return VAR_8;
}
