
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pkcs7_message {void* data; size_t data_len; size_t data_hdrlen; } ;


 int VAR_0 ;

int FUNC_0(const struct pkcs7_message *VAR_1,
      const void **VAR_2, size_t *VAR_3,
      size_t *VAR_4)
{
 if (!VAR_1->data)
  return -VAR_0;

 *VAR_2 = VAR_1->data;
 *VAR_3 = VAR_1->data_len;
 if (VAR_4)
  *VAR_4 = VAR_1->data_hdrlen;
 return 0;
}
