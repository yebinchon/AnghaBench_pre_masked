
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_tdes_dev {int flags; size_t dma_size; int buflen; int buf_out; int out_offset; int out_sg; int dma_addr_out; int dev; int in_sg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t FUNC_0 (int *,int *,int ,int ,size_t,int) ;
 int FUNC_1 (struct atmel_tdes_dev*,int ,int) ;
 int FUNC_2 (int ,int ,size_t,int ) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (char*,size_t) ;

__attribute__((used)) static int FUNC_5(struct atmel_tdes_dev *VAR_7)
{
 int VAR_8 = 0;
 size_t VAR_9;

 FUNC_1(VAR_7, VAR_4, VAR_6|VAR_5);

 if (VAR_7->flags & VAR_3) {
  FUNC_3(VAR_7->dev, VAR_7->out_sg, 1, VAR_0);
  FUNC_3(VAR_7->dev, VAR_7->in_sg, 1, VAR_1);
 } else {
  FUNC_2(VAR_7->dev, VAR_7->dma_addr_out,
        VAR_7->dma_size, VAR_0);


  VAR_9 = FUNC_0(&VAR_7->out_sg, &VAR_7->out_offset,
    VAR_7->buf_out, VAR_7->buflen, VAR_7->dma_size, 1);
  if (VAR_9 != VAR_7->dma_size) {
   VAR_8 = -VAR_2;
   FUNC_4("not all data converted: %zu\n", VAR_9);
  }
 }

 return VAR_8;
}
