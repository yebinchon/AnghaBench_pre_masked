
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lev_start {int schema_id; int extra_bytes; int str; void* split_max; void* split_min; scalar_t__ split_mod; int type; } ;
struct TYPE_4__ {int schema_id; scalar_t__ split_mod; scalar_t__ split_min; scalar_t__ split_max; } ;
struct TYPE_3__ {int schema_id; scalar_t__ split_mod; scalar_t__ split_min; scalar_t__ split_max; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 int FUNC_3 (char*) ;
 struct lev_start* FUNC_4 (int) ;

void FUNC_5 (int VAR_8, char *VAR_9) {
  int VAR_10 = VAR_9 ? FUNC_3(VAR_9)+1 : 0;
  int VAR_11 = (VAR_10 + 3) & -4;
  if (VAR_10 == 1) { VAR_11 = VAR_10 = 0; }

  if (VAR_3) {
    if (VAR_2) {
      FUNC_0 (VAR_2->schema_id == VAR_8 && VAR_2->split_mod == VAR_6 && VAR_2->split_min == VAR_5 && VAR_2->split_max == VAR_4);
    }
    if (VAR_0) {
      FUNC_0 (VAR_0->schema_id == VAR_8 && VAR_0->split_mod == VAR_6 && VAR_0->split_min == VAR_5 && VAR_0->split_max == VAR_4);
    }
    return;
  }

  FUNC_1 (VAR_8, VAR_9);

  struct lev_start *VAR_12 = FUNC_4(sizeof(struct lev_start) - 4 + VAR_11);
  VAR_12->type = VAR_1;
  VAR_12->schema_id = VAR_8;
  VAR_12->extra_bytes = VAR_11;
  VAR_12->split_mod = VAR_6;
  VAR_12->split_min = VAR_7;
  VAR_12->split_max = VAR_7 + 1;
  if (VAR_10) {
    FUNC_2 (VAR_12->str, VAR_9, VAR_10);
  }
}
