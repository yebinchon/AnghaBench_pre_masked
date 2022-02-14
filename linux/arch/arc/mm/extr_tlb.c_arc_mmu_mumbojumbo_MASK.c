
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuinfo_arc_mmu {int sets; int ways; int pae; int u_itlb; int u_dtlb; int pg_sz_k; int ver; scalar_t__ s_pg_sz_m; } ;
struct TYPE_2__ {struct cpuinfo_arc_mmu mmu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_2 (char*,int,char*,int ,int ,...) ;

char *FUNC_3(int VAR_3, char *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 struct cpuinfo_arc_mmu *VAR_7 = &VAR_2[VAR_3].mmu;
 char VAR_8[64] = "";

 if (VAR_7->s_pg_sz_m)
  FUNC_2(VAR_8, 64, "%dM Super Page %s",
     VAR_7->s_pg_sz_m,
     FUNC_1(VAR_1));

 VAR_6 += FUNC_2(VAR_4 + VAR_6, VAR_5 - VAR_6,
        "MMU [v%x]\t: %dk PAGE, %sJTLB %d (%dx%d), uDTLB %d, uITLB %d%s%s\n",
         VAR_7->ver, VAR_7->pg_sz_k, VAR_8,
         VAR_7->sets * VAR_7->ways, VAR_7->sets, VAR_7->ways,
         VAR_7->u_dtlb, VAR_7->u_itlb,
         FUNC_0(VAR_7->pae, ", PAE40 ", VAR_0));

 return VAR_4;
}
