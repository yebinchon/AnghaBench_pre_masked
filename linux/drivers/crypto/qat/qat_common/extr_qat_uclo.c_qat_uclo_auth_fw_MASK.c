
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct icp_qat_fw_loader_handle {int dummy; } ;
struct icp_qat_fw_auth_desc {int css_hdr_low; int css_hdr_high; } ;
struct icp_qat_auth_chunk {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int FUNC_1 (struct icp_qat_fw_loader_handle*,int ) ;
 int FUNC_2 (struct icp_qat_fw_loader_handle*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct icp_qat_fw_loader_handle *VAR_13,
       struct icp_qat_fw_auth_desc *VAR_14)
{
 unsigned int VAR_15, VAR_16 = 0;
 u64 VAR_17;

 VAR_17 = FUNC_0(VAR_14->css_hdr_high, VAR_14->css_hdr_low)
      - sizeof(struct icp_qat_auth_chunk);
 FUNC_2(VAR_13, VAR_5, (VAR_17 >> VAR_0));
 FUNC_2(VAR_13, VAR_6, VAR_17);
 FUNC_2(VAR_13, VAR_3, VAR_4);

 do {
  FUNC_3(VAR_12);
  VAR_15 = FUNC_1(VAR_13, VAR_7);
  if ((VAR_15 & VAR_2) == VAR_10)
   goto auth_fail;
  if (((VAR_15 >> VAR_8) & 0x1))
   if ((VAR_15 & VAR_2) == VAR_9)
    return 0;
 } while (VAR_16++ < VAR_11);
auth_fail:
 FUNC_4("QAT: authentication error (FCU_STATUS = 0x%x),retry = %d\n",
        VAR_15 & VAR_2, VAR_16);
 return -VAR_1;
}
