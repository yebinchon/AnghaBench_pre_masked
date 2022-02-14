
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int docs; unsigned long long cur_log_pos; int mutex_write; } ;
typedef TYPE_1__ volume_t ;
struct lev_storage_file {int dummy; } ;
struct lev_crc32 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int,unsigned long long,unsigned long long*) ;
 TYPE_1__* FUNC_2 (long long,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5 (long long VAR_2, int VAR_3, unsigned long long VAR_4, volume_t **VAR_5, unsigned long long *VAR_6, int *VAR_7) {
  *VAR_5 = FUNC_2 (VAR_2, 0);
  if (*VAR_5 == ((void*)0)) {
    return VAR_0;
  }
  int VAR_8 = FUNC_1 (*VAR_5, VAR_3, VAR_4, VAR_6);
  if (VAR_8) {
    return VAR_8;
  }

  if (VAR_7) {
    unsigned long long VAR_9 = *VAR_6;
    if (VAR_3 < (*VAR_5)->docs) {
      VAR_8 = FUNC_1 (*VAR_5, VAR_3 + 1, 0, &VAR_9);
    } else {
      FUNC_3 (&(*VAR_5)->mutex_write);
      if (VAR_3 < (*VAR_5)->docs) {
        FUNC_4 (&(*VAR_5)->mutex_write);
        VAR_8 = FUNC_1 (*VAR_5, VAR_3 + 1, 0, &VAR_9);
      } else {
        FUNC_0 (VAR_3 == (*VAR_5)->docs);
        VAR_9 = (*VAR_5)->cur_log_pos;
        FUNC_4 (&(*VAR_5)->mutex_write);
        VAR_8 = 0;
      }
    }
    if (!VAR_8 || VAR_8 == VAR_1) {
      *VAR_7 = (VAR_9 - *VAR_6) - (sizeof (struct lev_storage_file) + sizeof (struct lev_crc32));
    }
  }
  return 0;
}
