
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad_user_view_triple {int ad_id; int uid; } ;



__attribute__((used)) static void FUNC_0 (struct ad_user_view_triple *VAR_0, long VAR_1) {
  long VAR_2, VAR_3;
  int VAR_4, VAR_5;
  struct ad_user_view_triple VAR_6;
  if (VAR_1 <= 0) {
    return;
  }
  VAR_2 = 0;
  VAR_3 = VAR_1;
  VAR_4 = VAR_0[VAR_1 >> 1].ad_id;
  VAR_5 = VAR_0[VAR_1 >> 1].uid;
  do {
    while (VAR_0[VAR_2].ad_id < VAR_4 || (VAR_0[VAR_2].ad_id == VAR_4 && VAR_0[VAR_2].uid < VAR_5)) {
      VAR_2++;
    }
    while (VAR_0[VAR_3].ad_id > VAR_4 || (VAR_0[VAR_3].ad_id == VAR_4 && VAR_0[VAR_3].uid > VAR_5)) {
      VAR_3--;
    }
    if (VAR_2 <= VAR_3) {
      VAR_6 = VAR_0[VAR_2];
      VAR_0[VAR_2++] = VAR_0[VAR_3];
      VAR_0[VAR_3--] = VAR_6;
    }
  } while (VAR_2 <= VAR_3);
  FUNC_0 (VAR_0, VAR_3);
  FUNC_0 (VAR_0 + VAR_2, VAR_1 - VAR_2);
}
