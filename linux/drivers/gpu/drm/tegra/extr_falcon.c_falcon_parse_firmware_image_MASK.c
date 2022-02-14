
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct falcon_fw_os_header_v1 {int data_size; int data_offset; int code_size; int code_offset; } ;
struct falcon_fw_bin_header_v1 {scalar_t__ magic; int version; scalar_t__ size; int os_header_offset; int os_data_offset; int os_size; } ;
struct TYPE_7__ {int size; int offset; } ;
struct TYPE_6__ {int size; int offset; } ;
struct TYPE_5__ {int offset; int size; } ;
struct TYPE_8__ {scalar_t__ size; TYPE_3__ data; TYPE_2__ code; TYPE_1__ bin_data; struct falcon_fw_os_header_v1* vaddr; } ;
struct falcon {TYPE_4__ firmware; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct falcon *VAR_2)
{
 struct falcon_fw_bin_header_v1 *VAR_3 = (void *)VAR_2->firmware.vaddr;
 struct falcon_fw_os_header_v1 *VAR_4;


 if (VAR_3->magic != VAR_1) {
  FUNC_0(VAR_2->dev, "incorrect firmware magic\n");
  return -VAR_0;
 }


 if (VAR_3->version != 1) {
  FUNC_0(VAR_2->dev, "unsupported firmware version\n");
  return -VAR_0;
 }


 if (VAR_3->size > VAR_2->firmware.size) {
  FUNC_0(VAR_2->dev, "firmware image size inconsistency\n");
  return -VAR_0;
 }

 VAR_4 = VAR_2->firmware.vaddr + VAR_3->os_header_offset;

 VAR_2->firmware.bin_data.size = VAR_3->os_size;
 VAR_2->firmware.bin_data.offset = VAR_3->os_data_offset;
 VAR_2->firmware.code.offset = VAR_4->code_offset;
 VAR_2->firmware.code.size = VAR_4->code_size;
 VAR_2->firmware.data.offset = VAR_4->data_offset;
 VAR_2->firmware.data.size = VAR_4->data_size;

 return 0;
}
