
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cmd_err; int lock; } ;
struct wiimote_data {TYPE_1__ state; } ;
typedef int __u8 ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct wiimote_data*,int ,int ) ;
 int FUNC_3 (struct wiimote_data*) ;
 int FUNC_4 (struct wiimote_data*,int ,int const*,int ) ;

int FUNC_5(struct wiimote_data *VAR_2, __u32 VAR_3,
      const __u8 *VAR_4, __u8 VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;

 FUNC_0(&VAR_2->state.lock, VAR_6);
 FUNC_2(VAR_2, VAR_1, 0);
 FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_1(&VAR_2->state.lock, VAR_6);

 VAR_7 = FUNC_3(VAR_2);
 if (!VAR_7 && VAR_2->state.cmd_err)
  VAR_7 = -VAR_0;

 return VAR_7;
}
