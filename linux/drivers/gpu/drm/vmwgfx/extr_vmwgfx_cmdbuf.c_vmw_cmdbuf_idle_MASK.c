
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vmw_cmdbuf_man {TYPE_1__* dev_priv; int idle_queue; } ;
struct TYPE_3__ {int cmdbuf_waiters; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vmw_cmdbuf_man*,int) ;
 int FUNC_1 (struct vmw_cmdbuf_man*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int *) ;
 int FUNC_3 (TYPE_1__*,int ,int *) ;
 int FUNC_4 (int ,int ,unsigned long) ;
 int FUNC_5 (int ,int ,unsigned long) ;

int FUNC_6(struct vmw_cmdbuf_man *VAR_2, bool VAR_3,
      unsigned long VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3);
 FUNC_2(VAR_2->dev_priv,
          VAR_1,
          &VAR_2->dev_priv->cmdbuf_waiters);

 if (VAR_3) {
  VAR_5 = FUNC_4
   (VAR_2->idle_queue, FUNC_1(VAR_2, 1),
    VAR_4);
 } else {
  VAR_5 = FUNC_5
   (VAR_2->idle_queue, FUNC_1(VAR_2, 1),
    VAR_4);
 }
 FUNC_3(VAR_2->dev_priv,
      VAR_1,
      &VAR_2->dev_priv->cmdbuf_waiters);
 if (VAR_5 == 0) {
  if (!FUNC_1(VAR_2, 1))
   VAR_5 = -VAR_0;
  else
   VAR_5 = 0;
 }
 if (VAR_5 > 0)
  VAR_5 = 0;

 return VAR_5;
}
