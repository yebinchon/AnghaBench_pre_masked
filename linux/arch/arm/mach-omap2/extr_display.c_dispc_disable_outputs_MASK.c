
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_hwmod {scalar_t__ dev_attr; } ;
struct omap_dss_dispc_dev_attr {int manager_count; scalar_t__ has_framedonetv_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 struct omap_hwmod* FUNC_2 (char*) ;
 int FUNC_3 (struct omap_hwmod*,int ) ;
 int FUNC_4 (int,struct omap_hwmod*,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
 u32 VAR_13, VAR_14 = 0;
 bool VAR_15, VAR_16, VAR_17 = 0, VAR_18 = 0;
 int VAR_19;
 struct omap_dss_dispc_dev_attr *VAR_20;
 struct omap_hwmod *VAR_21;

 VAR_21 = FUNC_2("dss_dispc");
 if (!VAR_21) {
  FUNC_0(1, "display: could not disable outputs during reset - could not find dss_dispc hwmod\n");
  return;
 }

 if (!VAR_21->dev_attr) {
  FUNC_5("display: could not disable outputs during reset due to missing dev_attr\n");
  return;
 }

 VAR_20 = (struct omap_dss_dispc_dev_attr *)VAR_21->dev_attr;


 VAR_13 = FUNC_3(VAR_21, VAR_1);
 VAR_15 = VAR_13 & VAR_12;
 VAR_16 = VAR_13 & VAR_0;


 if (VAR_20->manager_count > 2) {
  VAR_13 = FUNC_3(VAR_21, VAR_2);
  VAR_17 = VAR_13 & VAR_12;
 }


 if (VAR_20->manager_count > 3) {
  VAR_13 = FUNC_3(VAR_21, VAR_3);
  VAR_18 = VAR_13 & VAR_12;
 }

 if (!(VAR_15 | VAR_16 | VAR_17 | VAR_18))
  return;





 if (VAR_15)
  VAR_14 |= 1 << VAR_10;

 if (VAR_16) {
  if (VAR_20->has_framedonetv_irq) {
   VAR_14 |= 1 << VAR_9;
  } else {
   VAR_14 |= 1 << VAR_5 |
    1 << VAR_6;
  }
 }

 if (VAR_17)
  VAR_14 |= 1 << VAR_7;
 if (VAR_18)
  VAR_14 |= 1 << VAR_8;





 FUNC_4(VAR_14, VAR_21, VAR_4);


 VAR_13 = FUNC_3(VAR_21, VAR_1);
 VAR_13 &= ~(VAR_12 | VAR_0);
 FUNC_4(VAR_13, VAR_21, VAR_1);


 if (VAR_20->manager_count > 2) {
  VAR_13 = FUNC_3(VAR_21, VAR_2);
  VAR_13 &= ~VAR_12;
  FUNC_4(VAR_13, VAR_21, VAR_2);
 }


 if (VAR_20->manager_count > 3) {
  VAR_13 = FUNC_3(VAR_21, VAR_3);
  VAR_13 &= ~VAR_12;
  FUNC_4(VAR_13, VAR_21, VAR_3);
 }

 VAR_19 = 0;
 while ((FUNC_3(VAR_21, VAR_4) & VAR_14) !=
        VAR_14) {
  VAR_19++;
  if (VAR_19 > VAR_11) {
   FUNC_5("didn't get FRAMEDONE1/2/3 or TV interrupt\n");
   break;
  }
  FUNC_1(1);
 }
}
