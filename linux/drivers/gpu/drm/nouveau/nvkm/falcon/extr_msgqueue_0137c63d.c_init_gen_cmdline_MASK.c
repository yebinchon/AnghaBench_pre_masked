
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct nvkm_msgqueue {int dummy; } ;



__attribute__((used)) static void
FUNC_0(struct nvkm_msgqueue *VAR_0, void *VAR_1)
{
 struct {
  u32 reserved;
  u32 freq_hz;
  u32 trace_size;
  u32 trace_dma_base;
  u16 trace_dma_base1;
  u8 trace_dma_offset;
  u32 trace_dma_idx;
  bool secure_mode;
  bool raise_priv_sec;
  struct {
   u32 dma_base;
   u16 dma_base1;
   u8 dma_offset;
   u16 fb_size;
   u8 dma_idx;
  } gc6_ctx;
  u8 pad;
 } *VAR_2 = VAR_1;

 VAR_2->secure_mode = 1;
}
