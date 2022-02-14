
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct kpp_request {scalar_t__ src_len; int src; TYPE_1__ base; } ;
struct crypto_kpp {int dummy; } ;
struct atmel_i2c_work_data {int cmd; int client; struct atmel_ecdh_ctx* ctx; } ;
struct atmel_ecdh_ctx {int client; int fallback; scalar_t__ do_fallback; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct atmel_i2c_work_data*,int ,struct kpp_request*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct kpp_request*) ;
 struct crypto_kpp* FUNC_3 (struct kpp_request*) ;
 int FUNC_4 (struct atmel_i2c_work_data*) ;
 struct atmel_i2c_work_data* FUNC_5 (int,int ) ;
 int FUNC_6 (struct kpp_request*,int ) ;
 struct atmel_ecdh_ctx* FUNC_7 (struct crypto_kpp*) ;

__attribute__((used)) static int FUNC_8(struct kpp_request *VAR_8)
{
 struct crypto_kpp *VAR_9 = FUNC_3(VAR_8);
 struct atmel_ecdh_ctx *VAR_10 = FUNC_7(VAR_9);
 struct atmel_i2c_work_data *VAR_11;
 gfp_t VAR_12;
 int VAR_13;

 if (VAR_10->do_fallback) {
  FUNC_6(VAR_8, VAR_10->fallback);
  return FUNC_2(VAR_8);
 }


 if (VAR_8->src_len != VAR_0)
  return -VAR_3;

 VAR_12 = (VAR_8->base.flags & VAR_1) ? VAR_6 :
            VAR_5;

 VAR_11 = FUNC_5(sizeof(*VAR_11), VAR_12);
 if (!VAR_11)
  return -VAR_4;

 VAR_11->ctx = VAR_10;
 VAR_11->client = VAR_10->client;

 VAR_13 = FUNC_1(&VAR_11->cmd, VAR_8->src);
 if (VAR_13)
  goto free_work_data;

 FUNC_0(VAR_11, VAR_7, VAR_8);

 return -VAR_2;

free_work_data:
 FUNC_4(VAR_11);
 return VAR_13;
}
