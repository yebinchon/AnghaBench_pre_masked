
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct edac_device_ctl_info {struct aurora_l2_drvdata* pvt_info; } ;
struct aurora_l2_drvdata {char* msg; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
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
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct edac_device_ctl_info*,int ,int ,char*) ;
 int FUNC_1 (struct edac_device_ctl_info*,int ,int ,char*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (char*,size_t,char*,...) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct edac_device_ctl_info *VAR_21)
{
 struct aurora_l2_drvdata *VAR_22 = VAR_21->pvt_info;
 uint32_t VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
 unsigned int VAR_30, VAR_31;
 char *VAR_32 = VAR_22->msg;
 size_t VAR_33 = sizeof(VAR_22->msg);
 size_t VAR_34 = 0;

 VAR_23 = FUNC_2(VAR_22->base + VAR_13);
 VAR_27 = FUNC_2(VAR_22->base + VAR_2);
 VAR_28 = FUNC_2(VAR_22->base + VAR_1);
 VAR_29 = FUNC_2(VAR_22->base + VAR_16);

 VAR_30 = (VAR_23 & VAR_10) >> VAR_11;
 VAR_31 = (VAR_23 & VAR_14) >> VAR_15;

 if (VAR_30 || VAR_31)
  FUNC_4(VAR_12, VAR_22->base + VAR_13);

 if (!(VAR_27 & VAR_3))
  goto clear_remaining;

 VAR_24 = (VAR_27 & VAR_6) >> VAR_7;
 if (VAR_24 <= 3)
  VAR_34 += FUNC_3(VAR_32+VAR_34, VAR_33-VAR_34, "src=CPU%d ", VAR_24);
 else
  VAR_34 += FUNC_3(VAR_32+VAR_34, VAR_33-VAR_34, "src=IO ");

 VAR_25 = (VAR_27 & VAR_8) >> VAR_9;
 switch (VAR_25) {
 case 0:
  VAR_34 += FUNC_3(VAR_32+VAR_34, VAR_33-VAR_34, "txn=Data-Read ");
  break;
 case 1:
  VAR_34 += FUNC_3(VAR_32+VAR_34, VAR_33-VAR_34, "txn=Isn-Read ");
  break;
 case 2:
  VAR_34 += FUNC_3(VAR_32+VAR_34, VAR_33-VAR_34, "txn=Clean-Flush ");
  break;
 case 3:
  VAR_34 += FUNC_3(VAR_32+VAR_34, VAR_33-VAR_34, "txn=Eviction ");
  break;
 case 4:
  VAR_34 += FUNC_3(VAR_32+VAR_34, VAR_33-VAR_34,
    "txn=Read-Modify-Write ");
  break;
 }

 VAR_26 = (VAR_27 & VAR_4) >> VAR_5;
 switch (VAR_26) {
 case 0:
  VAR_34 += FUNC_3(VAR_32+VAR_34, VAR_33-VAR_34, "err=CorrECC ");
  break;
 case 1:
  VAR_34 += FUNC_3(VAR_32+VAR_34, VAR_33-VAR_34, "err=UnCorrECC ");
  break;
 case 2:
  VAR_34 += FUNC_3(VAR_32+VAR_34, VAR_33-VAR_34, "err=TagParity ");
  break;
 }

 VAR_34 += FUNC_3(VAR_32+VAR_34, VAR_33-VAR_34, "addr=0x%x ", VAR_28 & VAR_0);
 VAR_34 += FUNC_3(VAR_32+VAR_34, VAR_33-VAR_34, "index=0x%x ", (VAR_29 & VAR_19) >> VAR_20);
 VAR_34 += FUNC_3(VAR_32+VAR_34, VAR_33-VAR_34, "way=0x%x", (VAR_29 & VAR_17) >> VAR_18);


 FUNC_4(VAR_3, VAR_22->base + VAR_2);
 if (VAR_26) {

  if (VAR_31)
   VAR_31--;
  FUNC_1(VAR_21, 0, 0, VAR_22->msg);
 } else {
  if (VAR_30)
   VAR_30--;
  FUNC_0(VAR_21, 0, 0, VAR_22->msg);
 }

clear_remaining:

 while (VAR_31--)
  FUNC_1(VAR_21, 0, 0, "details unavailable (multiple errors)");
 while (VAR_30--)
  FUNC_1(VAR_21, 0, 0, "details unavailable (multiple errors)");
}
