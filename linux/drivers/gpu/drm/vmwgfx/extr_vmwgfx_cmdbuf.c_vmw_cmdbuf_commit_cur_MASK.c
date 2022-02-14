
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_cmdbuf_man {size_t cur_pos; int cur_mutex; struct vmw_cmdbuf_header* cur; } ;
struct vmw_cmdbuf_header {size_t reserved; TYPE_1__* cb_header; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct vmw_cmdbuf_man*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vmw_cmdbuf_man*) ;

__attribute__((used)) static void FUNC_4(struct vmw_cmdbuf_man *VAR_1,
      size_t VAR_2, bool VAR_3)
{
 struct vmw_cmdbuf_header *VAR_4 = VAR_1->cur;

 FUNC_2(&VAR_1->cur_mutex);

 FUNC_0(VAR_2 > VAR_4->reserved);
 VAR_1->cur_pos += VAR_2;
 if (!VAR_2)
  VAR_4->cb_header->flags &= ~VAR_0;
 if (VAR_3)
  FUNC_1(VAR_1);
 FUNC_3(VAR_1);
}
