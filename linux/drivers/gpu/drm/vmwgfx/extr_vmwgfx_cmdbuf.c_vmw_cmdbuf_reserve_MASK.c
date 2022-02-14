
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_cmdbuf_man {int dummy; } ;
struct vmw_cmdbuf_header {size_t size; size_t reserved; void* cmd; TYPE_1__* cb_header; } ;
struct TYPE_2__ {int dxContext; int flags; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (struct vmw_cmdbuf_man*,size_t,int,int) ;

void *FUNC_2(struct vmw_cmdbuf_man *VAR_3, size_t VAR_4,
    int VAR_5, bool VAR_6,
    struct vmw_cmdbuf_header *VAR_7)
{
 if (!VAR_7)
  return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);

 if (VAR_4 > VAR_7->size)
  return FUNC_0(-VAR_0);

 if (VAR_5 != VAR_1) {
  VAR_7->cb_header->flags |= VAR_2;
  VAR_7->cb_header->dxContext = VAR_5;
 }

 VAR_7->reserved = VAR_4;
 return VAR_7->cmd;
}
