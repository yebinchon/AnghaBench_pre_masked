
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_uof_batch_init {struct icp_qat_uof_batch_init* next; } ;
struct icp_qat_fw_loader_handle {int dummy; } ;


 int FUNC_0 (struct icp_qat_uof_batch_init*) ;

__attribute__((used)) static void
FUNC_1(struct icp_qat_fw_loader_handle *VAR_0,
     struct icp_qat_uof_batch_init **VAR_1)
{
 struct icp_qat_uof_batch_init *VAR_2;

 VAR_2 = *VAR_1;
 while (VAR_2) {
  struct icp_qat_uof_batch_init *VAR_3;

  VAR_3 = VAR_2;
  VAR_2 = VAR_2->next;
  FUNC_0(VAR_3);
 }
 *VAR_1 = ((void*)0);
}
