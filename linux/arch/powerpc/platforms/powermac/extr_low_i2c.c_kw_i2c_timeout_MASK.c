
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_3__ {scalar_t__ expires; } ;
struct pmac_i2c_host_kw {scalar_t__ state; int lock; TYPE_1__ timeout_timer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 struct pmac_i2c_host_kw* FUNC_1 (int ,struct timer_list*,int ) ;
 struct pmac_i2c_host_kw* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct pmac_i2c_host_kw*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_6)
{
 struct pmac_i2c_host_kw *VAR_7 = FUNC_1(VAR_7, VAR_6, VAR_5);
 unsigned long VAR_8;

 FUNC_4(&VAR_7->lock, VAR_8);





 if (FUNC_6(&VAR_7->timeout_timer))
  goto skip;

 FUNC_2(VAR_7, FUNC_3(VAR_3));
 if (VAR_7->state != VAR_4) {
  VAR_7->timeout_timer.expires = VAR_2 + VAR_0;
  FUNC_0(&VAR_7->timeout_timer);
 }
 skip:
 FUNC_5(&VAR_7->lock, VAR_8);
}
