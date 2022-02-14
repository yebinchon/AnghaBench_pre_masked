
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct mock_engine {int hw_lock; int hw_delay; } ;
struct TYPE_2__ {scalar_t__ delay; } ;
struct i915_request {TYPE_1__ mock; } ;


 int FUNC_0 (struct i915_request*) ;
 struct mock_engine* VAR_0 ;
 struct i915_request* FUNC_1 (struct mock_engine*) ;
 struct mock_engine* FUNC_2 (int ,struct timer_list*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_3)
{
 struct mock_engine *VAR_4 = FUNC_2(VAR_4, VAR_3, VAR_1);
 struct i915_request *VAR_5;
 unsigned long VAR_6;

 FUNC_4(&VAR_4->hw_lock, VAR_6);


 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  FUNC_0(VAR_5);





 while ((VAR_5 = FUNC_1(VAR_4))) {
  if (VAR_5->mock.delay) {
   FUNC_3(&VAR_4->hw_delay,
      VAR_2 + VAR_5->mock.delay);
   break;
  }

  FUNC_0(VAR_5);
 }

 FUNC_5(&VAR_4->hw_lock, VAR_6);
}
