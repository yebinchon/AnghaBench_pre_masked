
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iio_buffer {int * access; } ;
struct TYPE_4__ {struct iio_buffer buffer; } ;
struct dmaengine_buffer {unsigned int align; TYPE_2__ queue; int max_size; struct dma_chan* chan; int active; } ;
struct dma_slave_caps {scalar_t__ dst_addr_widths; scalar_t__ src_addr_widths; } ;
struct dma_chan {TYPE_1__* device; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 struct iio_buffer* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct dma_chan*) ;
 int FUNC_3 (struct dma_chan*) ;
 unsigned int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct dma_chan*,struct dma_slave_caps*) ;
 struct dma_chan* FUNC_7 (struct device*,char const*) ;
 int FUNC_8 (TYPE_2__*,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (struct dmaengine_buffer*) ;
 struct dmaengine_buffer* FUNC_10 (int,int ) ;
 unsigned int FUNC_11 (unsigned int,unsigned int) ;

struct iio_buffer *FUNC_12(struct device *VAR_4,
 const char *VAR_5)
{
 struct dmaengine_buffer *VAR_6;
 unsigned int VAR_7, VAR_8, VAR_9;
 struct dma_slave_caps VAR_10;
 struct dma_chan *VAR_11;
 int VAR_12;

 VAR_6 = FUNC_10(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_11 = FUNC_7(VAR_4, VAR_5);
 if (FUNC_2(VAR_11)) {
  VAR_12 = FUNC_3(VAR_11);
  goto err_free;
 }

 VAR_12 = FUNC_6(VAR_11, &VAR_10);
 if (VAR_12 < 0)
  goto err_free;


 if (VAR_10.src_addr_widths)
  VAR_8 = FUNC_4(VAR_10.src_addr_widths);
 else
  VAR_8 = 1;
 if (VAR_10.dst_addr_widths)
  VAR_9 = FUNC_4(VAR_10.dst_addr_widths);
 else
  VAR_9 = 1;
 VAR_7 = FUNC_11(VAR_8, VAR_9);

 FUNC_1(&VAR_6->active);
 VAR_6->chan = VAR_11;
 VAR_6->align = VAR_7;
 VAR_6->max_size = FUNC_5(VAR_11->device->dev);

 FUNC_8(&VAR_6->queue, VAR_11->device->dev,
  &VAR_3);

 VAR_6->queue.buffer.access = &VAR_2;

 return &VAR_6->queue.buffer;

err_free:
 FUNC_9(VAR_6);
 return FUNC_0(VAR_12);
}
