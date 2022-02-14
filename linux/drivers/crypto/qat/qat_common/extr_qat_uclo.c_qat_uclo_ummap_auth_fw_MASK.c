
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_fw_loader_handle {int dummy; } ;
struct icp_qat_fw_auth_desc {int dummy; } ;
struct icp_qat_auth_chunk {int chunk_size; int chunk_bus_addr; } ;
struct icp_firml_dram_desc {int dram_size; int dram_bus_addr; struct icp_qat_fw_auth_desc* dram_base_addr_v; } ;


 int FUNC_0 (struct icp_qat_fw_loader_handle*,struct icp_firml_dram_desc*) ;

__attribute__((used)) static void FUNC_1(struct icp_qat_fw_loader_handle *VAR_0,
       struct icp_qat_fw_auth_desc **VAR_1)
{
 struct icp_firml_dram_desc VAR_2;

 VAR_2.dram_base_addr_v = *VAR_1;
 VAR_2.dram_bus_addr = ((struct icp_qat_auth_chunk *)
       (*VAR_1))->chunk_bus_addr;
 VAR_2.dram_size = ((struct icp_qat_auth_chunk *)
          (*VAR_1))->chunk_size;
 FUNC_0(VAR_0, &VAR_2);
}
