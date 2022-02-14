
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icp_qat_simg_ae_mode {unsigned int ae_mask; } ;
struct icp_qat_fw_loader_handle {TYPE_1__* hal_handle; } ;
struct icp_qat_fw_auth_desc {int dummy; } ;
struct icp_qat_css_hdr {int dummy; } ;
struct icp_qat_auth_chunk {int dummy; } ;
struct TYPE_2__ {unsigned int ae_max_num; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int FUNC_0 (struct icp_qat_fw_loader_handle*,int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (struct icp_qat_fw_loader_handle*,int ,unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (struct icp_qat_fw_loader_handle*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct icp_qat_fw_loader_handle *VAR_12,
       struct icp_qat_fw_auth_desc *VAR_13)
{
 unsigned int VAR_14;
 unsigned int VAR_15;
 struct icp_qat_simg_ae_mode *VAR_16;
 unsigned int VAR_17 = VAR_5;

 VAR_16 = (void *)((uintptr_t)VAR_13 +
       sizeof(struct icp_qat_auth_chunk) +
       sizeof(struct icp_qat_css_hdr) +
       VAR_10 +
       VAR_11);
 for (VAR_14 = 0; VAR_14 < VAR_12->hal_handle->ae_max_num; VAR_14++) {
  int VAR_18 = 0;

  if (!((VAR_16->ae_mask >> VAR_14) & 0x1))
   continue;
  if (FUNC_4(VAR_12, VAR_14)) {
   FUNC_3("QAT: AE %d is active\n", VAR_14);
   return -VAR_0;
  }
  FUNC_1(VAR_12, VAR_2,
       (VAR_4 | (VAR_14 << VAR_3)));

  do {
   FUNC_2(VAR_9);
   VAR_15 = FUNC_0(VAR_12, VAR_6);
   if (((VAR_15 & VAR_1) ==
       VAR_7) &&
       ((VAR_15 >> VAR_17) & (1 << VAR_14)))
    break;
  } while (VAR_18++ < VAR_8);
  if (VAR_18 > VAR_8) {
   FUNC_3("QAT: firmware load failed timeout %x\n", VAR_18);
   return -VAR_0;
  }
 }
 return 0;
}
