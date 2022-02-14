
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user {int active_ads; } ;
struct TYPE_2__ {double expected_gain; } ;


 double VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct user** VAR_5 ;
 int FUNC_0 (struct user*,int) ;

int FUNC_1 (int VAR_6, int VAR_7) {
  if (VAR_6 < 0 || VAR_6 >= VAR_4 || VAR_7 <= 0 || VAR_7 >= VAR_1) {
    return 0;
  }

  struct user *VAR_8 = VAR_5[VAR_6];
  if (!VAR_8 || !VAR_8->active_ads) {
    return 0;
  }

  FUNC_0 (VAR_8, VAR_7);
  if (VAR_3 < VAR_7) {
    return 0;
  }

  return (int) (VAR_2[1].expected_gain * VAR_0 + 0.5);
}
