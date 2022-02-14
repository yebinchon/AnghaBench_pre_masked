
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ioatdma_chan {struct ioat_ring_ent** ring; } ;
struct ioat_ring_ent {int dummy; } ;


 int FUNC_0 (struct ioatdma_chan*) ;

__attribute__((used)) static inline struct ioat_ring_ent *
FUNC_1(struct ioatdma_chan *VAR_0, u16 VAR_1)
{
 return VAR_0->ring[VAR_1 & (FUNC_0(VAR_0) - 1)];
}
