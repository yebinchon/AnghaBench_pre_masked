
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mem_ctl_info {scalar_t__ edac_cap; struct bluefield_edac_priv* pvt_info; } ;
struct bluefield_edac_priv {scalar_t__ emi_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct mem_ctl_info*,scalar_t__,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct mem_ctl_info *VAR_7)
{
 struct bluefield_edac_priv *VAR_8 = VAR_7->pvt_info;
 u32 VAR_9, VAR_10, VAR_11, VAR_12 = 0;





 if (VAR_7->edac_cap == VAR_0)
  return;

 VAR_9 = FUNC_2(VAR_8->emi_base + VAR_1);
 VAR_10 = FUNC_0(VAR_3, VAR_9);
 VAR_11 = FUNC_0(VAR_2, VAR_9);

 if (VAR_10) {
  VAR_12 |= VAR_6;

  FUNC_1(VAR_7, VAR_10, 1);
 }

 if (VAR_11) {
  VAR_12 |= VAR_5;

  FUNC_1(VAR_7, VAR_11, 0);
 }


 if (VAR_9)
  FUNC_3(VAR_12, VAR_8->emi_base + VAR_4);
}
