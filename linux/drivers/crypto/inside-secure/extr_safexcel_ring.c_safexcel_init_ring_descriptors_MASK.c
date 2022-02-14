
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct safexcel_desc_ring {int offset; void* base; void* read; void* base_end; void* write; int base_dma; } ;
struct TYPE_2__ {int cd_offset; int rd_offset; } ;
struct safexcel_crypto_priv {int dev; TYPE_1__ config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int,int *,int ) ;

int FUNC_1(struct safexcel_crypto_priv *VAR_3,
       struct safexcel_desc_ring *VAR_4,
       struct safexcel_desc_ring *VAR_5)
{
 VAR_4->offset = sizeof(u32) * VAR_3->config.cd_offset;
 VAR_4->base = FUNC_0(VAR_3->dev,
     VAR_4->offset * VAR_0,
     &VAR_4->base_dma, VAR_2);
 if (!VAR_4->base)
  return -VAR_1;
 VAR_4->write = VAR_4->base;
 VAR_4->base_end = VAR_4->base + VAR_4->offset * (VAR_0 - 1);
 VAR_4->read = VAR_4->base;

 VAR_5->offset = sizeof(u32) * VAR_3->config.rd_offset;
 VAR_5->base = FUNC_0(VAR_3->dev,
     VAR_5->offset * VAR_0,
     &VAR_5->base_dma, VAR_2);
 if (!VAR_5->base)
  return -VAR_1;
 VAR_5->write = VAR_5->base;
 VAR_5->base_end = VAR_5->base + VAR_5->offset * (VAR_0 - 1);
 VAR_5->read = VAR_5->base;

 return 0;
}
