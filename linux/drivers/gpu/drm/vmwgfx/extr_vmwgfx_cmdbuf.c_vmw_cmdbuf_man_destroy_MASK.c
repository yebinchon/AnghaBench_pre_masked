
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_cmdbuf_man {int error_mutex; int space_mutex; int cur_mutex; int headers; int dheaders; int work; TYPE_1__* dev_priv; int has_pool; } ;
struct TYPE_2__ {int error_waiters; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct vmw_cmdbuf_man*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct vmw_cmdbuf_man*,int,int) ;
 scalar_t__ FUNC_7 (struct vmw_cmdbuf_man*,int ,int) ;
 int FUNC_8 (TYPE_1__*,int ,int *) ;

void FUNC_9(struct vmw_cmdbuf_man *VAR_2)
{
 FUNC_1(VAR_2->has_pool);
 (void) FUNC_6(VAR_2, 0, 10*VAR_0);

 if (FUNC_7(VAR_2, 0, 0))
  FUNC_0("Failed stopping command buffer contexts.\n");

 FUNC_8(VAR_2->dev_priv, VAR_1,
      &VAR_2->dev_priv->error_waiters);
 (void) FUNC_2(&VAR_2->work);
 FUNC_3(VAR_2->dheaders);
 FUNC_3(VAR_2->headers);
 FUNC_5(&VAR_2->cur_mutex);
 FUNC_5(&VAR_2->space_mutex);
 FUNC_5(&VAR_2->error_mutex);
 FUNC_4(VAR_2);
}
