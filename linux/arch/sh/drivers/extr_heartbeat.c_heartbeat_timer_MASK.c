
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct heartbeat_data {int flags; int nr_bits; int timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 struct heartbeat_data* FUNC_0 (int ,struct timer_list*,int ) ;
 struct heartbeat_data* VAR_3 ;
 int FUNC_1 (struct heartbeat_data*,unsigned int,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_6)
{
 struct heartbeat_data *VAR_7 = FUNC_0(VAR_7, VAR_6, VAR_5);
 static unsigned VAR_8 = 0, VAR_9 = 1;

 FUNC_1(VAR_7, VAR_8, VAR_7->flags & VAR_1);

 VAR_8 += VAR_9;
 if ((VAR_8 == 0) || (VAR_8 == (VAR_7->nr_bits)-1))
  VAR_9 = -VAR_9;

 FUNC_2(&VAR_7->timer, VAR_4 + (110 - ((300 << VAR_0) /
   ((VAR_2[0] / 5) + (3 << VAR_0)))));
}
