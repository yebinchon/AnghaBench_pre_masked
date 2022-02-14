
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ioatdma_chan {int alloc_order; } ;



__attribute__((used)) static inline u32 FUNC_0(struct ioatdma_chan *VAR_0)
{
 return 1 << VAR_0->alloc_order;
}
