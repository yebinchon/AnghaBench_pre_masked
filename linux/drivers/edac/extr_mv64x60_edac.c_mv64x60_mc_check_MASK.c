
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mv64x60_mc_pdata {scalar_t__ mc_vbase; } ;
struct mem_ctl_info {int ctl_name; struct mv64x60_mc_pdata* pvt_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,struct mem_ctl_info*,int,int,int,int,int ,int ,int,int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mem_ctl_info *VAR_7)
{
 struct mv64x60_mc_pdata *VAR_8 = VAR_7->pvt_info;
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;

 VAR_9 = FUNC_1(VAR_8->mc_vbase + VAR_2);
 if (!VAR_9)
  return;

 VAR_10 = VAR_9 & ~0x3;
 VAR_11 = FUNC_1(VAR_8->mc_vbase + VAR_4);
 VAR_12 = FUNC_1(VAR_8->mc_vbase + VAR_3);
 VAR_13 = VAR_11 ^ VAR_12;


 if (!(VAR_9 & 0x1))
  FUNC_0(VAR_0, VAR_7, 1,
         VAR_10 >> VAR_6,
         VAR_10 & VAR_5, VAR_13,
         0, 0, -1,
         VAR_7->ctl_name, "");
 else
  FUNC_0(VAR_1, VAR_7, 1,
         VAR_10 >> VAR_6,
         VAR_10 & VAR_5, 0,
         0, 0, -1,
         VAR_7->ctl_name, "");


 FUNC_2(0, VAR_8->mc_vbase + VAR_2);
}
