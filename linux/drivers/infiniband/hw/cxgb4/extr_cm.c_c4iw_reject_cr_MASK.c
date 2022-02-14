
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iw_cm_id {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; int mutex; int history; } ;
struct c4iw_ep {TYPE_1__ com; int hwtid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct c4iw_ep*,int,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,struct c4iw_ep*,int ) ;
 int FUNC_5 (struct c4iw_ep*,void const*,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct c4iw_ep*) ;
 struct c4iw_ep* FUNC_8 (struct iw_cm_id*) ;

int FUNC_9(struct iw_cm_id *VAR_5, const void *VAR_6, u8 VAR_7)
{
 int VAR_8;
 struct c4iw_ep *VAR_9 = FUNC_8(VAR_5);

 FUNC_4("ep %p tid %u\n", VAR_9, VAR_9->hwtid);

 FUNC_2(&VAR_9->com.mutex);
 if (VAR_9->com.state != VAR_2) {
  FUNC_3(&VAR_9->com.mutex);
  FUNC_1(&VAR_9->com);
  return -VAR_0;
 }
 FUNC_6(VAR_3, &VAR_9->com.history);
 if (VAR_4 == 0)
  VAR_8 = 1;
 else
  VAR_8 = FUNC_5(VAR_9, VAR_6, VAR_7);
 FUNC_3(&VAR_9->com.mutex);

 FUNC_7(VAR_9);
 FUNC_0(VAR_9, VAR_8 != 0, VAR_1);
 FUNC_1(&VAR_9->com);
 return 0;
}
