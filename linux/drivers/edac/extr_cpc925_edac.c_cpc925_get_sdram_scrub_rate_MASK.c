
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mem_ctl_info {struct cpc925_mc_pdata* pvt_info; } ;
struct cpc925_mc_pdata {scalar_t__ vbase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct mem_ctl_info*,int ,char*) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct mem_ctl_info *VAR_7)
{
 struct cpc925_mc_pdata *VAR_8 = VAR_7->pvt_info;
 int VAR_9;
 u32 VAR_10;
 u8 VAR_11;

 VAR_10 = FUNC_0(VAR_8->vbase + VAR_6);
 VAR_11 = (VAR_10 & VAR_4) >> VAR_5;

 FUNC_2(0, "Mem Scrub Ctrl Register 0x%x\n", VAR_10);

 if (((VAR_10 & VAR_3) != VAR_2) ||
     (VAR_11 == 0)) {
  FUNC_1(VAR_7, VAR_1, "Scrub mode not enabled\n");
  VAR_9 = 0;
 } else
  VAR_9 = VAR_0 * 0xFA67 / VAR_11;

 return VAR_9;
}
