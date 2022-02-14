
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vbva_record {int len_and_flags; } ;
struct vbva_buf_ctx {int buffer_overflow; struct vbva_record* record; int vbva; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

void FUNC_1(struct vbva_buf_ctx *VAR_1)
{
 struct vbva_record *VAR_2 = VAR_1->record;

 FUNC_0(!VAR_1->vbva || !VAR_2 ||
  !(VAR_2->len_and_flags & VAR_0));


 VAR_2->len_and_flags &= ~VAR_0;

 VAR_1->buffer_overflow = 0;
 VAR_1->record = ((void*)0);
}
