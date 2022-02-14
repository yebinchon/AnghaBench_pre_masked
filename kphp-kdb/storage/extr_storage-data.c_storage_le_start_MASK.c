
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ log_split_min; scalar_t__ log_split_max; scalar_t__ log_split_mod; unsigned char volume_id; unsigned char md5_mode; } ;
typedef TYPE_1__ volume_t ;
struct lev_start {scalar_t__ schema_id; int extra_bytes; scalar_t__ split_min; scalar_t__ split_max; scalar_t__ split_mod; unsigned char* str; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,unsigned char*,int) ;
 int FUNC_2 (int,char*,unsigned char) ;

int FUNC_3 (volume_t *VAR_1, struct lev_start *VAR_2) {
  if (VAR_2->schema_id != VAR_0) {
    return -1;
  }
  if (VAR_2->extra_bytes != 12) {
    return -2;
  }
  VAR_1->log_split_min = VAR_2->split_min;
  VAR_1->log_split_max = VAR_2->split_max;
  VAR_1->log_split_mod = VAR_2->split_mod;

  unsigned char VAR_3[12];
  FUNC_1 (&VAR_3[0], &VAR_2->str[0], 12);
  FUNC_1 (&VAR_1->volume_id, &VAR_3[0], 8);
  FUNC_1 (&VAR_1->md5_mode, &VAR_3[8], 4);
  FUNC_2 (3, "V->md5_mode = %d\n", VAR_1->md5_mode);


  FUNC_0 (VAR_1->log_split_mod > 0 && VAR_1->log_split_min >= 0 && VAR_1->log_split_min + 1 == VAR_1->log_split_max && VAR_1->log_split_max <= VAR_1->log_split_mod);

  return 0;
}
