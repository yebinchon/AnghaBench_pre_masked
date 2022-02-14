
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int tot_items; } ;
typedef TYPE_1__ user_t ;
struct TYPE_9__ {int total_items; } ;
typedef TYPE_2__ recommend_user_t ;
struct TYPE_10__ {int total_items; } ;
typedef TYPE_3__ notify_user_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__** VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static inline int FUNC_5 (int VAR_9) {
  FUNC_0 (VAR_3 || VAR_1 || VAR_2);
  int VAR_10 = VAR_8;
  int VAR_11 = VAR_6, VAR_12 = VAR_9 * 10;
  do {
    FUNC_0 (VAR_11 >= 0 && VAR_11 < VAR_0);
    user_t *VAR_13 = VAR_4[VAR_11];
    if (VAR_13) {
      int VAR_14;
      if (VAR_3) {
        FUNC_2 (VAR_13);
        VAR_14 = VAR_13->tot_items;
      } else if (VAR_1) {
        FUNC_3 ((notify_user_t *) VAR_13);
        VAR_14 = ((notify_user_t *) VAR_13)->total_items;
      } else {
        FUNC_0 (VAR_2);
        FUNC_4 ((recommend_user_t *) VAR_13);
        VAR_14 = ((recommend_user_t *) VAR_13)->total_items;
      }
      if (!VAR_14 && VAR_2) {
        VAR_7++;
        FUNC_1 (VAR_11);
      }
      VAR_9--;
    }
    VAR_11 += 239;
    if (VAR_11 >= VAR_0) {
      VAR_11 -= VAR_0;
    }
  } while (VAR_11 != VAR_6 && VAR_9 > 0 && --VAR_12 > 0);
  VAR_6 = VAR_11;
  VAR_5 += VAR_10 - VAR_8;
  return 1;
}
