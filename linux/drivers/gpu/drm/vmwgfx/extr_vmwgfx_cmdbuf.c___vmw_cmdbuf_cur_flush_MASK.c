
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_cmdbuf_man {scalar_t__ cur_pos; struct vmw_cmdbuf_header* cur; int lock; int cur_mutex; } ;
struct vmw_cmdbuf_header {TYPE_1__* cb_header; } ;
struct TYPE_2__ {scalar_t__ length; } ;


 int VAR_0 ;
 int FUNC_0 (struct vmw_cmdbuf_header*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct vmw_cmdbuf_man*,struct vmw_cmdbuf_header*,int ) ;

__attribute__((used)) static void FUNC_5(struct vmw_cmdbuf_man *VAR_1)
{
 struct vmw_cmdbuf_header *VAR_2 = VAR_1->cur;

 FUNC_1(&VAR_1->cur_mutex);

 if (!VAR_2)
  return;

 FUNC_2(&VAR_1->lock);
 if (VAR_1->cur_pos == 0) {
  FUNC_0(VAR_2);
  goto out_unlock;
 }

 VAR_1->cur->cb_header->length = VAR_1->cur_pos;
 FUNC_4(VAR_1, VAR_1->cur, VAR_0);
out_unlock:
 FUNC_3(&VAR_1->lock);
 VAR_1->cur = ((void*)0);
 VAR_1->cur_pos = 0;
}
