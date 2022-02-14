
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_6__ {scalar_t__ k; int * s; } ;
struct TYPE_5__ {scalar_t__ fpga_family_code; scalar_t__ ver_code; int cpu_clock_freq; int use_instr; char* mmu; int use_mult; int use_fpu; int use_exc; int icache_size; int dcache_size; int pvr_user2; int pvr_user1; scalar_t__ hw_debug; scalar_t__ dcache_wb; int dcache_line_length; scalar_t__ use_dcache; int icache_line_length; scalar_t__ use_icache; scalar_t__ mmu_privins; scalar_t__ endian; } ;
struct TYPE_4__ {scalar_t__ k; int * s; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 TYPE_3__* VAR_18 ;
 TYPE_2__ VAR_19 ;
 TYPE_1__* VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (struct seq_file*,char*,...) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_22, void *VAR_23)
{
 char *VAR_24 = "Unknown";
 char *VAR_25 = "Unknown";
 int VAR_26;


 for (VAR_26 = 0; VAR_20[VAR_26].s != ((void*)0); VAR_26++) {
  if (VAR_19.fpga_family_code == VAR_20[VAR_26].k) {
   VAR_24 = (char *)VAR_20[VAR_26].s;
   break;
  }
 }


 for (VAR_26 = 0; VAR_18[VAR_26].s != ((void*)0); VAR_26++) {
  if (VAR_19.ver_code == VAR_18[VAR_26].k) {
   VAR_25 = (char *)VAR_18[VAR_26].s;
   break;
  }
 }

 FUNC_0(VAR_22,
     "CPU-Family:	MicroBlaze\n"
     "FPGA-Arch:	%s\n"
     "CPU-Ver:	%s, %s endian\n"
     "CPU-MHz:	%d.%02d\n"
     "BogoMips:	%lu.%02lu\n",
     VAR_24,
     VAR_25,
     VAR_19.endian ? "little" : "big",
     VAR_19.cpu_clock_freq / 1000000,
     VAR_19.cpu_clock_freq % 1000000,
     VAR_21 / (500000 / VAR_0),
     (VAR_21 / (5000 / VAR_0)) % 100);

 FUNC_0(VAR_22,
     "HW:\n Shift:\t\t%s\n"
     " MSR:\t\t%s\n"
     " PCMP:\t\t%s\n"
     " DIV:\t\t%s\n",
     (VAR_19.use_instr & VAR_2) ? "yes" : "no",
     (VAR_19.use_instr & VAR_15) ? "yes" : "no",
     (VAR_19.use_instr & VAR_17) ? "yes" : "no",
     (VAR_19.use_instr & VAR_3) ? "yes" : "no");

 FUNC_0(VAR_22, " MMU:\t\t%x\n", VAR_19.mmu);

 FUNC_0(VAR_22,
     " MUL:\t\t%s\n"
     " FPU:\t\t%s\n",
     (VAR_19.use_mult & VAR_16) ? "v2" :
     (VAR_19.use_mult & VAR_5) ? "v1" : "no",
     (VAR_19.use_fpu & VAR_13) ? "v2" :
     (VAR_19.use_fpu & VAR_4) ? "v1" : "no");

 FUNC_0(VAR_22,
     " Exc:\t\t%s%s%s%s%s%s%s%s\n",
     (VAR_19.use_exc & VAR_11) ? "op0x0 " : "",
     (VAR_19.use_exc & VAR_12) ? "unal " : "",
     (VAR_19.use_exc & VAR_9) ? "ill " : "",
     (VAR_19.use_exc & VAR_10) ? "iopb " : "",
     (VAR_19.use_exc & VAR_7) ? "dopb " : "",
     (VAR_19.use_exc & VAR_6) ? "zero " : "",
     (VAR_19.use_exc & VAR_8) ? "fpu " : "",
     (VAR_19.use_exc & VAR_14) ? "fsl " : "");

 FUNC_0(VAR_22,
     "Stream-insns:\t%sprivileged\n",
     VAR_19.mmu_privins ? "un" : "");

 if (VAR_19.use_icache)
  FUNC_0(VAR_22,
      "Icache:\t\t%ukB\tline length:\t%dB\n",
      VAR_19.icache_size >> 10,
      VAR_19.icache_line_length);
 else
  FUNC_1(VAR_22, "Icache:\t\tno\n");

 if (VAR_19.use_dcache) {
  FUNC_0(VAR_22,
      "Dcache:\t\t%ukB\tline length:\t%dB\n",
      VAR_19.dcache_size >> 10,
      VAR_19.dcache_line_length);
  FUNC_1(VAR_22, "Dcache-Policy:\t");
  if (VAR_19.dcache_wb)
   FUNC_1(VAR_22, "write-back\n");
  else
   FUNC_1(VAR_22, "write-through\n");
 } else {
  FUNC_1(VAR_22, "Dcache:\t\tno\n");
 }

 FUNC_0(VAR_22,
     "HW-Debug:\t%s\n",
     VAR_19.hw_debug ? "yes" : "no");

 FUNC_0(VAR_22,
     "PVR-USR1:\t%02x\n"
     "PVR-USR2:\t%08x\n",
     VAR_19.pvr_user1,
     VAR_19.pvr_user2);

 FUNC_0(VAR_22, "Page size:\t%lu\n", VAR_1);

 return 0;
}
