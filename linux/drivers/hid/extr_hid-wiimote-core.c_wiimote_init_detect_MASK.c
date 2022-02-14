
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int lock; int devtype; } ;
struct wiimote_data {TYPE_1__ state; int timer; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wiimote_data*) ;
 int FUNC_4 (struct wiimote_data*) ;
 int FUNC_5 (struct wiimote_data*,int *) ;
 int FUNC_6 (struct wiimote_data*) ;
 int FUNC_7 (struct wiimote_data*,int ,int ) ;
 int FUNC_8 (struct wiimote_data*) ;
 int FUNC_9 (struct wiimote_data*,int ) ;
 int FUNC_10 (struct wiimote_data*) ;

__attribute__((used)) static void FUNC_11(struct wiimote_data *VAR_8)
{
 __u8 VAR_9 = VAR_2, VAR_10[6];
 bool VAR_11;
 int VAR_12;

 FUNC_3(VAR_8);

 FUNC_1(&VAR_8->state.lock);
 VAR_8->state.devtype = VAR_1;
 FUNC_7(VAR_8, VAR_6, 0);
 FUNC_10(VAR_8);
 FUNC_2(&VAR_8->state.lock);

 VAR_12 = FUNC_8(VAR_8);
 if (VAR_12)
  goto out_release;

 FUNC_1(&VAR_8->state.lock);
 VAR_11 = VAR_8->state.flags & VAR_4;
 FUNC_2(&VAR_8->state.lock);

 if (!VAR_11)
  goto out_release;

 FUNC_4(VAR_8);
 VAR_9 = FUNC_5(VAR_8, VAR_10);

out_release:
 FUNC_6(VAR_8);
 FUNC_9(VAR_8, VAR_9);


 FUNC_1(&VAR_8->state.lock);
 if (!(VAR_8->state.flags & VAR_3) &&
     !(VAR_8->state.flags & VAR_5))
  FUNC_0(&VAR_8->timer, VAR_7 + VAR_0 * 4);
 FUNC_2(&VAR_8->state.lock);
}
