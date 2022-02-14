
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioatdma_device {int version; } ;
struct dma_device {int dummy; } ;
struct dma_chan {struct dma_device* device; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int,int) ;
 struct ioatdma_device* FUNC_1 (struct dma_device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct dma_chan *VAR_0, char *VAR_1)
{
 struct dma_device *VAR_2 = VAR_0->device;
 struct ioatdma_device *VAR_3 = FUNC_1(VAR_2);

 return FUNC_0(VAR_1, "%d.%d\n",
         VAR_3->version >> 4, VAR_3->version & 0xf);
}
