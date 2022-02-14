
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct scatterlist {int dummy; } ;
struct TYPE_3__ {int max_burst_size; } ;
struct atmel_aes_dev {int resume; TYPE_1__ caps; TYPE_2__* ctx; } ;
typedef enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;
typedef int atmel_aes_fn_t ;
struct TYPE_4__ {int block_size; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct atmel_aes_dev*,int) ;
 int FUNC_1 (struct atmel_aes_dev*,int,int ,int) ;
 int FUNC_2 (struct atmel_aes_dev*,int ) ;
 int FUNC_3 (struct atmel_aes_dev*,struct scatterlist*,struct scatterlist*,size_t) ;
 int FUNC_4 (struct atmel_aes_dev*) ;

__attribute__((used)) static int FUNC_5(struct atmel_aes_dev *VAR_7,
          struct scatterlist *VAR_8,
          struct scatterlist *VAR_9,
          size_t VAR_10,
          atmel_aes_fn_t VAR_11)
{
 enum dma_slave_buswidth VAR_12;
 u32 VAR_13;
 int VAR_14;

 switch (VAR_7->ctx->block_size) {
 case 128:
  VAR_12 = VAR_2;
  VAR_13 = 1;
  break;

 case 131:
  VAR_12 = VAR_3;
  VAR_13 = 1;
  break;

 case 130:
 case 129:
  VAR_12 = VAR_4;
  VAR_13 = 1;
  break;

 case 132:
  VAR_12 = VAR_4;
  VAR_13 = VAR_7->caps.max_burst_size;
  break;

 default:
  VAR_14 = -VAR_6;
  goto exit;
 }

 VAR_14 = FUNC_3(VAR_7, VAR_8, VAR_9, VAR_10);
 if (VAR_14)
  goto exit;

 VAR_7->resume = VAR_11;


 VAR_14 = FUNC_1(VAR_7, VAR_12, VAR_0,
        VAR_13);
 if (VAR_14)
  goto unmap;


 VAR_14 = FUNC_1(VAR_7, VAR_12, VAR_1,
        VAR_13);
 if (VAR_14)
  goto output_transfer_stop;

 return -VAR_5;

output_transfer_stop:
 FUNC_2(VAR_7, VAR_0);
unmap:
 FUNC_4(VAR_7);
exit:
 return FUNC_0(VAR_7, VAR_14);
}
