
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_msgqueue {int dummy; } ;



__attribute__((used)) static void
FUNC_0(struct nvkm_msgqueue *VAR_0, void *VAR_1)
{
 struct {
  u32 freq_hz;
  u32 falc_trace_size;
  u32 falc_trace_dma_base;
  u32 falc_trace_dma_idx;
  bool secure_mode;
 } *VAR_2 = VAR_1;

 VAR_2->secure_mode = 0;
}
