
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vbva_buffer {scalar_t__ data_offset; scalar_t__ free_offset; scalar_t__ data_len; } ;
typedef scalar_t__ s32 ;



__attribute__((used)) static u32 FUNC_0(const struct vbva_buffer *VAR_0)
{
 s32 VAR_1 = VAR_0->data_offset - VAR_0->free_offset;

 return VAR_1 > 0 ? VAR_1 : VAR_0->data_len + VAR_1;
}
