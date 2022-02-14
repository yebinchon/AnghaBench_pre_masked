
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int user_t ;
struct lev_add_message {int text_len; long long legacy_id; int type; int ua_hash; int user_id; scalar_t__ text; } ;
struct TYPE_3__ {int user_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__** VAR_4 ;
 int* VAR_5 ;
 int * VAR_6 ;
 scalar_t__* VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 long long VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 long long VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (scalar_t__,int) ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 TYPE_1__* FUNC_4 (int) ;

void FUNC_5 (struct lev_add_message *VAR_21, int VAR_22) {
  int VAR_23 = FUNC_2 (VAR_21->user_id);
  int VAR_24 = VAR_21->text_len;
  if (VAR_23 < 0) {
    VAR_9++;
    return;
  }
  VAR_10++;
  if (!VAR_4[VAR_23]) {
    VAR_4[VAR_23] = FUNC_4 (sizeof (user_t));
    VAR_4[VAR_23]->user_id = VAR_21->user_id;
    VAR_20++;
  }
  long long VAR_25 = VAR_21->legacy_id;
  if ((VAR_21->type & ~VAR_3) == VAR_1) {
    VAR_25 = (VAR_25 & 0xffffffffLL) | (VAR_21->ua_hash & 0xffffffff00000000LL);
  }
  if (VAR_25 < VAR_15) {
    VAR_15 = VAR_25;
  }
  if (VAR_25 > VAR_11) {
    VAR_11 = VAR_25;
  }
  if (VAR_22) {
    FUNC_0 (!(VAR_21->type & VAR_3 & ~VAR_8));
  } else {
    FUNC_0 ((VAR_21->type & ~VAR_3) != VAR_0 && (VAR_21->type & ~VAR_3) != VAR_2);
  }
  FUNC_3 (VAR_21->text + VAR_22, VAR_24);

  if (VAR_18) {
    int VAR_26 = FUNC_1 (VAR_21->text + VAR_22, VAR_24);
    VAR_19 += VAR_26;
    VAR_7[VAR_23] += VAR_26;
    if (VAR_7[VAR_23] > VAR_14) {
      VAR_14 = VAR_7[VAR_23];
      VAR_13 = VAR_21->user_id;
    }
  }

  VAR_17++;
  VAR_16 += VAR_24;

  if (VAR_23 > VAR_12) {
    VAR_12 = VAR_23;
  }
  VAR_6[VAR_23]++;
  VAR_5[VAR_23] += VAR_24;
}
