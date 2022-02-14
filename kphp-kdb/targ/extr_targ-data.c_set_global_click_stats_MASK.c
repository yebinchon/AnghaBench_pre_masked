
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lev_targ_global_click_stats {int len; TYPE_1__* stats; } ;
struct TYPE_4__ {int g; } ;
struct TYPE_3__ {long long views; long long clicks; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_2 (struct lev_targ_global_click_stats *VAR_2) {
  int VAR_3, VAR_4 = VAR_2->len;
  FUNC_0 (VAR_4 == VAR_1);
  long long VAR_5 = 0, VAR_6 = 0;
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
    FUNC_0 (!(VAR_2->stats[VAR_3].views < 0 || VAR_2->stats[VAR_3].clicks < 0 || VAR_2->stats[VAR_3].clicks > VAR_2->stats[VAR_3].views || VAR_2->stats[VAR_3].views > (long long) 1e15));
    if (VAR_3 > 0) {
      VAR_5 += VAR_2->stats[VAR_3].views;
      VAR_6 += VAR_2->stats[VAR_3].clicks;
      FUNC_0 (VAR_5 <= (long long) 1e15);
    }
  }
  FUNC_0 (VAR_5 == VAR_2->stats[0].views && VAR_6 == VAR_2->stats[0].clicks);
  FUNC_1 (VAR_0.g, VAR_2->stats, 16 * VAR_1);
  return 1;
}
