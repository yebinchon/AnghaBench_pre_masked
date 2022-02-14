
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

int FUNC_1(void *VAR_1, size_t VAR_2,
         unsigned char VAR_3,
         const void *VAR_4, size_t VAR_5)
{
 if (VAR_5 != 1 || ((const u8 *)VAR_4)[0] != 0) {
  FUNC_0("Unsupported PKCS#8 version\n");
  return -VAR_0;
 }
 return 0;
}
