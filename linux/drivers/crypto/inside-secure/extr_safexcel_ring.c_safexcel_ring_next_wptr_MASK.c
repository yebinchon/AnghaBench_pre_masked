
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct safexcel_desc_ring {int write; int read; int offset; int base; int base_end; } ;
struct safexcel_crypto_priv {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static void *FUNC_1(struct safexcel_crypto_priv *VAR_1,
         struct safexcel_desc_ring *VAR_2)
{
 void *VAR_3 = VAR_2->write;

 if ((VAR_2->write == VAR_2->read - VAR_2->offset) ||
     (VAR_2->read == VAR_2->base && VAR_2->write == VAR_2->base_end))
  return FUNC_0(-VAR_0);

 if (VAR_2->write == VAR_2->base_end)
  VAR_2->write = VAR_2->base;
 else
  VAR_2->write += VAR_2->offset;

 return VAR_3;
}
