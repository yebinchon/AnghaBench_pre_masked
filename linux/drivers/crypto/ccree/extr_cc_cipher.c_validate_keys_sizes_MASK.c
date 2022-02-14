
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cc_cipher_ctx {int flow_mode; int cipher_mode; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




__attribute__((used)) static int FUNC_0(struct cc_cipher_ctx *VAR_7, u32 VAR_8)
{
 switch (VAR_7->flow_mode) {
 case 130:
  switch (VAR_8) {
  case 133:
  case 132:
   if (VAR_7->cipher_mode != VAR_4 &&
       VAR_7->cipher_mode != VAR_3 &&
       VAR_7->cipher_mode != VAR_2)
    return 0;
   break;
  case 131:
   return 0;
  case (132 * 2):
  case (131 * 2):
   if (VAR_7->cipher_mode == VAR_4 ||
       VAR_7->cipher_mode == VAR_3 ||
       VAR_7->cipher_mode == VAR_2)
    return 0;
   break;
  default:
   break;
  }
  break;
 case 129:
  if (VAR_8 == VAR_0 || VAR_8 == VAR_1)
   return 0;
  break;
 case 128:
  if (VAR_8 == VAR_6)
   return 0;
 default:
  break;
 }
 return -VAR_5;
}
