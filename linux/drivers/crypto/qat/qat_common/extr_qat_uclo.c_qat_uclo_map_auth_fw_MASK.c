
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct icp_qat_simg_ae_mode {int dummy; } ;
struct icp_qat_fw_loader_handle {int dummy; } ;
struct icp_qat_fw_auth_desc {int chunk_bus_addr; unsigned int css_hdr_high; unsigned int css_hdr_low; unsigned int fwsk_pub_high; unsigned int fwsk_pub_low; unsigned int signature_high; unsigned int signature_low; unsigned int img_high; unsigned int img_low; unsigned int img_len; unsigned int img_ae_mode_data_high; unsigned int img_ae_mode_data_low; unsigned int img_ae_init_data_high; unsigned int img_ae_init_data_low; unsigned int img_ae_insts_high; unsigned int img_ae_insts_low; int chunk_size; } ;
struct icp_qat_css_hdr {scalar_t__ fw_type; } ;
struct icp_qat_auth_chunk {int chunk_bus_addr; unsigned int css_hdr_high; unsigned int css_hdr_low; unsigned int fwsk_pub_high; unsigned int fwsk_pub_low; unsigned int signature_high; unsigned int signature_low; unsigned int img_high; unsigned int img_low; unsigned int img_len; unsigned int img_ae_mode_data_high; unsigned int img_ae_mode_data_low; unsigned int img_ae_init_data_high; unsigned int img_ae_init_data_low; unsigned int img_ae_insts_high; unsigned int img_ae_insts_low; int chunk_size; } ;
struct icp_firml_dram_desc {int dram_bus_addr; struct icp_qat_fw_auth_desc* dram_base_addr_v; int dram_size; } ;


 int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (void*,void*,int) ;
 int FUNC_2 (void*,int ,unsigned int) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (struct icp_qat_fw_loader_handle*,struct icp_firml_dram_desc*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct icp_qat_fw_loader_handle *VAR_13,
    char *VAR_14, unsigned int VAR_15,
    struct icp_qat_fw_auth_desc **VAR_16)
{
 struct icp_qat_css_hdr *VAR_17 = (struct icp_qat_css_hdr *)VAR_14;
 struct icp_qat_fw_auth_desc *VAR_18;
 struct icp_qat_auth_chunk *VAR_19;
 u64 VAR_20, VAR_21, VAR_22;
 unsigned int VAR_23, VAR_24 = sizeof(*VAR_19);
 struct icp_firml_dram_desc VAR_25;

 if (VAR_15 > (VAR_4 + VAR_10)) {
  FUNC_3("QAT: error, input image size overflow %d\n", VAR_15);
  return -VAR_2;
 }
 VAR_23 = (VAR_17->fw_type == VAR_1) ?
   VAR_5 + VAR_24 :
   VAR_15 + VAR_8 + VAR_24;
 if (FUNC_4(VAR_13, &VAR_25, VAR_23)) {
  FUNC_3("QAT: error, allocate continuous dram fail\n");
  return -VAR_3;
 }

 VAR_19 = VAR_25.dram_base_addr_v;
 VAR_19->chunk_size = VAR_25.dram_size;
 VAR_19->chunk_bus_addr = VAR_25.dram_bus_addr;
 VAR_22 = (uintptr_t)VAR_25.dram_base_addr_v + VAR_24;
 VAR_21 = VAR_25.dram_bus_addr + VAR_24;
 VAR_18 = VAR_25.dram_base_addr_v;
 VAR_18->css_hdr_high = (unsigned int)(VAR_21 >> VAR_0);
 VAR_18->css_hdr_low = (unsigned int)VAR_21;
 VAR_20 = VAR_22;

 FUNC_1((void *)(uintptr_t)VAR_20, VAR_14, sizeof(*VAR_17));

 VAR_21 = FUNC_0(VAR_18->css_hdr_high, VAR_18->css_hdr_low) +
      sizeof(*VAR_17);
 VAR_20 = VAR_20 + sizeof(*VAR_17);

 VAR_18->fwsk_pub_high = (unsigned int)(VAR_21 >> VAR_0);
 VAR_18->fwsk_pub_low = (unsigned int)VAR_21;

 FUNC_1((void *)(uintptr_t)VAR_20,
        (void *)(VAR_14 + sizeof(*VAR_17)),
        VAR_7);

 FUNC_2((void *)(uintptr_t)(VAR_20 + VAR_7),
        0, VAR_8);


 FUNC_1((void *)(uintptr_t)(VAR_20 + VAR_7 +
        VAR_8),
        (void *)(VAR_14 + sizeof(*VAR_17) +
   VAR_7),
        sizeof(unsigned int));


 VAR_21 = FUNC_0(VAR_18->fwsk_pub_high,
       VAR_18->fwsk_pub_low) +
     VAR_9;
 VAR_20 = VAR_20 + VAR_9;
 VAR_18->signature_high = (unsigned int)(VAR_21 >> VAR_0);
 VAR_18->signature_low = (unsigned int)VAR_21;

 FUNC_1((void *)(uintptr_t)VAR_20,
        (void *)(VAR_14 + sizeof(*VAR_17) +
        VAR_7 +
        VAR_6),
        VAR_11);

 VAR_21 = FUNC_0(VAR_18->signature_high,
       VAR_18->signature_low) +
     VAR_11;
 VAR_20 += VAR_11;

 VAR_18->img_high = (unsigned int)(VAR_21 >> VAR_0);
 VAR_18->img_low = (unsigned int)VAR_21;
 VAR_18->img_len = VAR_15 - VAR_4;
 FUNC_1((void *)(uintptr_t)VAR_20,
        (void *)(VAR_14 + VAR_4),
        VAR_18->img_len);
 VAR_20 = VAR_22;

 if (((struct icp_qat_css_hdr *)(uintptr_t)VAR_20)->fw_type ==
     VAR_1) {
  VAR_18->img_ae_mode_data_high = VAR_18->img_high;
  VAR_18->img_ae_mode_data_low = VAR_18->img_low;
  VAR_21 = FUNC_0(VAR_18->img_ae_mode_data_high,
        VAR_18->img_ae_mode_data_low) +
      sizeof(struct icp_qat_simg_ae_mode);

  VAR_18->img_ae_init_data_high = (unsigned int)
       (VAR_21 >> VAR_0);
  VAR_18->img_ae_init_data_low = (unsigned int)VAR_21;
  VAR_21 += VAR_12;
  VAR_18->img_ae_insts_high = (unsigned int)
          (VAR_21 >> VAR_0);
  VAR_18->img_ae_insts_low = (unsigned int)VAR_21;
 } else {
  VAR_18->img_ae_insts_high = VAR_18->img_high;
  VAR_18->img_ae_insts_low = VAR_18->img_low;
 }
 *VAR_16 = VAR_18;
 return 0;
}
