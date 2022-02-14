
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct timer_list {int dummy; } ;
struct skd_device {scalar_t__ state; scalar_t__ drive_state; int lock; int timer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct skd_device*,int ) ;
 struct skd_device* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (struct skd_device*) ;
 int FUNC_4 (struct skd_device*) ;
 struct skd_device* VAR_6 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_8)
{
 struct skd_device *VAR_9 = FUNC_1(VAR_9, VAR_8, VAR_7);
 unsigned long VAR_10;
 u32 VAR_11;

 if (VAR_9->state == VAR_3)



  return;

 FUNC_5(&VAR_9->lock, VAR_10);

 VAR_11 = FUNC_0(VAR_9, VAR_1);
 VAR_11 &= VAR_0;
 if (VAR_11 != VAR_9->drive_state)
  FUNC_3(VAR_9);

 if (VAR_9->state != VAR_4)
  FUNC_4(VAR_9);

 FUNC_2(&VAR_9->timer, (VAR_5 + VAR_2));

 FUNC_6(&VAR_9->lock, VAR_10);
}
