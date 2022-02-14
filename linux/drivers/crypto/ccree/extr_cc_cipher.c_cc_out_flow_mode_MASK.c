
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cc_cipher_ctx {int flow_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




__attribute__((used)) static int FUNC_0(struct cc_cipher_ctx *VAR_3)
{
 switch (VAR_3->flow_mode) {
 case 130:
  return VAR_0;
 case 129:
  return VAR_1;
 case 128:
  return VAR_2;
 default:
  return VAR_3->flow_mode;
 }
}
