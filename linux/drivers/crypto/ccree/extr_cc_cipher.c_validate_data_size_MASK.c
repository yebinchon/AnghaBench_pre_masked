
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cc_cipher_ctx {int flow_mode; int cipher_mode; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int VAR_3 ;




__attribute__((used)) static int FUNC_1(struct cc_cipher_ctx *VAR_4,
         unsigned int VAR_5)
{
 switch (VAR_4->flow_mode) {
 case 130:
  switch (VAR_4->cipher_mode) {
  case 131:
  case 136:
   if (VAR_5 >= VAR_0)
    return 0;
   break;
  case 132:
  case 135:
    return 0;
  case 134:
  case 137:
  case 133:
  case 138:
   if (FUNC_0(VAR_5, VAR_0))
    return 0;
   break;
  default:
   break;
  }
  break;
 case 129:
  if (FUNC_0(VAR_5, VAR_1))
   return 0;
  break;
 case 128:
  switch (VAR_4->cipher_mode) {
  case 135:
   return 0;
  case 134:
  case 137:
   if (FUNC_0(VAR_5, VAR_3))
    return 0;
  default:
   break;
  }
 default:
  break;
 }
 return -VAR_2;
}
