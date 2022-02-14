
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_delete_counter64 {long long cnt_id; } ;
struct lev_delete_counter {long long cnt_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int,long long) ;
 int FUNC_1 (long long,int) ;
 int* VAR_2 ;
 int FUNC_2 (long long) ;
 int VAR_3 ;

int FUNC_3 (long long VAR_4, int VAR_5) {
  if (!VAR_5) {
    if (VAR_4 == (int)VAR_4) {
      struct lev_delete_counter *VAR_6 = FUNC_0 (VAR_0, sizeof (struct lev_delete_counter), VAR_4);
      VAR_6->cnt_id = VAR_4;
    } else {
      struct lev_delete_counter64 *VAR_7 = FUNC_0 (VAR_1, sizeof (struct lev_delete_counter64), VAR_4);
      VAR_7->cnt_id = VAR_4;
    }
  }
  FUNC_1 (VAR_4, -1);
  int VAR_8 = FUNC_2 (VAR_4);
  if (VAR_8 < VAR_3) {
    VAR_2[VAR_8] = 1;
  }
  return 1;
}
