
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_tdes_dev {scalar_t__ buf_in; scalar_t__ buf_out; int buflen; int dma_addr_in; int dev; int dma_addr_out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static void FUNC_2(struct atmel_tdes_dev *VAR_2)
{
 FUNC_0(VAR_2->dev, VAR_2->dma_addr_out, VAR_2->buflen,
    VAR_0);
 FUNC_0(VAR_2->dev, VAR_2->dma_addr_in, VAR_2->buflen,
  VAR_1);
 FUNC_1((unsigned long)VAR_2->buf_out);
 FUNC_1((unsigned long)VAR_2->buf_in);
}
