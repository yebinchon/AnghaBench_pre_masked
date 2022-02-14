
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; size_t exttype; size_t devtype; } ;
struct wiimote_data {TYPE_1__ state; int hdev; } ;
struct wiimod_ops {int (* in_ext ) (struct wiimote_data*,int const*) ;int (* in_mp ) (struct wiimote_data*,int const*) ;} ;
typedef int __u8 ;


 int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wiimote_data*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int const*,int const*,size_t) ;
 int FUNC_3 (struct wiimote_data*,int const*) ;
 int FUNC_4 (struct wiimote_data*,int const*) ;
 int FUNC_5 (struct wiimote_data*,int const*) ;
 int FUNC_6 (struct wiimote_data*,int const*) ;
 int FUNC_7 (struct wiimote_data*,int const*) ;
 int FUNC_8 (struct wiimote_data*,int const*) ;
 scalar_t__ FUNC_9 (struct wiimod_ops const*,size_t) ;
 struct wiimod_ops** VAR_4 ;
 struct wiimod_ops VAR_5 ;
 struct wiimod_ops** VAR_6 ;
 int** VAR_7 ;

__attribute__((used)) static void FUNC_10(struct wiimote_data *VAR_8, const __u8 *VAR_9,
   size_t VAR_10)
{
 static const __u8 VAR_11[21] = { 0xff, 0xff, 0xff, 0xff,
       0xff, 0xff, 0xff, 0xff,
       0xff, 0xff, 0xff, 0xff,
       0xff, 0xff, 0xff, 0xff,
       0xff, 0xff, 0xff, 0xff,
       0xff };
 const __u8 *VAR_12, *VAR_13;
 const struct wiimod_ops *VAR_14;
 bool VAR_15;

 if (VAR_10 > 21)
  VAR_10 = 21;
 if (VAR_10 < 6 || !FUNC_2(VAR_9, VAR_11, VAR_10))
  return;


 if (VAR_8->state.flags & VAR_2) {

  if (VAR_9[5] & 0x01)
   return;

  if (VAR_9[4] & 0x01) {
   if (!(VAR_8->state.flags & VAR_3)) {
    FUNC_1(VAR_8->hdev, "MP hotplug: 1\n");
    VAR_8->state.flags |= VAR_3;
    FUNC_0(VAR_8);
   }
  } else {
   if (VAR_8->state.flags & VAR_3) {
    FUNC_1(VAR_8->hdev, "MP hotplug: 0\n");
    VAR_8->state.flags &= ~VAR_3;
    VAR_8->state.flags &= ~VAR_1;
    FUNC_0(VAR_8);
   }
  }


  VAR_15 = VAR_9[5] & 0x02;
 } else {
  VAR_15 = 0;
 }


 if (!(VAR_8->state.flags & VAR_1) && !VAR_15)
  return;


 VAR_14 = VAR_4[VAR_8->state.exttype];
 if (VAR_15 && VAR_14->in_mp) {
  VAR_14->in_mp(VAR_8, VAR_9);
  return;
 } else if (!VAR_15 && FUNC_9(VAR_14, VAR_10)) {
  VAR_14->in_ext(VAR_8, VAR_9);
  return;
 }


 VAR_14 = &VAR_5;
 if (VAR_15 && VAR_14->in_mp) {
  VAR_14->in_mp(VAR_8, VAR_9);
  return;
 } else if (!VAR_15 && FUNC_9(VAR_14, VAR_10)) {
  VAR_14->in_ext(VAR_8, VAR_9);
  return;
 }


 VAR_13 = VAR_7[VAR_8->state.devtype];
 for (VAR_12 = VAR_13; *VAR_12 != VAR_0; ++VAR_12) {
  VAR_14 = VAR_6[*VAR_12];
  if (VAR_15 && VAR_14->in_mp) {
   VAR_14->in_mp(VAR_8, VAR_9);
   return;
  } else if (!VAR_15 && FUNC_9(VAR_14, VAR_10)) {
   VAR_14->in_ext(VAR_8, VAR_9);
   return;
  }
 }
}
