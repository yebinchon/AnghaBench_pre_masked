
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct views_clicks_ll {long long views; long long clicks; } ;
struct lev_targ_global_click_stats {int stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lev_targ_global_click_stats* FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,struct views_clicks_ll*,int) ;
 int FUNC_3 (struct lev_targ_global_click_stats*) ;
 int VAR_2 ;

int FUNC_4 (int VAR_3, struct views_clicks_ll *VAR_4) {
  int VAR_5;
  FUNC_1 (VAR_2, "do_set_global_click_stats(%d)\n", VAR_3);
  if (VAR_3 != VAR_1) {
    return 0;
  }
  long long VAR_6 = 0, VAR_7 = 0;
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
    if (VAR_4[VAR_5].views < 0 || VAR_4[VAR_5].clicks < 0 || VAR_4[VAR_5].clicks > VAR_4[VAR_5].views || VAR_4[VAR_5].views > (long long) 1e15) {
      return 0;
    }
    if (VAR_5 > 0) {
      VAR_6 += VAR_4[VAR_5].views;
      VAR_7 += VAR_4[VAR_5].clicks;
      if (VAR_6 > (long long) 1e15) {
        return 0;
      }
    }
  }
  if (VAR_6 != VAR_4[0].views || VAR_7 != VAR_4[0].clicks) {
    return 0;
  }
  struct lev_targ_global_click_stats *VAR_8 = FUNC_0 (VAR_0, VAR_3 * 16 + 8, VAR_3);
  FUNC_2 (VAR_8->stats, VAR_4, VAR_3 * 16);
  return FUNC_3 (VAR_8);
}
