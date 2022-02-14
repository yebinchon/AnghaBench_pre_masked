
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct safexcel_desc_ring {int offset; void* read; void* base; void* base_end; void* write; } ;
struct safexcel_crypto_priv {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;

void *FUNC_1(struct safexcel_crypto_priv *VAR_1,
         struct safexcel_desc_ring *VAR_2)
{
 void *VAR_3 = VAR_2->read;

 if (VAR_2->write == VAR_2->read)
  return FUNC_0(-VAR_0);

 if (VAR_2->read == VAR_2->base_end)
  VAR_2->read = VAR_2->base;
 else
  VAR_2->read += VAR_2->offset;

 return VAR_3;
}
