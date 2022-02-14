
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swcr_session {int swcr_nalgs; struct swcr_data* swcr_algorithms; int swcr_lock; } ;
struct swcr_data {int sw_alg; struct comp_algo* sw_cxf; struct auth_hash* sw_axf; int * sw_ictx; int sw_mlen; int * sw_octx; struct enc_xform* sw_exf; int sw_kschedule; } ;
struct enc_xform {int (* setkey ) (int *,int *,int) ;} ;
struct cryptoini {int cri_alg; int cri_klen; struct cryptoini* cri_next; int * cri_key; int cri_mlen; } ;
struct comp_algo {int dummy; } ;
struct auth_hash {int ctxsize; int (* Init ) (int *) ;int (* Setkey ) (int *,int *,int) ;} ;
typedef int device_t ;
typedef int * crypto_session_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct auth_hash VAR_5 ;
 struct auth_hash VAR_6 ;
 struct auth_hash VAR_7 ;
 struct auth_hash VAR_8 ;
 struct auth_hash VAR_9 ;
 struct auth_hash VAR_10 ;
 struct auth_hash VAR_11 ;
 struct auth_hash VAR_12 ;
 struct auth_hash VAR_13 ;
 struct auth_hash VAR_14 ;
 struct auth_hash VAR_15 ;
 struct auth_hash VAR_16 ;
 struct auth_hash VAR_17 ;
 struct auth_hash VAR_18 ;
 struct auth_hash VAR_19 ;
 struct auth_hash VAR_20 ;
 struct auth_hash VAR_21 ;
 struct auth_hash VAR_22 ;
 struct auth_hash VAR_23 ;
 struct auth_hash VAR_24 ;
 struct auth_hash VAR_25 ;
 struct auth_hash VAR_26 ;
 struct auth_hash VAR_27 ;
 struct auth_hash VAR_28 ;
 struct auth_hash VAR_29 ;
 struct comp_algo VAR_30 ;
 struct swcr_session* FUNC_1 (int *) ;
 struct enc_xform VAR_31 ;
 struct enc_xform VAR_32 ;
 struct enc_xform VAR_33 ;
 struct enc_xform VAR_34 ;
 struct enc_xform VAR_35 ;
 struct enc_xform VAR_36 ;
 struct enc_xform VAR_37 ;
 struct enc_xform VAR_38 ;
 struct enc_xform VAR_39 ;
 struct enc_xform VAR_40 ;
 struct enc_xform VAR_41 ;
 struct enc_xform VAR_42 ;
 struct enc_xform VAR_43 ;
 struct enc_xform VAR_44 ;
 void* FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int *,char*,int *,int ) ;
 size_t FUNC_4 (struct swcr_data*) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct auth_hash*,struct swcr_data*,int *,int) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_45, crypto_session_t VAR_46, struct cryptoini *VAR_47)
{
 struct swcr_session *VAR_48;
 struct swcr_data *VAR_49;
 struct auth_hash *VAR_50;
 struct enc_xform *VAR_51;
 struct comp_algo *VAR_52;
 size_t VAR_53;
 int VAR_54;
 int VAR_55;

 if (VAR_46 == ((void*)0) || VAR_47 == ((void*)0))
  return VAR_0;

 VAR_48 = FUNC_1(VAR_46);
 FUNC_3(&VAR_48->swcr_lock, "swcr session lock", ((void*)0), VAR_2);

 for (VAR_53 = 0; VAR_47 != ((void*)0) && VAR_53 < FUNC_4(VAR_48->swcr_algorithms); VAR_53++) {
  VAR_49 = &VAR_48->swcr_algorithms[VAR_53];

  switch (VAR_47->cri_alg) {
  case 148:
   VAR_51 = &VAR_41;
   goto enccommon;
  case 165:
   VAR_51 = &VAR_31;
   goto enccommon;
  case 153:
   VAR_51 = &VAR_36;
   goto enccommon;
  case 151:
   VAR_51 = &VAR_38;
   goto enccommon;
  case 128:
   VAR_51 = &VAR_44;
   goto enccommon;
  case 141:
   VAR_51 = &VAR_43;
   goto enccommon;
  case 156:
   VAR_51 = &VAR_35;
   goto enccommon;
  case 159:
   VAR_51 = &VAR_32;
   goto enccommon;
  case 158:
   VAR_51 = &VAR_33;
   goto enccommon;
  case 161:
   VAR_51 = &VAR_39;
   goto enccommon;
  case 157:
   VAR_51 = &VAR_34;
   VAR_49->sw_exf = VAR_51;
   break;
  case 152:
   VAR_51 = &VAR_37;
   goto enccommon;
  case 144:
   VAR_51 = &VAR_42;
   goto enccommon;
  case 150:
   VAR_51 = &VAR_40;
   goto enccommon;
  enccommon:
   if (VAR_47->cri_key != ((void*)0)) {
    VAR_55 = VAR_51->setkey(&VAR_49->sw_kschedule,
        VAR_47->cri_key, VAR_47->cri_klen / 8);
    if (VAR_55) {
     FUNC_12(VAR_45, VAR_46);
     return VAR_55;
    }
   }
   VAR_49->sw_exf = VAR_51;
   break;

  case 146:
   VAR_50 = &VAR_10;
   goto authcommon;
  case 138:
   VAR_50 = &VAR_12;
   goto authcommon;
  case 135:
   VAR_50 = &VAR_13;
   goto authcommon;
  case 133:
   VAR_50 = &VAR_14;
   goto authcommon;
  case 131:
   VAR_50 = &VAR_15;
   goto authcommon;
  case 129:
   VAR_50 = &VAR_16;
   goto authcommon;
  case 143:
   VAR_50 = &VAR_23;
   goto authcommon;
  case 140:
   VAR_50 = &VAR_11;
  authcommon:
   VAR_49->sw_ictx = FUNC_2(VAR_50->ctxsize, VAR_3,
       VAR_4);
   if (VAR_49->sw_ictx == ((void*)0)) {
    FUNC_12(VAR_45, VAR_46);
    return VAR_1;
   }

   VAR_49->sw_octx = FUNC_2(VAR_50->ctxsize, VAR_3,
       VAR_4);
   if (VAR_49->sw_octx == ((void*)0)) {
    FUNC_12(VAR_45, VAR_46);
    return VAR_1;
   }

   if (VAR_47->cri_key != ((void*)0)) {
    VAR_55 = FUNC_11(VAR_50, VAR_49,
        VAR_47->cri_key, VAR_47->cri_klen);
    if (VAR_55 != 0) {
     FUNC_12(VAR_45, VAR_46);
     return VAR_55;
    }
   }

   VAR_49->sw_mlen = VAR_47->cri_mlen;
   VAR_49->sw_axf = VAR_50;
   break;

  case 145:
   VAR_50 = &VAR_17;
   goto auth2common;

  case 137:
   VAR_50 = &VAR_18;
  auth2common:
   VAR_49->sw_ictx = FUNC_2(VAR_50->ctxsize, VAR_3,
       VAR_4);
   if (VAR_49->sw_ictx == ((void*)0)) {
    FUNC_12(VAR_45, VAR_46);
    return VAR_1;
   }

   VAR_49->sw_octx = FUNC_2(VAR_47->cri_klen / 8,
       VAR_3, VAR_4);
   if (VAR_49->sw_octx == ((void*)0)) {
    FUNC_12(VAR_45, VAR_46);
    return VAR_1;
   }


   if (VAR_47->cri_key != ((void*)0)) {
    VAR_55 = FUNC_11(VAR_50, VAR_49,
        VAR_47->cri_key, VAR_47->cri_klen);
    if (VAR_55 != 0) {
     FUNC_12(VAR_45, VAR_46);
     return VAR_55;
    }
   }

   VAR_49->sw_mlen = VAR_47->cri_mlen;
   VAR_49->sw_axf = VAR_50;
   break;






  case 139:
   VAR_50 = &VAR_25;
   goto auth3common;
  case 136:
   VAR_50 = &VAR_26;
   goto auth3common;
  case 134:
   VAR_50 = &VAR_27;
   goto auth3common;
  case 132:
   VAR_50 = &VAR_28;
   goto auth3common;
  case 130:
   VAR_50 = &VAR_29;

  auth3common:
   VAR_49->sw_ictx = FUNC_2(VAR_50->ctxsize, VAR_3,
       VAR_4);
   if (VAR_49->sw_ictx == ((void*)0)) {
    FUNC_12(VAR_45, VAR_46);
    return VAR_1;
   }

   VAR_50->Init(VAR_49->sw_ictx);
   VAR_49->sw_mlen = VAR_47->cri_mlen;
   VAR_49->sw_axf = VAR_50;
   break;

  case 160:
   switch (VAR_47->cri_klen) {
   case 128:
    VAR_50 = &VAR_7;
    break;
   case 192:
    VAR_50 = &VAR_8;
    break;
   case 256:
    VAR_50 = &VAR_9;
    break;
   default:
    FUNC_12(VAR_45, VAR_46);
    return VAR_0;
   }
   goto auth4common;
  case 164:
   VAR_50 = &VAR_20;
   goto auth4common;

  case 163:
   VAR_50 = &VAR_21;
   goto auth4common;

  case 162:
   VAR_50 = &VAR_22;
  auth4common:
   VAR_54 = VAR_47->cri_klen / 8;
   if (VAR_54 != 16 && VAR_54 != 24 && VAR_54 != 32) {
    FUNC_12(VAR_45, VAR_46);
    return VAR_0;
   }

   VAR_49->sw_ictx = FUNC_2(VAR_50->ctxsize, VAR_3,
       VAR_4);
   if (VAR_49->sw_ictx == ((void*)0)) {
    FUNC_12(VAR_45, VAR_46);
    return VAR_1;
   }
   VAR_50->Init(VAR_49->sw_ictx);
   VAR_50->Setkey(VAR_49->sw_ictx, VAR_47->cri_key, VAR_54);
   VAR_49->sw_axf = VAR_50;
   break;

  case 155:
   VAR_50 = &VAR_5;
   goto auth5common;
  case 154:
   VAR_50 = &VAR_6;
   goto auth5common;
  case 142:
   VAR_50 = &VAR_24;
  auth5common:
   VAR_49->sw_ictx = FUNC_2(VAR_50->ctxsize, VAR_3,
       VAR_4);
   if (VAR_49->sw_ictx == ((void*)0)) {
    FUNC_12(VAR_45, VAR_46);
    return VAR_1;
   }
   VAR_50->Setkey(VAR_49->sw_ictx, VAR_47->cri_key,
       VAR_47->cri_klen / 8);
   VAR_50->Init(VAR_49->sw_ictx);
   VAR_49->sw_axf = VAR_50;
   break;

  case 149:
   VAR_52 = &VAR_30;
   VAR_49->sw_cxf = VAR_52;
   break;
  default:
   FUNC_12(VAR_45, VAR_46);
   return VAR_0;
  }

  VAR_49->sw_alg = VAR_47->cri_alg;
  VAR_47 = VAR_47->cri_next;
  VAR_48->swcr_nalgs++;
 }

 if (VAR_47 != ((void*)0)) {
  FUNC_0("Bogus session request for three or more algorithms");
  return VAR_0;
 }
 return 0;
}
