
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static int
FUNC_1(int VAR_2, uint32_t *VAR_3)
{
 switch (VAR_2) {
 case 130:
 case 129:
 case 128:
  *VAR_3 = VAR_1;
  break;
 default:
  FUNC_0("virtio_crypto: Unsupported key length: %d\n",
   VAR_2);
  return -VAR_0;
 }
 return 0;
}
