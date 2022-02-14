
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {struct crypto_shash* tfm; } ;
struct crypto_shash {int dummy; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct crypto_shash*) ;
 struct crypto_shash* FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (struct crypto_shash*) ;
 scalar_t__ FUNC_3 (struct crypto_shash*) ;
 struct shash_desc* FUNC_4 (scalar_t__,int ) ;

enum i40iw_status_code FUNC_5(struct shash_desc **VAR_2)
{
 struct crypto_shash *VAR_3;
 struct shash_desc *VAR_4;

 VAR_3 = FUNC_1("crc32c", 0, 0);
 if (FUNC_0(VAR_3))
  return VAR_1;

 VAR_4 = FUNC_4(sizeof(*VAR_4) + FUNC_3(VAR_3),
   VAR_0);
 if (!VAR_4) {
  FUNC_2(VAR_3);
  return VAR_1;
 }
 VAR_4->tfm = VAR_3;
 *VAR_2 = VAR_4;

 return 0;
}
