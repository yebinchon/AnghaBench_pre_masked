
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_ahash {int (* update ) (struct ahash_request*) ;} ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ahash_request*,int) ;
 int FUNC_1 (struct ahash_request*,int ) ;
 struct crypto_ahash* FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (struct ahash_request*) ;

__attribute__((used)) static int FUNC_4(struct ahash_request *VAR_3)
{
 struct crypto_ahash *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_5 = VAR_4->update(VAR_3);
 if (VAR_5 == -VAR_1 || VAR_5 == -VAR_0)
  return VAR_5;

 return FUNC_0(VAR_3, VAR_5);
}
