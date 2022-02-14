
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user {int active_ads; } ;
struct TYPE_2__ {double expected_gain; } ;


 int VAR_0 ;
 double VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct user** VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct user*,int) ;
 int VAR_12 ;
 int VAR_13 ;

int FUNC_1 (int VAR_14, int VAR_15, int VAR_16, int VAR_17, int VAR_18) {
  if (VAR_14 < 0 || VAR_14 >= VAR_5 || VAR_15 <= 0 || VAR_15 >= VAR_2) {
    return 0;
  }

  struct user *VAR_19 = VAR_6[VAR_14];
  if (!VAR_19) {
    return 0;
  }

  if (!VAR_19->active_ads) {
    return 1;
  }

  VAR_12 = VAR_13;
  VAR_9 = 1;
  VAR_10 = 0;
  VAR_8 = 0;
  VAR_7 = (VAR_17 & 0xff) << VAR_0;
  VAR_11 = (VAR_18 & 0xff) << VAR_0;

  FUNC_0 (VAR_19, VAR_15);

  VAR_9 = 0;
  VAR_10 = 0;
  VAR_7 = (254 << VAR_0);
  VAR_11 = 0;

  if (VAR_4 < VAR_15) {
    return 1;
  }

  return VAR_16 > (int) (VAR_3[1].expected_gain * VAR_1 + 0.5);
}
