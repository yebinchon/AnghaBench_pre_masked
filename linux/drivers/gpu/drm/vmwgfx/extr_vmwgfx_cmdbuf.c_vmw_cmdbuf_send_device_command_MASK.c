
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_cmdbuf_man {int lock; } ;
struct vmw_cmdbuf_header {int cb_context; TYPE_1__* cb_header; } ;
struct TYPE_2__ {size_t length; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (void*,void const*,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (struct vmw_cmdbuf_man*,size_t,int,struct vmw_cmdbuf_header**) ;
 int FUNC_7 (struct vmw_cmdbuf_header*) ;
 int FUNC_8 (struct vmw_cmdbuf_header*) ;

__attribute__((used)) static int FUNC_9(struct vmw_cmdbuf_man *VAR_3,
       const void *VAR_4,
       size_t VAR_5)
{
 struct vmw_cmdbuf_header *VAR_6;
 int VAR_7;
 void *VAR_8 = FUNC_6(VAR_3, VAR_5, 0, &VAR_6);

 if (FUNC_1(VAR_8))
  return FUNC_2(VAR_8);

 FUNC_3(VAR_8, VAR_4, VAR_5);
 VAR_6->cb_header->length = VAR_5;
 VAR_6->cb_context = VAR_1;
 FUNC_4(&VAR_3->lock);
 VAR_7 = FUNC_8(VAR_6);
 FUNC_5(&VAR_3->lock);
 FUNC_7(VAR_6);

 if (VAR_7 != VAR_2) {
  FUNC_0("Device context command failed with status %d\n",
     VAR_7);
  return -VAR_0;
 }

 return 0;
}
