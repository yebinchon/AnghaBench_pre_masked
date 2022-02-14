
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_uof_initmem {unsigned int addr; unsigned int num_in_bytes; scalar_t__ scope; int sym_name; } ;
struct icp_qat_uclo_objhandle {int str_table; } ;
struct icp_qat_fw_loader_handle {struct icp_qat_uclo_objhandle* obj_handle; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,...) ;
 char* FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (char*,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct icp_qat_fw_loader_handle *VAR_3,
         struct icp_qat_uof_initmem *VAR_4,
         unsigned int VAR_5, unsigned int *VAR_6)
{
 struct icp_qat_uclo_objhandle *VAR_7 = VAR_3->obj_handle;
 char *VAR_8;

 if ((VAR_4->addr + VAR_4->num_in_bytes) > (VAR_5 << 0x2)) {
  FUNC_0("QAT: initmem is out of range");
  return -VAR_0;
 }
 if (VAR_4->scope != VAR_2) {
  FUNC_0("QAT: Memory scope for init_mem error\n");
  return -VAR_0;
 }
 VAR_8 = FUNC_1(&VAR_7->str_table, VAR_4->sym_name);
 if (!VAR_8) {
  FUNC_0("QAT: AE name assigned in UOF init table is NULL\n");
  return -VAR_0;
 }
 if (FUNC_2(VAR_8, VAR_6)) {
  FUNC_0("QAT: Parse num for AE number failed\n");
  return -VAR_0;
 }
 if (*VAR_6 >= VAR_1) {
  FUNC_0("QAT: ae %d out of range\n", *VAR_6);
  return -VAR_0;
 }
 return 0;
}
