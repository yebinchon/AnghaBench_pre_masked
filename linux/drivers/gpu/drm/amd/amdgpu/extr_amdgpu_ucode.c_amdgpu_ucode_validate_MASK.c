
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firmware {scalar_t__ size; scalar_t__ data; } ;
struct common_firmware_header {int size_bytes; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(const struct firmware *VAR_1)
{
 const struct common_firmware_header *VAR_2 =
  (const struct common_firmware_header *)VAR_1->data;

 if (VAR_1->size == FUNC_0(VAR_2->size_bytes))
  return 0;

 return -VAR_0;
}
