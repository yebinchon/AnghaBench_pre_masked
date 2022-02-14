
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct safexcel_desc_ring {scalar_t__ write; scalar_t__ read; scalar_t__ base; scalar_t__ base_end; scalar_t__ offset; } ;
struct safexcel_crypto_priv {int dummy; } ;



void FUNC_0(struct safexcel_crypto_priv *VAR_0,
     struct safexcel_desc_ring *VAR_1)
{
 if (VAR_1->write == VAR_1->read)
  return;

 if (VAR_1->write == VAR_1->base)
  VAR_1->write = VAR_1->base_end;
 else
  VAR_1->write -= VAR_1->offset;
}
