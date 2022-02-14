
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct seq_file*,char*,...) ;
 int FUNC_1 (struct seq_file*,char*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_4, void *VAR_5)
{
 FUNC_0(VAR_4, "Processor\t: UniCore-II rev %d (%s)\n",
     (int)(VAR_3 >> 16) & 15, VAR_1);

 FUNC_0(VAR_4, "BogoMIPS\t: %lu.%02lu\n",
     VAR_2 / (500000/VAR_0),
     (VAR_2 / (5000/VAR_0)) % 100);


 FUNC_1(VAR_4, "Features\t: CMOV UC-F64");

 FUNC_0(VAR_4, "\nCPU implementer\t: 0x%02x\n", VAR_3 >> 24);
 FUNC_0(VAR_4, "CPU architecture: 2\n");
 FUNC_0(VAR_4, "CPU revision\t: %d\n", (VAR_3 >> 16) & 15);

 FUNC_0(VAR_4, "Cache type\t: write-back\n"
   "Cache clean\t: cp0 c5 ops\n"
   "Cache lockdown\t: not support\n"
   "Cache format\t: Harvard\n");

 FUNC_1(VAR_4, "\n");

 FUNC_0(VAR_4, "Hardware\t: PKUnity v3\n");

 return 0;
}
