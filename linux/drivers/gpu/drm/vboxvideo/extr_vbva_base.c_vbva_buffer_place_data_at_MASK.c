
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void const u8 ;
typedef size_t u32 ;
struct vbva_buffer {size_t data_len; void const* data; } ;
struct vbva_buf_ctx {struct vbva_buffer* vbva; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (void const*,void const*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct vbva_buf_ctx *VAR_0,
          const void *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct vbva_buffer *VAR_4 = VAR_0->vbva;
 u32 VAR_5 = VAR_4->data_len - VAR_3;
 u8 *VAR_6 = &VAR_4->data[VAR_3];
 s32 VAR_7 = VAR_2 - VAR_5;

 if (VAR_7 <= 0) {

  FUNC_0(VAR_6, VAR_1, VAR_2);
 } else {

  FUNC_0(VAR_6, VAR_1, VAR_5);
  FUNC_0(&VAR_4->data[0], (u8 *)VAR_1 + VAR_5, VAR_7);
 }
}
