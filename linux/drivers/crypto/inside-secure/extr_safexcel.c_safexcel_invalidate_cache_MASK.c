
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int control0; scalar_t__ refresh; scalar_t__ options; int type; } ;
struct safexcel_result_desc {TYPE_1__ control_data; } ;
struct safexcel_crypto_priv {TYPE_2__* ring; } ;
struct safexcel_command_desc {TYPE_1__ control_data; } ;
struct crypto_async_request {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int cdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct safexcel_result_desc*) ;
 int FUNC_1 (struct safexcel_result_desc*) ;
 struct safexcel_result_desc* FUNC_2 (struct safexcel_crypto_priv*,int,int,int,int ,int ,int ,int ) ;
 struct safexcel_result_desc* FUNC_3 (struct safexcel_crypto_priv*,int,int,int,int ,int ) ;
 int FUNC_4 (struct safexcel_crypto_priv*,int,struct safexcel_result_desc*,struct crypto_async_request*) ;
 int FUNC_5 (struct safexcel_crypto_priv*,int *) ;

int FUNC_6(struct crypto_async_request *VAR_2,
         struct safexcel_crypto_priv *VAR_3,
         dma_addr_t VAR_4, int VAR_5)
{
 struct safexcel_command_desc *VAR_6;
 struct safexcel_result_desc *VAR_7;
 int VAR_8 = 0;


 VAR_6 = FUNC_2(VAR_3, VAR_5, 1, 1, 0, 0, 0, VAR_4);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_6->control_data.type = VAR_1;
 VAR_6->control_data.options = 0;
 VAR_6->control_data.refresh = 0;
 VAR_6->control_data.control0 = VAR_0;


 VAR_7 = FUNC_3(VAR_3, VAR_5, 1, 1, 0, 0);

 if (FUNC_0(VAR_7)) {
  VAR_8 = FUNC_1(VAR_7);
  goto cdesc_rollback;
 }

 FUNC_4(VAR_3, VAR_5, VAR_7, VAR_2);

 return VAR_8;

cdesc_rollback:
 FUNC_5(VAR_3, &VAR_3->ring[VAR_5].cdr);

 return VAR_8;
}
