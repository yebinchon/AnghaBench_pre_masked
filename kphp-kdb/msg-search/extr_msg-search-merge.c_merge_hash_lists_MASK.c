
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int order; int message_id; int hash; } ;
typedef TYPE_2__ pair_t ;
typedef int hash_t ;
struct TYPE_8__ {int order; int message_id; int hash; } ;
struct TYPE_6__ {int message_id; } ;


 int* VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 TYPE_5__* VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int*,int,int) ;

__attribute__((used)) static void FUNC_2 (pair_t *VAR_8, pair_t *VAR_9, int VAR_10) {
  int VAR_11 = 0x7fffffff, VAR_12 = -0x7fffffff, VAR_13;
  hash_t VAR_14;

  if (VAR_10) {
    VAR_14 = VAR_9->hash;
  } else if (VAR_8) {
    VAR_14 = VAR_8->hash;
  } else {
    return;
  }

  VAR_3 = VAR_2;
  FUNC_0 (VAR_2 + VAR_10 <= VAR_4);

  for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
    int VAR_15 = (VAR_9++)->message_id;
    if (VAR_15 > 0) { VAR_11 = VAR_15; } else { VAR_12 = VAR_15; }
    VAR_1[VAR_2++] = VAR_15;
  }

  if (VAR_8 && VAR_8->order) {
    int VAR_16 = VAR_8->order;
    int *VAR_17 = (VAR_16 == 1 ? &VAR_8->message_id : VAR_0 + VAR_8->message_id);
    FUNC_0 ((unsigned) VAR_16 < VAR_4 && VAR_2 + VAR_16 <= VAR_4);
    FUNC_1 (VAR_17, VAR_17+VAR_16, VAR_11, VAR_12);
  }

  if (VAR_2 > VAR_3) {
    FUNC_0 (VAR_7 < VAR_5);
    VAR_6[VAR_7].hash = VAR_14;
    VAR_6[VAR_7].order = VAR_2 - VAR_3;
    if (VAR_2 - VAR_3 > 1) {
      VAR_6[VAR_7++].message_id = VAR_3;
    } else {
      VAR_6[VAR_7++].message_id = VAR_1[VAR_3];
      VAR_2 = VAR_3;
    }
  }
}
