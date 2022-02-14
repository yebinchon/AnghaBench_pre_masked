
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
 size_t FUNC_0 (int *,int *,int ,int ,size_t,int) ;
 int FUNC_1 (int ,int ,size_t,int ) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (char*,size_t) ;

__attribute__((used)) static int FUNC_4(struct atmel_tdes_dev *VAR_5)
{
 int VAR_6 = -VAR_2;
 size_t VAR_7;

 if (VAR_5->flags & VAR_3) {
  VAR_6 = 0;
  if (VAR_5->flags & VAR_4) {
   FUNC_2(VAR_5->dev, VAR_5->out_sg, 1, VAR_0);
   FUNC_2(VAR_5->dev, VAR_5->in_sg, 1, VAR_1);
  } else {
   FUNC_1(VAR_5->dev, VAR_5->dma_addr_out,
    VAR_5->dma_size, VAR_0);


   VAR_7 = FUNC_0(&VAR_5->out_sg, &VAR_5->out_offset,
    VAR_5->buf_out, VAR_5->buflen, VAR_5->dma_size, 1);
   if (VAR_7 != VAR_5->dma_size) {
    VAR_6 = -VAR_2;
    FUNC_3("not all data converted: %zu\n", VAR_7);
   }
  }
 }
 return VAR_6;
}
