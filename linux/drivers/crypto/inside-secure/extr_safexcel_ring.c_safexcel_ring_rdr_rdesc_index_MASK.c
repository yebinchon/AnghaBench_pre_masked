
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct safexcel_result_desc {int dummy; } ;
struct safexcel_desc_ring {void* base; int offset; } ;
struct safexcel_crypto_priv {TYPE_1__* ring; } ;
struct TYPE_2__ {struct safexcel_desc_ring rdr; } ;



inline int FUNC_0(struct safexcel_crypto_priv *VAR_0,
      int VAR_1,
      struct safexcel_result_desc *VAR_2)
{
 struct safexcel_desc_ring *VAR_3 = &VAR_0->ring[VAR_1].rdr;

 return ((void *)VAR_2 - VAR_3->base) / VAR_3->offset;
}
