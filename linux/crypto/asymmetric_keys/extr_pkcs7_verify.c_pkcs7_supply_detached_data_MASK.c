
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pkcs7_message {size_t data_len; void const* data; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

int FUNC_1(struct pkcs7_message *VAR_1,
          const void *VAR_2, size_t VAR_3)
{
 if (VAR_1->data) {
  FUNC_0("Data already supplied\n");
  return -VAR_0;
 }
 VAR_1->data = VAR_2;
 VAR_1->data_len = VAR_3;
 return 0;
}
