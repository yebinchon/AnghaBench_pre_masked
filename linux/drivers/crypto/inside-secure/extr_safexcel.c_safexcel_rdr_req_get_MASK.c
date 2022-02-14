
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct safexcel_crypto_priv {TYPE_1__* ring; } ;
struct crypto_async_request {int dummy; } ;
struct TYPE_2__ {struct crypto_async_request** rdr_req; } ;


 int FUNC_0 (struct safexcel_crypto_priv*,int) ;

inline struct crypto_async_request *
FUNC_1(struct safexcel_crypto_priv *VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0, VAR_1);

 return VAR_0->ring[VAR_1].rdr_req[VAR_2];
}
