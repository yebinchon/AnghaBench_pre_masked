
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct icp_qat_fw_loader_handle {TYPE_1__* hal_handle; } ;
struct TYPE_2__ {unsigned int max_ustore; unsigned int upc_mask; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (unsigned int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 unsigned int VAR_19 ;
 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (struct icp_qat_fw_loader_handle*,unsigned char,int) ;
 int FUNC_3 (struct icp_qat_fw_loader_handle*,unsigned char,int) ;
 int FUNC_4 (struct icp_qat_fw_loader_handle*,unsigned char,int ,unsigned int,int *) ;
 int FUNC_5 (struct icp_qat_fw_loader_handle*,unsigned char,unsigned char,unsigned int*) ;
 int FUNC_6 (struct icp_qat_fw_loader_handle*,unsigned char,int,unsigned int) ;
 unsigned int FUNC_7 (struct icp_qat_fw_loader_handle*,unsigned char,int ) ;
 unsigned int FUNC_8 (struct icp_qat_fw_loader_handle*,unsigned char,unsigned char,int ) ;
 scalar_t__ FUNC_9 (struct icp_qat_fw_loader_handle*,unsigned char,unsigned int,int) ;
 int FUNC_10 (struct icp_qat_fw_loader_handle*,unsigned char,int ,unsigned int) ;
 int FUNC_11 (struct icp_qat_fw_loader_handle*,unsigned char,int,int ,unsigned int) ;
 int FUNC_12 (struct icp_qat_fw_loader_handle*,unsigned char,int ,unsigned int,int *) ;

__attribute__((used)) static int FUNC_13(struct icp_qat_fw_loader_handle *VAR_20,
       unsigned char VAR_21, unsigned char VAR_22,
       uint64_t *VAR_23, unsigned int VAR_24,
       int VAR_25, unsigned int VAR_26,
       unsigned int *VAR_27)
{
 uint64_t VAR_28[VAR_17];
 unsigned int VAR_29, VAR_30;
 unsigned int VAR_31, VAR_32;
 unsigned int VAR_33;
 unsigned int VAR_34, VAR_35;
 unsigned int VAR_36 = 0, VAR_37;
 unsigned int VAR_38;
 unsigned int VAR_39, VAR_40, VAR_41;
 unsigned int VAR_42, VAR_43;

 if ((VAR_24 > VAR_20->hal_handle->max_ustore) || !VAR_23) {
  FUNC_1("QAT: invalid instruction num %d\n", VAR_24);
  return -VAR_10;
 }

 VAR_29 = FUNC_8(VAR_20, VAR_21, VAR_22, VAR_15);
 VAR_30 = FUNC_8(VAR_20, VAR_21, VAR_22, VAR_16);
 VAR_31 = FUNC_8(VAR_20, VAR_21, VAR_22,
      VAR_13);
 VAR_32 = FUNC_8(VAR_20, VAR_21, VAR_22,
      VAR_14);
 if (VAR_24 <= VAR_17)
  FUNC_4(VAR_20, VAR_21, 0, VAR_24, VAR_28);
 FUNC_5(VAR_20, VAR_21, VAR_22, &VAR_40);
 VAR_41 = FUNC_8(VAR_20, VAR_21, VAR_22, VAR_8);
 VAR_41 = (VAR_41 & VAR_20->hal_handle->upc_mask) >> 0;
 VAR_43 = FUNC_7(VAR_20, VAR_21, VAR_5);
 VAR_43 &= VAR_12;
 VAR_39 = FUNC_7(VAR_20, VAR_21, VAR_3);
 VAR_38 = FUNC_7(VAR_20, VAR_21, VAR_1);
 VAR_42 = FUNC_7(VAR_20, VAR_21, VAR_4);
 VAR_33 = FUNC_8(VAR_20, VAR_21, VAR_22,
       VAR_11);
 VAR_34 = FUNC_8(VAR_20, VAR_21, VAR_22,
          VAR_7);
 VAR_35 = FUNC_7(VAR_20, VAR_21, VAR_6);

 FUNC_10(VAR_20, VAR_21, VAR_5, VAR_43);
 FUNC_12(VAR_20, VAR_21, 0, VAR_24, VAR_23);
 FUNC_11(VAR_20, VAR_21, (1 << VAR_22), VAR_8, 0);
 FUNC_10(VAR_20, VAR_21, VAR_1, VAR_22 & VAR_0);
 if (VAR_25)
  FUNC_10(VAR_20, VAR_21, VAR_3, VAR_39 & 0xffffdfff);
 FUNC_6(VAR_20, VAR_21, (1 << VAR_22), VAR_19);
 FUNC_11(VAR_20, VAR_21, (1 << VAR_22), VAR_7, 0);
 FUNC_10(VAR_20, VAR_21, VAR_6, 0);
 FUNC_3(VAR_20, VAR_21, (1 << VAR_22));

 if (FUNC_9(VAR_20, VAR_21, VAR_26, 1) != 0)
  return -VAR_9;
 if (VAR_27) {
  unsigned int VAR_44;

  VAR_44 = FUNC_8(VAR_20, VAR_21, VAR_22,
       VAR_8);
  *VAR_27 = VAR_44 & VAR_20->hal_handle->upc_mask;
 }

 FUNC_2(VAR_20, VAR_21, (1 << VAR_22));
 if (VAR_24 <= VAR_17)
  FUNC_12(VAR_20, VAR_21, 0, VAR_24, VAR_28);
 FUNC_6(VAR_20, VAR_21, (1 << VAR_22), VAR_40);
 FUNC_11(VAR_20, VAR_21, (1 << VAR_22), VAR_8,
       VAR_20->hal_handle->upc_mask & VAR_41);
 VAR_36 = FUNC_7(VAR_20, VAR_21, VAR_2);
 VAR_37 = FUNC_0(VAR_36, VAR_18);
 FUNC_10(VAR_20, VAR_21, VAR_2, VAR_37);
 FUNC_10(VAR_20, VAR_21, VAR_3, VAR_39);
 FUNC_10(VAR_20, VAR_21, VAR_1, VAR_38 & VAR_0);
 FUNC_10(VAR_20, VAR_21, VAR_4, VAR_42);
 FUNC_11(VAR_20, VAR_21, (1 << VAR_22),
       VAR_15, VAR_29);
 FUNC_11(VAR_20, VAR_21, (1 << VAR_22),
       VAR_16, VAR_30);
 FUNC_11(VAR_20, VAR_21, (1 << VAR_22),
       VAR_13, VAR_31);
 FUNC_11(VAR_20, VAR_21, (1 << VAR_22),
       VAR_14, VAR_32);
 FUNC_11(VAR_20, VAR_21, (1 << VAR_22),
       VAR_11, VAR_33);
 FUNC_11(VAR_20, VAR_21, (1 << VAR_22),
       VAR_7, VAR_34);
 FUNC_10(VAR_20, VAR_21, VAR_6, VAR_35);
 FUNC_10(VAR_20, VAR_21, VAR_5, VAR_43);

 return 0;
}
