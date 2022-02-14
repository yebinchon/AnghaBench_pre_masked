
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct vbva_buf_ctx {void* buffer_length; void* buffer_offset; } ;



void FUNC_0(struct vbva_buf_ctx *VAR_0,
          u32 VAR_1, u32 VAR_2)
{
 VAR_0->buffer_offset = VAR_1;
 VAR_0->buffer_length = VAR_2;
}
