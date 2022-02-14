
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_cmdbuf_man {int dummy; } ;
struct vmw_cmdbuf_header {void* cmd; TYPE_1__* cb_header; int list; struct vmw_cmdbuf_man* man; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (struct vmw_cmdbuf_header*) ;
 struct vmw_cmdbuf_header* FUNC_3 (int,int ) ;
 int FUNC_4 (struct vmw_cmdbuf_man*,struct vmw_cmdbuf_header*,size_t) ;
 int FUNC_5 (struct vmw_cmdbuf_man*,struct vmw_cmdbuf_header*,size_t,int) ;

void *FUNC_6(struct vmw_cmdbuf_man *VAR_4,
         size_t VAR_5, bool VAR_6,
         struct vmw_cmdbuf_header **VAR_7)
{
 struct vmw_cmdbuf_header *VAR_8;
 int VAR_9 = 0;

 *VAR_7 = ((void*)0);

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 if (VAR_5 <= VAR_3)
  VAR_9 = FUNC_4(VAR_4, VAR_8, VAR_5);
 else
  VAR_9 = FUNC_5(VAR_4, VAR_8, VAR_5, VAR_6);

 if (VAR_9) {
  FUNC_2(VAR_8);
  return FUNC_0(VAR_9);
 }

 VAR_8->man = VAR_4;
 FUNC_1(&VAR_8->list);
 VAR_8->cb_header->status = VAR_2;
 *VAR_7 = VAR_8;

 return VAR_8->cmd;
}
