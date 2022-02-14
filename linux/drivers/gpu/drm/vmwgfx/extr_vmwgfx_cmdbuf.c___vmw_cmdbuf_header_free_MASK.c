
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_cmdbuf_man {int headers; int alloc_queue; int lock; } ;
struct vmw_cmdbuf_header {int handle; scalar_t__ cb_header; int node; scalar_t__ inline_space; struct vmw_cmdbuf_man* man; } ;


 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vmw_cmdbuf_header*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct vmw_cmdbuf_header*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct vmw_cmdbuf_header *VAR_0)
{
 struct vmw_cmdbuf_man *VAR_1 = VAR_0->man;

 FUNC_3(&VAR_1->lock);

 if (VAR_0->inline_space) {
  FUNC_4(VAR_0);
  return;
 }

 FUNC_1(&VAR_0->node);
 FUNC_5(&VAR_1->alloc_queue);
 if (VAR_0->cb_header)
  FUNC_0(VAR_1->headers, VAR_0->cb_header,
         VAR_0->handle);
 FUNC_2(VAR_0);
}
