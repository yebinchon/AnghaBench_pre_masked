
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct i40iw_terminate_hdr {int hdrct; } ;
struct i40iw_sc_qp {int* q2_buf; void* eventtype; } ;
struct i40iw_aeqe_info {int ae_id; scalar_t__ q2_data_written; } ;
typedef int __be16 ;


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
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 void* VAR_45 ;
 scalar_t__ VAR_46 ;
 int FUNC_0 (struct i40iw_aeqe_info*,int*) ;
 int* FUNC_1 (int*) ;
 int FUNC_2 (struct i40iw_sc_qp*,struct i40iw_terminate_hdr*,int ,int,int ) ;
 int FUNC_3 (struct i40iw_terminate_hdr*,int*,int) ;
 int FUNC_4 (struct i40iw_terminate_hdr*,int ,int) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct i40iw_sc_qp *VAR_47,
       struct i40iw_aeqe_info *VAR_48)
{
 u8 *VAR_49 = VAR_47->q2_buf + VAR_28;
 u16 VAR_50;
 int VAR_51 = 0;
 u8 VAR_52 = 0;
 u32 VAR_53;
 struct i40iw_terminate_hdr *VAR_54;

 VAR_54 = (struct i40iw_terminate_hdr *)VAR_47->q2_buf;
 FUNC_4(VAR_54, 0, VAR_28);

 if (VAR_48->q2_data_written) {

  VAR_49 = FUNC_1(VAR_49);
  VAR_50 = FUNC_5(*(__be16 *)VAR_49);
  if (VAR_50) {
   VAR_51 = 2;
   VAR_54->hdrct = VAR_3;
   if (VAR_49[2] & 0x80) {
    VAR_52 = 1;
    if (VAR_50 >= VAR_43) {
     VAR_51 += VAR_43;
     VAR_54->hdrct |= VAR_2;
    }
   } else {
    if (VAR_50 >= VAR_44) {
     VAR_51 += VAR_44;
     VAR_54->hdrct |= VAR_2;
    }

    if (VAR_50 >= (VAR_44 + VAR_46)) {
     if ((VAR_49[3] & VAR_41) == VAR_42) {
      VAR_51 += VAR_46;
      VAR_54->hdrct |= VAR_40;
     }
    }
   }
  }
 }

 VAR_53 = FUNC_0(VAR_48, VAR_49);

 switch (VAR_48->ae_id) {
 case 145:
  VAR_47->eventtype = VAR_45;
  if (VAR_53 == 130)
   FUNC_2(VAR_47, VAR_54, VAR_21,
         (VAR_24 << 4) | VAR_6, VAR_8);
  else
   FUNC_2(VAR_47, VAR_54, VAR_22,
         (VAR_26 << 4) | VAR_35, VAR_33);
  break;
 case 150:
  VAR_47->eventtype = VAR_45;
  if (VAR_48->q2_data_written)
   FUNC_2(VAR_47, VAR_54, VAR_21,
         (VAR_24 << 4) | VAR_6, VAR_5);
  else
   FUNC_2(VAR_47, VAR_54, VAR_22,
         (VAR_26 << 4) | VAR_35, VAR_31);
  break;
 case 154:
  switch (VAR_53) {
  case 130:
   FUNC_2(VAR_47, VAR_54, VAR_21,
         (VAR_24 << 4) | VAR_6, VAR_9);
   break;
  case 129:
  case 128:
   FUNC_2(VAR_47, VAR_54, VAR_22,
         (VAR_26 << 4) | VAR_35, VAR_30);
   break;
  default:
   FUNC_2(VAR_47, VAR_54, VAR_22,
         (VAR_26 << 4) | VAR_35, VAR_37);
  }
  break;
 case 148:
  VAR_47->eventtype = VAR_45;
  FUNC_2(VAR_47, VAR_54, VAR_22,
        (VAR_26 << 4) | VAR_35, VAR_33);
  break;
 case 153:
  FUNC_2(VAR_47, VAR_54, VAR_20,
        (VAR_24 << 4) | VAR_10, VAR_15);
  break;
 case 151:
 case 152:
  VAR_47->eventtype = VAR_45;
  switch (VAR_53) {
  case 129:
  case 128:
   FUNC_2(VAR_47, VAR_54, VAR_23,
         (VAR_26 << 4) | VAR_34, VAR_30);
   break;
  default:
   FUNC_2(VAR_47, VAR_54, VAR_22,
         (VAR_26 << 4) | VAR_34, VAR_33);
  }
  break;
 case 147:
 case 149:
 case 133:
  VAR_47->eventtype = VAR_45;
  FUNC_2(VAR_47, VAR_54, VAR_22,
        (VAR_26 << 4) | VAR_35, VAR_29);
  break;
 case 146:
  VAR_47->eventtype = VAR_45;
  FUNC_2(VAR_47, VAR_54, VAR_22,
        (VAR_26 << 4) | VAR_35, VAR_36);
  break;
 case 136:
  FUNC_2(VAR_47, VAR_54, VAR_18,
        (VAR_25 << 4) | VAR_4, VAR_27);
  break;
 case 135:
 case 134:
  FUNC_2(VAR_47, VAR_54, VAR_19,
        (VAR_24 << 4) | VAR_0, VAR_1);
  break;
 case 137:
 case 143:
  FUNC_2(VAR_47, VAR_54, VAR_17,
        (VAR_24 << 4) | VAR_0, VAR_1);
  break;
 case 144:
  FUNC_2(VAR_47, VAR_54, VAR_18,
        (VAR_24 << 4) | VAR_10, VAR_14);
  break;
 case 142:
  VAR_47->eventtype = VAR_45;
  FUNC_2(VAR_47, VAR_54, VAR_19,
        (VAR_24 << 4) | VAR_10, VAR_16);
  break;
 case 141:
  if (VAR_52)
   FUNC_2(VAR_47, VAR_54, VAR_18,
         (VAR_24 << 4) | VAR_6, VAR_7);
  else
   FUNC_2(VAR_47, VAR_54, VAR_18,
         (VAR_24 << 4) | VAR_10, VAR_11);
  break;
 case 140:
  FUNC_2(VAR_47, VAR_54, VAR_18,
        (VAR_24 << 4) | VAR_10, VAR_12);
  break;
 case 139:
  FUNC_2(VAR_47, VAR_54, VAR_23,
        (VAR_24 << 4) | VAR_10, VAR_13);
  break;
 case 138:
  FUNC_2(VAR_47, VAR_54, VAR_18,
        (VAR_24 << 4) | VAR_10, VAR_15);
  break;
 case 132:
  FUNC_2(VAR_47, VAR_54, VAR_18,
        (VAR_26 << 4) | VAR_34, VAR_32);
  break;
 case 131:
  FUNC_2(VAR_47, VAR_54, VAR_20,
        (VAR_26 << 4) | VAR_34, VAR_38);
  break;
 default:
  FUNC_2(VAR_47, VAR_54, VAR_17,
        (VAR_26 << 4) | VAR_34, VAR_39);
  break;
 }

 if (VAR_51)
  FUNC_3(VAR_54 + 1, VAR_49, VAR_51);

 return sizeof(struct i40iw_terminate_hdr) + VAR_51;
}
