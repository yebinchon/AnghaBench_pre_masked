
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct qat_alg_ablkcipher_ctx {int tfm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct qat_alg_ablkcipher_ctx*,int,int const*,unsigned int,int) ;
 int FUNC_2 (struct qat_alg_ablkcipher_ctx*,int,int const*,unsigned int,int) ;
 scalar_t__ FUNC_3 (unsigned int,int*,int) ;

__attribute__((used)) static int FUNC_4(struct qat_alg_ablkcipher_ctx *VAR_2,
         const uint8_t *VAR_3,
         unsigned int VAR_4,
         int VAR_5)
{
 int VAR_6;

 if (FUNC_3(VAR_4, &VAR_6, VAR_5))
  goto bad_key;

 FUNC_2(VAR_2, VAR_6, VAR_3, VAR_4, VAR_5);
 FUNC_1(VAR_2, VAR_6, VAR_3, VAR_4, VAR_5);
 return 0;
bad_key:
 FUNC_0(VAR_2->tfm, VAR_0);
 return -VAR_1;
}
