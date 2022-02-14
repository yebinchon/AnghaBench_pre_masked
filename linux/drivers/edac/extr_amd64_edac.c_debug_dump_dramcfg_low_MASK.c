
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct amd64_pvt {scalar_t__ dram_type; int fam; TYPE_1__* csels; } ;
struct TYPE_2__ {int* csmasks; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,char*,...) ;

__attribute__((used)) static void FUNC_2(struct amd64_pvt *VAR_1, u32 VAR_2, int VAR_3)
{
 FUNC_1(1, "F2x%d90 (DRAM Cfg Low): 0x%08x\n", VAR_3, VAR_2);

 if (VAR_1->dram_type == VAR_0) {
  u32 VAR_4 = VAR_1->csels[VAR_3].csmasks[0];





  FUNC_1(1, " LRDIMM %dx rank multiply\n", (VAR_4 & 0x3));
 }

 FUNC_1(1, "All DIMMs support ECC:%s\n",
      (VAR_2 & FUNC_0(19)) ? "yes" : "no");


 FUNC_1(1, "  PAR/ERR parity: %s\n",
   (VAR_2 & FUNC_0(8)) ? "enabled" : "disabled");

 if (VAR_1->fam == 0x10)
  FUNC_1(1, "  DCT 128bit mode width: %s\n",
    (VAR_2 & FUNC_0(11)) ? "128b" : "64b");

 FUNC_1(1, "  x4 logical DIMMs present: L0: %s L1: %s L2: %s L3: %s\n",
   (VAR_2 & FUNC_0(12)) ? "yes" : "no",
   (VAR_2 & FUNC_0(13)) ? "yes" : "no",
   (VAR_2 & FUNC_0(14)) ? "yes" : "no",
   (VAR_2 & FUNC_0(15)) ? "yes" : "no");
}
