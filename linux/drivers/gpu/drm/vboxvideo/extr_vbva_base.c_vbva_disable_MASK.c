
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vbva_buf_ctx {int buffer_overflow; int * vbva; int * record; } ;
struct gen_pool {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct vbva_buf_ctx*,struct gen_pool*,int ,int) ;

void FUNC_1(struct vbva_buf_ctx *VAR_0, struct gen_pool *VAR_1,
    s32 VAR_2)
{
 VAR_0->buffer_overflow = 0;
 VAR_0->record = ((void*)0);
 VAR_0->vbva = ((void*)0);

 FUNC_0(VAR_0, VAR_1, VAR_2, 0);
}
