
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vbva_buffer {int partial_write_tresh; scalar_t__ data_len; } ;
struct vbva_buf_ctx {struct vbva_buffer* vbva; scalar_t__ buffer_length; } ;
struct gen_pool {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct vbva_buffer*,int ,int) ;
 int FUNC_1 (struct vbva_buf_ctx*,struct gen_pool*,int ) ;
 int FUNC_2 (struct vbva_buf_ctx*,struct gen_pool*,int ,int) ;

bool FUNC_3(struct vbva_buf_ctx *VAR_0, struct gen_pool *VAR_1,
   struct vbva_buffer *VAR_2, s32 VAR_3)
{
 bool VAR_4 = 0;

 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->partial_write_tresh = 256;
 VAR_2->data_len = VAR_0->buffer_length - sizeof(struct vbva_buffer);
 VAR_0->vbva = VAR_2;

 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_3, 1);
 if (!VAR_4)
  FUNC_1(VAR_0, VAR_1, VAR_3);

 return VAR_4;
}
