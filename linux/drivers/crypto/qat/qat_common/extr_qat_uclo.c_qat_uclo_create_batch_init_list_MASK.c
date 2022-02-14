
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_uof_memvar_attr {int value; scalar_t__ offset_in_byte; } ;
struct icp_qat_uof_initmem {unsigned int val_attr_num; scalar_t__ addr; } ;
struct icp_qat_uof_batch_init {int size; unsigned int ae; struct icp_qat_uof_batch_init* next; int * value; scalar_t__ addr; } ;
struct icp_qat_fw_loader_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct icp_qat_uof_batch_init*) ;
 struct icp_qat_uof_batch_init* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct icp_qat_fw_loader_handle
        *VAR_2, struct icp_qat_uof_initmem
        *VAR_3, unsigned int VAR_4,
        struct icp_qat_uof_batch_init
        **VAR_5)
{
 struct icp_qat_uof_batch_init *VAR_6, *VAR_7;
 struct icp_qat_uof_batch_init *VAR_8, *VAR_9;
 struct icp_qat_uof_memvar_attr *VAR_10;
 unsigned int VAR_11, VAR_12 = 0;

 VAR_10 =
  (struct icp_qat_uof_memvar_attr *)((uintptr_t)VAR_3 +
  sizeof(struct icp_qat_uof_initmem));

 VAR_6 = *VAR_5;
 if (!VAR_6) {
  VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
  if (!VAR_6)
   return -VAR_0;
  VAR_6->size = 1;
  *VAR_5 = VAR_6;
  VAR_12 = 1;
 }
 VAR_9 = VAR_6;
 while (VAR_9->next)
  VAR_9 = VAR_9->next;
 VAR_7 = VAR_9;
 for (VAR_11 = 0; VAR_11 < VAR_3->val_attr_num; VAR_11++) {
  VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_1);
  if (!VAR_8)
   goto out_err;
  VAR_8->ae = VAR_4;
  VAR_8->addr = VAR_3->addr + VAR_10->offset_in_byte;
  VAR_8->value = &VAR_10->value;
  VAR_8->size = 4;
  VAR_8->next = ((void*)0);
  VAR_7->next = VAR_8;
  VAR_7 = VAR_8;
  VAR_6->size += FUNC_2();
  VAR_10++;
 }
 return 0;
out_err:
 while (VAR_9) {
  VAR_8 = VAR_9->next;
  FUNC_0(VAR_9);
  VAR_9 = VAR_8;
 }
 if (VAR_12)
  FUNC_0(*VAR_5);
 return -VAR_0;
}
