
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pp_hwmgr {int feature_mask; } ;
typedef int PPSMC_Msg ;


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





 int const VAR_23 ;
 int const VAR_24 ;






 int VAR_25 ;

 int const VAR_26 ;
 int const VAR_27 ;

 int const VAR_28 ;
 int const VAR_29 ;
 int const VAR_30 ;
 int const VAR_31 ;
 int const VAR_32 ;
 int FUNC_0 (struct pp_hwmgr*,int ,int) ;

int FUNC_1(struct pp_hwmgr *VAR_33,
     const uint32_t *VAR_34)
{
 PPSMC_Msg VAR_35;
 uint32_t VAR_36;

 if (!(VAR_33->feature_mask & VAR_25))
  return 0;

 switch ((*VAR_34 & VAR_26) >> VAR_27) {
 case 129:
  switch ((*VAR_34 & VAR_23) >> VAR_24) {
  case 139:
   if (VAR_31 & *VAR_34) {
    VAR_35 = ((*VAR_34 & VAR_30) & VAR_28) ?
      VAR_22 :
      VAR_21;
    VAR_36 = VAR_3;

    if (FUNC_0(
      VAR_33, VAR_35, VAR_36))
     return -VAR_20;
   }
   if (VAR_32 & *VAR_34) {
    VAR_35 = (*VAR_34 & VAR_30) & VAR_29
     ? VAR_22
     : VAR_21;
    VAR_36 = VAR_4;

    if (FUNC_0(
      VAR_33, VAR_35, VAR_36))
     return -VAR_20;
   }
   break;

  case 140:
   if (VAR_31 & *VAR_34) {
    VAR_35 = ((*VAR_34 & VAR_30) & VAR_28) ?
      VAR_22 :
      VAR_21;
    VAR_36 = VAR_1;

    if (FUNC_0(
      VAR_33, VAR_35, VAR_36))
     return -VAR_20;
   }

   if (VAR_32 & *VAR_34) {
    VAR_35 = (*VAR_34 & VAR_30) & VAR_29 ?
      VAR_22 :
      VAR_21;
    VAR_36 = VAR_2;

    if (FUNC_0(
      VAR_33, VAR_35, VAR_36))
     return -VAR_20;
   }
   break;

  case 136:
   if (VAR_32 & *VAR_34) {
    VAR_35 = (*VAR_34 & VAR_30) & VAR_29 ?
      VAR_22 :
      VAR_21;
    VAR_36 = VAR_7;

    if (FUNC_0(
      VAR_33, VAR_35, VAR_36))
     return -VAR_20;
   }
   break;

  case 138:
   if (VAR_32 & *VAR_34) {
    VAR_35 = (*VAR_34 & VAR_30) & VAR_29 ?
      VAR_22 :
      VAR_21;
    VAR_36 = VAR_5;

    if (FUNC_0(
      VAR_33, VAR_35, VAR_36))
     return -VAR_20;
   }
   break;

  case 137:
   if (VAR_31 & *VAR_34) {
    VAR_35 = ((*VAR_34 & VAR_30) & VAR_28) ?
      VAR_22 :
      VAR_21;
    VAR_36 = (VAR_0 | VAR_8 |
      VAR_6);

    if (FUNC_0(
      VAR_33, VAR_35, VAR_36))
     return -VAR_20;
   }
   break;

  default:
   return -VAR_20;
  }
  break;

 case 128:
  switch ((*VAR_34 & VAR_23) >> VAR_24) {
  case 135:
   if (VAR_31 & *VAR_34) {
    VAR_35 = (*VAR_34 & VAR_30) & VAR_28 ?
      VAR_22 :
      VAR_21;
    VAR_36 = VAR_9;

    if (FUNC_0(
      VAR_33, VAR_35, VAR_36))
     return -VAR_20;
   }
   if (VAR_32 & *VAR_34) {
    VAR_35 = (*VAR_34 & VAR_30) & VAR_29 ?
      VAR_22 :
      VAR_21;
    VAR_36 = VAR_10;

    if (FUNC_0(
      VAR_33, VAR_35, VAR_36))
     return -VAR_20;
   }
   break;

  case 132:
   if (VAR_31 & *VAR_34) {
    VAR_35 = ((*VAR_34 & VAR_30) & VAR_28) ?
      VAR_22 :
      VAR_21;
    VAR_36 = VAR_15;

    if (FUNC_0(
      VAR_33, VAR_35, VAR_36))
     return -VAR_20;
   }

   if (VAR_32 & *VAR_34) {
    VAR_35 = (*VAR_34 & VAR_30) & VAR_29 ?
      VAR_22 :
      VAR_21;
    VAR_36 = VAR_16;

    if (FUNC_0(
      VAR_33, VAR_35, VAR_36))
     return -VAR_20;
   }
   break;

  case 134:
   if (VAR_31 & *VAR_34) {
    VAR_35 = (*VAR_34 & VAR_30) & VAR_28 ?
      VAR_22 :
      VAR_21;
    VAR_36 = VAR_11;

    if (FUNC_0(
      VAR_33, VAR_35, VAR_36))
     return -VAR_20;
   }
   if (VAR_32 & *VAR_34) {
    VAR_35 = (*VAR_34 & VAR_30) & VAR_29 ?
      VAR_22 :
      VAR_21;
    VAR_36 = VAR_12;

    if (FUNC_0(
      VAR_33, VAR_35, VAR_36))
     return -VAR_20;
   }
   break;

  case 133:
   if (VAR_31 & *VAR_34) {
    VAR_35 = ((*VAR_34 & VAR_30) & VAR_28) ?
      VAR_22 :
      VAR_21;
    VAR_36 = VAR_13;

    if (FUNC_0(
      VAR_33, VAR_35, VAR_36))
     return -VAR_20;
   }

   if (VAR_32 & *VAR_34) {
    VAR_35 = (*VAR_34 & VAR_30) & VAR_29 ?
      VAR_22 :
      VAR_21;
    VAR_36 = VAR_14;

    if (FUNC_0(
      VAR_33, VAR_35, VAR_36))
     return -VAR_20;
   }
   break;

  case 130:
   if (VAR_31 & *VAR_34) {
    VAR_35 = ((*VAR_34 & VAR_30) & VAR_28) ?
      VAR_22 :
      VAR_21;
    VAR_36 = VAR_18;

    if (FUNC_0(
      VAR_33, VAR_35, VAR_36))
     return -VAR_20;
   }

   if (VAR_32 & *VAR_34) {
    VAR_35 = (*VAR_34 & VAR_30) & VAR_29 ?
      VAR_22 :
      VAR_21;
    VAR_36 = VAR_19;

    if (FUNC_0(
      VAR_33, VAR_35, VAR_36))
     return -VAR_20;
   }
   break;

  case 131:
   if (VAR_31 & *VAR_34) {
    VAR_35 = ((*VAR_34 & VAR_30) & VAR_28) ?
      VAR_22 :
      VAR_21;
    VAR_36 = VAR_17;

    if (FUNC_0(
      VAR_33, VAR_35, VAR_36))
     return -VAR_20;
   }
   break;

  default:
   return -VAR_20;

  }
  break;

 default:
  return -VAR_20;

 }

 return 0;
}
