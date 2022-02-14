
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto_async_request {int dummy; } ;




 int VAR_0 ;
 int FUNC_0 (struct crypto_async_request*,int,int) ;
 int FUNC_1 (struct crypto_async_request*,int,int) ;

int FUNC_2(struct crypto_async_request *VAR_1, u32 VAR_2, u32 VAR_3,
       u32 VAR_4)
{
 switch (VAR_2) {
 case 129:
  return FUNC_0(VAR_1, VAR_3, VAR_4);
 case 128:
  return FUNC_1(VAR_1, VAR_3, VAR_4);
 default:
  return -VAR_0;
 }
}
