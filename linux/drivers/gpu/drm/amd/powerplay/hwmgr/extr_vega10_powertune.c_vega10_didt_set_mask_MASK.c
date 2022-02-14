
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pp_hwmgr {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,int ,int ,int) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int) ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_5 (struct pp_hwmgr*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct pp_hwmgr *VAR_37, const bool VAR_38)
{
 uint32_t VAR_39;
 uint32_t VAR_40 = (VAR_38 ? 1 : 0);
 uint32_t VAR_41 = VAR_25 | VAR_28 | VAR_31;

 if (FUNC_1(VAR_19)) {
  FUNC_0(VAR_37->device, VAR_0,
         VAR_8, VAR_3, VAR_40);
  VAR_41 &= ~VAR_23;
  VAR_41 |= VAR_40 << VAR_24;
 }

 if (FUNC_1(VAR_17)) {
  FUNC_0(VAR_37->device, VAR_0,
         VAR_6, VAR_3, VAR_40);
  VAR_41 &= ~VAR_1;
  VAR_41 |= VAR_40 << VAR_2;
 }

 if (FUNC_1(VAR_21)) {
  FUNC_0(VAR_37->device, VAR_0,
         VAR_12, VAR_3, VAR_40);
  VAR_41 &= ~VAR_29;
  VAR_41 |= VAR_40 << VAR_30;
 }

 if (FUNC_1(VAR_20)) {
  FUNC_0(VAR_37->device, VAR_0,
         VAR_10, VAR_3, VAR_40);
  VAR_41 &= ~VAR_26;
  VAR_41 |= VAR_40 << VAR_27;
 }

 if (FUNC_1(VAR_16)) {
  FUNC_0(VAR_37->device, VAR_0,
         VAR_4, VAR_3, VAR_40);
 }

 if (FUNC_1(VAR_18)) {
  if (FUNC_1(VAR_19)) {
   VAR_39 = FUNC_3(VAR_37->device, VAR_0, VAR_34);
   VAR_39 = FUNC_2(VAR_39, VAR_9, VAR_14, VAR_40);
   VAR_39 = FUNC_2(VAR_39, VAR_9, VAR_15, ~VAR_40);
   FUNC_4(VAR_37->device, VAR_0, VAR_34, VAR_39);
  }

  if (FUNC_1(VAR_17)) {
   VAR_39 = FUNC_3(VAR_37->device, VAR_0, VAR_33);
   VAR_39 = FUNC_2(VAR_39, VAR_7, VAR_14, VAR_40);
   VAR_39 = FUNC_2(VAR_39, VAR_7, VAR_15, ~VAR_40);
   FUNC_4(VAR_37->device, VAR_0, VAR_33, VAR_39);
  }

  if (FUNC_1(VAR_21)) {
   VAR_39 = FUNC_3(VAR_37->device, VAR_0, VAR_36);
   VAR_39 = FUNC_2(VAR_39, VAR_13, VAR_14, VAR_40);
   VAR_39 = FUNC_2(VAR_39, VAR_13, VAR_15, ~VAR_40);
   FUNC_4(VAR_37->device, VAR_0, VAR_36, VAR_39);
  }

  if (FUNC_1(VAR_20)) {
   VAR_39 = FUNC_3(VAR_37->device, VAR_0, VAR_35);
   VAR_39 = FUNC_2(VAR_39, VAR_11, VAR_14, VAR_40);
   VAR_39 = FUNC_2(VAR_39, VAR_11, VAR_15, ~VAR_40);
   FUNC_4(VAR_37->device, VAR_0, VAR_35, VAR_39);
  }

  if (FUNC_1(VAR_16)) {
   VAR_39 = FUNC_3(VAR_37->device, VAR_0, VAR_32);
   VAR_39 = FUNC_2(VAR_39, VAR_5, VAR_14, VAR_40);
   VAR_39 = FUNC_2(VAR_39, VAR_5, VAR_15, ~VAR_40);
   FUNC_4(VAR_37->device, VAR_0, VAR_32, VAR_39);
  }
 }


 if (VAR_38)
  FUNC_5(VAR_37, VAR_22, VAR_41);

}
