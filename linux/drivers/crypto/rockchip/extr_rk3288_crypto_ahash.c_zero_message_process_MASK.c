
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_ahash {int dummy; } ;
struct ahash_request {int result; } ;


 int VAR_0 ;



 int FUNC_0 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_1 (struct ahash_request*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_4)
{
 struct crypto_ahash *VAR_5 = FUNC_1(VAR_4);
 int VAR_6 = FUNC_0(VAR_5);

 switch (VAR_6) {
 case 129:
  FUNC_2(VAR_4->result, VAR_2, VAR_6);
  break;
 case 128:
  FUNC_2(VAR_4->result, VAR_3, VAR_6);
  break;
 case 130:
  FUNC_2(VAR_4->result, VAR_1, VAR_6);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
