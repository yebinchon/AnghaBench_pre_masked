
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_timezone64 {long long cnt_id; } ;
struct lev_timezone {long long cnt_id; } ;
struct counter {char timezone; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__,int,long long) ;
 struct counter* FUNC_1 (long long,int ) ;
 scalar_t__ VAR_2 ;

int FUNC_2 (long long VAR_3, int VAR_4, int VAR_5) {
  if (VAR_2) {
    return 0;
  }
  struct counter *VAR_6 = FUNC_1 (VAR_3, 0);
  VAR_6->timezone = (char)VAR_4;
  if (!VAR_5) {
    if (VAR_3 == (int)VAR_3) {
      struct lev_timezone *VAR_7 = FUNC_0 (VAR_0 + (char)VAR_4, sizeof (struct lev_timezone), VAR_3);
      VAR_7->cnt_id = VAR_3;
    } else {
      struct lev_timezone64 *VAR_8 = FUNC_0 (VAR_1 + (char)VAR_4, sizeof (struct lev_timezone64), VAR_3);
      VAR_8->cnt_id = VAR_3;
    }
  }
  return VAR_4;
}
