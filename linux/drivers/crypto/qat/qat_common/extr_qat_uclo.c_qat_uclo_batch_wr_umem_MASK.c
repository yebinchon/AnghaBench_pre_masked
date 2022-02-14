
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_uof_batch_init {unsigned char ae; unsigned int addr; unsigned int* value; unsigned int size; struct icp_qat_uof_batch_init* next; } ;
struct icp_qat_fw_loader_handle {int dummy; } ;


 int FUNC_0 (struct icp_qat_fw_loader_handle*,unsigned char,unsigned int,unsigned int*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct icp_qat_fw_loader_handle *VAR_0,
       unsigned char VAR_1,
       struct icp_qat_uof_batch_init
       *VAR_2)
{
 struct icp_qat_uof_batch_init *VAR_3;

 if (!VAR_2)
  return;
 VAR_3 = VAR_2->next;
 while (VAR_3) {
  unsigned int VAR_4, *VAR_5, VAR_6;

  VAR_1 = VAR_3->ae;
  VAR_4 = VAR_3->addr;
  VAR_5 = VAR_3->value;
  VAR_6 = VAR_3->size;
  FUNC_0(VAR_0, VAR_1, VAR_4, VAR_5, VAR_6);
  VAR_3 = VAR_3->next;
 }
}
