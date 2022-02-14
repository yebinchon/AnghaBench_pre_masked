
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qcom_rng_ctx {struct qcom_rng* rng; } ;
struct qcom_rng {int clk; int lock; } ;
struct crypto_rng {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct qcom_rng_ctx* FUNC_2 (struct crypto_rng*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct qcom_rng*,int *,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct crypto_rng *VAR_0,
        const u8 *VAR_1, unsigned int VAR_2,
        u8 *VAR_3, unsigned int VAR_4)
{
 struct qcom_rng_ctx *VAR_5 = FUNC_2(VAR_0);
 struct qcom_rng *VAR_6 = VAR_5->rng;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_6->clk);
 if (VAR_7)
  return VAR_7;

 FUNC_3(&VAR_6->lock);

 VAR_7 = FUNC_5(VAR_6, VAR_3, VAR_4);

 FUNC_4(&VAR_6->lock);
 FUNC_0(VAR_6->clk);

 return 0;
}
