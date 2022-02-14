
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int order; int message_id; int hash; } ;
struct TYPE_3__ {int users; int* offset; } ;


 TYPE_2__* VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;

void FUNC_2 (int VAR_9, int VAR_10, int VAR_11) {
  int VAR_12, VAR_13;
  if (VAR_9 <= 0 || VAR_9 >= VAR_2.users-1) {
    VAR_4++;
    return;
  }

  VAR_12 = VAR_2.offset[VAR_9];
  VAR_13 = VAR_2.offset[VAR_9+1];
  if (!(VAR_12 >= 0 && VAR_12 <= VAR_13 && VAR_13 <= VAR_7)) {
    FUNC_1 (VAR_3, "%d %d %d %d\n", VAR_9, VAR_12, VAR_13, VAR_7);
  }
  FUNC_0 (VAR_12 >= 0 && VAR_12 <= VAR_13 && VAR_13 <= VAR_7);

  if (VAR_12 == VAR_13) {
    VAR_4++;
    return;
  }

  VAR_5++;
  VAR_6 += VAR_13-VAR_12;

  while (VAR_12 < VAR_13) {
    VAR_0[VAR_1].hash = VAR_8[VAR_12++];

    VAR_0[VAR_1].order = VAR_11;
    VAR_0[VAR_1].message_id = VAR_10;
    VAR_1++;
  }
}
