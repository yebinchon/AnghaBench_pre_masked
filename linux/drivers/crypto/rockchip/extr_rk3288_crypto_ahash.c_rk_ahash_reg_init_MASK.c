
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_crypto_info {int total; scalar_t__ reg; int async_req; } ;
struct rk_ahash_rctx {int mode; } ;
struct ahash_request {int dummy; } ;


 int FUNC_0 (struct rk_crypto_info*,int ) ;
 int FUNC_1 (struct rk_crypto_info*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int,int) ;
 struct ahash_request* FUNC_3 (int ) ;
 struct rk_ahash_rctx* FUNC_4 (struct ahash_request*) ;
 int FUNC_5 (scalar_t__,int ,int) ;

__attribute__((used)) static void FUNC_6(struct rk_crypto_info *VAR_16)
{
 struct ahash_request *VAR_17 = FUNC_3(VAR_16->async_req);
 struct rk_ahash_rctx *VAR_18 = FUNC_4(VAR_17);
 int VAR_19 = 0;

 VAR_19 = FUNC_0(VAR_16, VAR_4) |
       VAR_7 | FUNC_2(0xffff, 16);
 FUNC_1(VAR_16, VAR_4, VAR_19);

 VAR_19 = FUNC_0(VAR_16, VAR_4);
 VAR_19 &= (~VAR_7);
 VAR_19 |= FUNC_2(0xffff, 16);
 FUNC_1(VAR_16, VAR_4, VAR_19);

 FUNC_5(VAR_16->reg + VAR_6, 0, 32);

 FUNC_1(VAR_16, VAR_14, VAR_12 |
         VAR_10);

 FUNC_1(VAR_16, VAR_15, VAR_13 |
         VAR_11);

 FUNC_1(VAR_16, VAR_5, VAR_18->mode |
            VAR_9);

 FUNC_1(VAR_16, VAR_3, VAR_2 |
       VAR_0 |
       VAR_1);

 FUNC_1(VAR_16, VAR_8, VAR_16->total);
}
