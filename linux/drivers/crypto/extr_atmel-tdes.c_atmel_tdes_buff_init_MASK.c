
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_tdes_dev {int buflen; void* buf_in; void* buf_out; void* dma_addr_in; int dev; void* dma_addr_out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,...) ;
 void* FUNC_2 (int ,void*,int,int ) ;
 scalar_t__ FUNC_3 (int ,void*) ;
 int FUNC_4 (int ,void*,int,int ) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static int FUNC_7(struct atmel_tdes_dev *VAR_7)
{
 int VAR_8 = -VAR_4;

 VAR_7->buf_in = (void *)FUNC_0(VAR_5, 0);
 VAR_7->buf_out = (void *)FUNC_0(VAR_5, 0);
 VAR_7->buflen = VAR_6;
 VAR_7->buflen &= ~(VAR_0 - 1);

 if (!VAR_7->buf_in || !VAR_7->buf_out) {
  FUNC_1(VAR_7->dev, "unable to alloc pages.\n");
  goto err_alloc;
 }


 VAR_7->dma_addr_in = FUNC_2(VAR_7->dev, VAR_7->buf_in,
     VAR_7->buflen, VAR_2);
 if (FUNC_3(VAR_7->dev, VAR_7->dma_addr_in)) {
  FUNC_1(VAR_7->dev, "dma %zd bytes error\n", VAR_7->buflen);
  VAR_8 = -VAR_3;
  goto err_map_in;
 }

 VAR_7->dma_addr_out = FUNC_2(VAR_7->dev, VAR_7->buf_out,
     VAR_7->buflen, VAR_1);
 if (FUNC_3(VAR_7->dev, VAR_7->dma_addr_out)) {
  FUNC_1(VAR_7->dev, "dma %zd bytes error\n", VAR_7->buflen);
  VAR_8 = -VAR_3;
  goto err_map_out;
 }

 return 0;

err_map_out:
 FUNC_4(VAR_7->dev, VAR_7->dma_addr_in, VAR_7->buflen,
  VAR_2);
err_map_in:
err_alloc:
 FUNC_5((unsigned long)VAR_7->buf_out);
 FUNC_5((unsigned long)VAR_7->buf_in);
 if (VAR_8)
  FUNC_6("error: %d\n", VAR_8);
 return VAR_8;
}
