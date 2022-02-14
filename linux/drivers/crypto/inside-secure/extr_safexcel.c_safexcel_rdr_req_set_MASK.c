
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct safexcel_result_desc {int dummy; } ;
struct safexcel_crypto_priv {TYPE_1__* ring; } ;
struct crypto_async_request {int dummy; } ;
struct TYPE_2__ {struct crypto_async_request** rdr_req; } ;


 int FUNC_0 (struct safexcel_crypto_priv*,int,struct safexcel_result_desc*) ;

inline void FUNC_1(struct safexcel_crypto_priv *VAR_0,
     int VAR_1,
     struct safexcel_result_desc *VAR_2,
     struct crypto_async_request *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);

 VAR_0->ring[VAR_1].rdr_req[VAR_4] = VAR_3;
}
