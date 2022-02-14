
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_cmdbuf_man {int lock; } ;
struct vmw_cmdbuf_header {scalar_t__ inline_space; struct vmw_cmdbuf_man* man; } ;


 int FUNC_0 (struct vmw_cmdbuf_header*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vmw_cmdbuf_header*) ;

void FUNC_4(struct vmw_cmdbuf_header *VAR_0)
{
 struct vmw_cmdbuf_man *VAR_1 = VAR_0->man;


 if (VAR_0->inline_space) {
  FUNC_3(VAR_0);
  return;
 }
 FUNC_1(&VAR_1->lock);
 FUNC_0(VAR_0);
 FUNC_2(&VAR_1->lock);
}
