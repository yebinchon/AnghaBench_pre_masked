
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t exttype; size_t devtype; } ;
struct wiimote_data {TYPE_1__ state; } ;
struct wiimod_ops {int (* in_accel ) (struct wiimote_data*,size_t const*) ;} ;
typedef size_t __u8 ;


 size_t const VAR_0 ;
 int FUNC_0 (struct wiimote_data*,size_t const*) ;
 int FUNC_1 (struct wiimote_data*,size_t const*) ;
 struct wiimod_ops** VAR_1 ;
 struct wiimod_ops** VAR_2 ;
 size_t** VAR_3 ;

__attribute__((used)) static void FUNC_2(struct wiimote_data *VAR_4, const __u8 *VAR_5)
{
 const __u8 *VAR_6, *VAR_7;
 const struct wiimod_ops *VAR_8;

 VAR_8 = VAR_1[VAR_4->state.exttype];
 if (VAR_8->in_accel) {
  VAR_8->in_accel(VAR_4, VAR_5);
  return;
 }

 VAR_7 = VAR_3[VAR_4->state.devtype];
 for (VAR_6 = VAR_7; *VAR_6 != VAR_0; ++VAR_6) {
  VAR_8 = VAR_2[*VAR_6];
  if (VAR_8->in_accel) {
   VAR_8->in_accel(VAR_4, VAR_5);
   break;
  }
 }
}
