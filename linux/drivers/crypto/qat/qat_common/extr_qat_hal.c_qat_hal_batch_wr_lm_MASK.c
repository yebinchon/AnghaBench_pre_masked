
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct icp_qat_uof_batch_init {int size; unsigned char ae; unsigned int addr; unsigned int* value; struct icp_qat_uof_batch_init* next; } ;
struct icp_qat_fw_loader_handle {TYPE_1__* hal_handle; } ;
struct TYPE_2__ {unsigned int max_ustore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (int,int,int ) ;
 scalar_t__ FUNC_2 (int*,int,unsigned int,unsigned int,unsigned int*) ;
 int FUNC_3 (struct icp_qat_fw_loader_handle*,unsigned char,int ,int*,int*,int) ;

int FUNC_4(struct icp_qat_fw_loader_handle *VAR_2,
   unsigned char VAR_3,
   struct icp_qat_uof_batch_init *VAR_4)
{
 struct icp_qat_uof_batch_init *VAR_5;
 uint64_t *VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9 = 1;
 int VAR_10 = 0;

 VAR_5 = VAR_4->next;
 VAR_8 = VAR_4->size;
 if ((unsigned int)VAR_8 > VAR_2->hal_handle->max_ustore)
  VAR_8 = VAR_2->hal_handle->max_ustore;
 VAR_6 = FUNC_1(VAR_8, sizeof(uint64_t),
     VAR_1);
 if (!VAR_6)
  return -VAR_0;
 VAR_7 = 0;
 while (VAR_5) {
  unsigned int VAR_11, *VAR_12, VAR_13;

  VAR_3 = VAR_5->ae;
  VAR_11 = VAR_5->addr;
  VAR_12 = VAR_5->value;
  VAR_13 = VAR_5->size;
  VAR_7 += FUNC_2(VAR_6,
           VAR_7,
           VAR_13, VAR_11, VAR_12);
  VAR_5 = VAR_5->next;
 }

 if (VAR_6 && (VAR_7 > 0)) {
  VAR_6[VAR_7++] = 0x0E000010000ull;
  VAR_10 = FUNC_3(VAR_2, VAR_3, 0, &VAR_9,
        VAR_6,
        VAR_7);
 }
 FUNC_0(VAR_6);
 return VAR_10;
}
