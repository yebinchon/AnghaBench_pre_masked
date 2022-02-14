
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct vbva_record {int len_and_flags; } ;
struct vbva_buf_ctx {struct vbva_record* record; TYPE_2__* vbva; scalar_t__ buffer_overflow; } ;
struct gen_pool {int dummy; } ;
struct TYPE_3__ {int host_events; } ;
struct TYPE_4__ {int record_free_index; int record_first_index; struct vbva_record* records; TYPE_1__ host_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct gen_pool*) ;

bool FUNC_2(struct vbva_buf_ctx *VAR_3,
         struct gen_pool *VAR_4)
{
 struct vbva_record *VAR_5;
 u32 VAR_6;

 if (!VAR_3->vbva ||
     !(VAR_3->vbva->host_flags.host_events & VAR_0))
  return 0;

 FUNC_0(VAR_3->buffer_overflow || VAR_3->record);

 VAR_6 = (VAR_3->vbva->record_free_index + 1) % VAR_2;


 if (VAR_6 == VAR_3->vbva->record_first_index)
  FUNC_1(VAR_4);


 if (VAR_6 == VAR_3->vbva->record_first_index)
  return 0;

 VAR_5 = &VAR_3->vbva->records[VAR_3->vbva->record_free_index];
 VAR_5->len_and_flags = VAR_1;
 VAR_3->vbva->record_free_index = VAR_6;

 VAR_3->record = VAR_5;

 return 1;
}
