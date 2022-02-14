
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vbva_record {int len_and_flags; } ;
struct vbva_buffer {scalar_t__ partial_write_tresh; scalar_t__ free_offset; scalar_t__ data_len; } ;
struct vbva_buf_ctx {int buffer_overflow; struct vbva_record* record; struct vbva_buffer* vbva; } ;
struct gen_pool {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct vbva_buffer*) ;
 int FUNC_2 (struct gen_pool*) ;
 int FUNC_3 (struct vbva_buf_ctx*,void const*,scalar_t__,scalar_t__) ;

bool FUNC_4(struct vbva_buf_ctx *VAR_1, struct gen_pool *VAR_2,
  const void *VAR_3, u32 VAR_4)
{
 struct vbva_record *VAR_5;
 struct vbva_buffer *VAR_6;
 u32 VAR_7;

 VAR_6 = VAR_1->vbva;
 VAR_5 = VAR_1->record;

 if (!VAR_6 || VAR_1->buffer_overflow ||
     !VAR_5 || !(VAR_5->len_and_flags & VAR_0))
  return 0;

 VAR_7 = FUNC_1(VAR_6);

 while (VAR_4 > 0) {
  u32 VAR_8 = VAR_4;

  if (VAR_8 >= VAR_7) {
   FUNC_2(VAR_2);
   VAR_7 = FUNC_1(VAR_6);
  }

  if (VAR_8 >= VAR_7) {
   if (FUNC_0(VAR_7 <= VAR_6->partial_write_tresh)) {
    VAR_1->buffer_overflow = 1;
    return 0;
   }
   VAR_8 = VAR_7 - VAR_6->partial_write_tresh;
  }

  FUNC_3(VAR_1, VAR_3, VAR_8,
       VAR_6->free_offset);

  VAR_6->free_offset = (VAR_6->free_offset + VAR_8) %
        VAR_6->data_len;
  VAR_5->len_and_flags += VAR_8;
  VAR_7 -= VAR_8;
  VAR_4 -= VAR_8;
  VAR_3 += VAR_8;
 }

 return 1;
}
