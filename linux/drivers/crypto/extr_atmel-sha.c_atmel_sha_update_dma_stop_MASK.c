
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct atmel_sha_reqctx {int flags; scalar_t__ offset; scalar_t__ block_size; scalar_t__ buflen; int dma_addr; TYPE_1__* sg; } ;
struct atmel_sha_dev {int dev; int req; } ;
struct TYPE_4__ {scalar_t__ length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct atmel_sha_reqctx* FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*,int,int ) ;
 int FUNC_2 (int ,int ,scalar_t__,int ) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct atmel_sha_dev *VAR_3)
{
 struct atmel_sha_reqctx *VAR_4 = FUNC_0(VAR_3->req);

 if (VAR_4->flags & VAR_2) {
  FUNC_1(VAR_3->dev, VAR_4->sg, 1, VAR_0);
  if (VAR_4->sg->length == VAR_4->offset) {
   VAR_4->sg = FUNC_3(VAR_4->sg);
   if (VAR_4->sg)
    VAR_4->offset = 0;
  }
  if (VAR_4->flags & VAR_1) {
   FUNC_2(VAR_3->dev, VAR_4->dma_addr,
    VAR_4->buflen + VAR_4->block_size, VAR_0);
  }
 } else {
  FUNC_2(VAR_3->dev, VAR_4->dma_addr, VAR_4->buflen +
      VAR_4->block_size, VAR_0);
 }

 return 0;
}
