
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int dummy; } ;
struct flexrm_ring {scalar_t__ cmpl_dma_base; scalar_t__ bd_dma_base; int num; scalar_t__ regs; } ;
struct flexrm_mbox {int num_rings; struct flexrm_ring* rings; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct seq_file*,char*,char*,char const*,...) ;

__attribute__((used)) static void FUNC_3(struct flexrm_mbox *VAR_4,
        struct seq_file *VAR_5)
{
 int VAR_6;
 const char *VAR_7;
 struct flexrm_ring *VAR_8;

 FUNC_2(VAR_5, "%-5s %-9s %-18s %-10s %-18s %-10s\n",
     "Ring#", "State", "BD_Addr", "BD_Size",
     "Cmpl_Addr", "Cmpl_Size");

 for (VAR_6 = 0; VAR_6 < VAR_4->num_rings; VAR_6++) {
  VAR_8 = &VAR_4->rings[VAR_6];
  if (FUNC_1(VAR_8->regs + VAR_3) &
      FUNC_0(VAR_0))
   VAR_7 = "active";
  else
   VAR_7 = "inactive";
  FUNC_2(VAR_5,
      "%-5d %-9s 0x%016llx 0x%08x 0x%016llx 0x%08x\n",
      VAR_8->num, VAR_7,
      (unsigned long long)VAR_8->bd_dma_base,
      (u32)VAR_1,
      (unsigned long long)VAR_8->cmpl_dma_base,
      (u32)VAR_2);
 }
}
