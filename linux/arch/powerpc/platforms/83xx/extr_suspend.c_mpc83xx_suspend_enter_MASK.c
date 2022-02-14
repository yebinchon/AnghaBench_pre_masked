
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int suspend_state_t ;
struct TYPE_2__ {int config1; int mask; int config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 () ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int) ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static int FUNC_7(suspend_state_t VAR_12)
{
 int VAR_13 = -VAR_0;





 if (VAR_11) {
  if (VAR_9 != (VAR_7 ? 3 : 2))
   goto out;

  FUNC_6(&VAR_10->config1,
           FUNC_1(&VAR_10->config1) | VAR_1);
 }






 FUNC_6(&VAR_10->config, VAR_4 | VAR_3);






 if (VAR_7) {
  FUNC_5();

  FUNC_6(&VAR_10->mask, VAR_5);

  FUNC_6(&VAR_10->config1,
           FUNC_1(&VAR_10->config1) | VAR_2);

  FUNC_0();

  FUNC_3(VAR_8);

  FUNC_6(&VAR_10->config1,
           FUNC_1(&VAR_10->config1) & ~VAR_2);

  FUNC_6(&VAR_10->mask, VAR_6);

  FUNC_4();
 } else {
  FUNC_6(&VAR_10->mask, VAR_6);

  FUNC_2();
 }

 VAR_13 = 0;

out:
 FUNC_6(&VAR_10->config1,
          FUNC_1(&VAR_10->config1) & ~VAR_1);

 return VAR_13;
}
