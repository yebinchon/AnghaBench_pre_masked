
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioatdma_device {struct ioatdma_chan** idx; } ;
struct ioatdma_chan {int dummy; } ;



__attribute__((used)) static inline struct ioatdma_chan *
FUNC_0(struct ioatdma_device *VAR_0, int VAR_1)
{
 return VAR_0->idx[VAR_1];
}
