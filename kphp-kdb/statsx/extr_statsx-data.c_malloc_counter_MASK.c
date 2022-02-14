
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter {long long counter_id; int created_at; int last_month_unique_visitors; int long_unique_visitors; int last_week_unique_visitors; int valid_until; int type; struct counter* prev; int timezone; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct counter*,struct counter*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (long long) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int VAR_9 ;
 struct counter* FUNC_4 (int) ;

__attribute__((used)) static struct counter *FUNC_5 (struct counter *VAR_10, long long VAR_11) {
  if (VAR_9 >= 4) {
    FUNC_1 (VAR_7, "Allocating new counter\n");
  }
  struct counter *VAR_12 = FUNC_4 (sizeof (struct counter));
  if (!VAR_12) return VAR_12;
  VAR_8++;
  VAR_12->counter_id = VAR_11;
  VAR_12->prev = 0;
  VAR_12->timezone = VAR_4;
  if (VAR_10) {
    FUNC_0 (VAR_12, VAR_10);
  }
  if (VAR_2) {
    VAR_12->created_at = VAR_6 - (VAR_6 + FUNC_3 (VAR_12->timezone)) % 86400;
  } else {
    VAR_12->created_at = VAR_6;
  }
  VAR_12->last_month_unique_visitors = -1;
  VAR_12->long_unique_visitors = -1;
  VAR_12->last_week_unique_visitors = -1;
  if (VAR_1) {
    VAR_12->valid_until = VAR_6 - (VAR_6 + FUNC_3 (VAR_12->timezone)) % 86400 + 86400;
  } else {
    VAR_12->valid_until = 0x7fffffff;
  }
  if (VAR_3) {
    VAR_12->created_at = VAR_5;
  }
  VAR_12->prev = VAR_10;
  if (!VAR_10 || VAR_0) {
    VAR_12->type = FUNC_2 (VAR_11);
  }
  if (VAR_9 >= 4) {
    FUNC_1 (VAR_7, "New counter allocated\n");
  }
  return VAR_12;
}
