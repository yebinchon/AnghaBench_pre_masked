
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oneshot_trig_data {int dummy; } ;
struct led_classdev {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct oneshot_trig_data* FUNC_0 (int,int ) ;
 int FUNC_1 (struct led_classdev*,struct oneshot_trig_data*) ;
 int FUNC_2 (struct led_classdev*) ;

__attribute__((used)) static int FUNC_3(struct led_classdev *VAR_3)
{
 struct oneshot_trig_data *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_1(VAR_3, VAR_4);

 if (VAR_3->flags & VAR_2) {
  FUNC_2(VAR_3);




  VAR_3->flags &= ~VAR_2;
 }

 return 0;
}
