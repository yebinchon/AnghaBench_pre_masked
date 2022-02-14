
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_sha_reqctx {int dma_addr; int flags; scalar_t__ block_size; scalar_t__ buflen; int buffer; } ;
struct atmel_sha_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct atmel_sha_dev*,int ) ;
 int FUNC_1 (struct atmel_sha_dev*,int ,size_t,int ,int ,int) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct atmel_sha_dev *VAR_3,
     struct atmel_sha_reqctx *VAR_4,
     size_t VAR_5, int VAR_6)
{
 VAR_4->dma_addr = FUNC_3(VAR_3->dev, VAR_4->buffer,
    VAR_4->buflen + VAR_4->block_size, VAR_0);
 if (FUNC_4(VAR_3->dev, VAR_4->dma_addr)) {
  FUNC_2(VAR_3->dev, "dma %zu bytes error\n", VAR_4->buflen +
    VAR_4->block_size);
  return FUNC_0(VAR_3, -VAR_1);
 }

 VAR_4->flags &= ~VAR_2;


 return FUNC_1(VAR_3, VAR_4->dma_addr, VAR_5, 0, 0, VAR_6);
}
