
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mem_ctl_info {int pdev; struct csrow_info** csrows; struct cell_edac_priv* pvt_info; } ;
struct csrow_info {scalar_t__ first_page; } ;
struct cell_edac_priv {int chanmask; int node; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int ,char*,int ,int,int) ;
 int FUNC_1 (int ,struct mem_ctl_info*,int,scalar_t__,unsigned long,unsigned long,int ,int,int,char*,char*) ;

__attribute__((used)) static void FUNC_2(struct mem_ctl_info *VAR_3, int VAR_4, u64 VAR_5)
{
 struct cell_edac_priv *VAR_6 = VAR_3->pvt_info;
 struct csrow_info *VAR_7 = VAR_3->csrows[0];
 unsigned long VAR_8, VAR_9, VAR_10, VAR_11;

 FUNC_0(VAR_3->pdev, "ECC CE err on node %d, channel %d, ar = 0x%016llx\n",
  VAR_6->node, VAR_4, VAR_5);


 VAR_8 = (VAR_5 & 0xffffffffe0000000ul) >> 29;
 if (VAR_6->chanmask == 0x3)
  VAR_8 = (VAR_8 << 1) | VAR_4;
 VAR_9 = VAR_8 >> VAR_2;
 VAR_10 = VAR_8 & ~VAR_1;
 VAR_11 = (VAR_5 & 0x000000001fe00000ul) >> 21;


 FUNC_1(VAR_0, VAR_3, 1,
        VAR_7->first_page + VAR_9, VAR_10, VAR_11,
        0, VAR_4, -1, "", "");
}
