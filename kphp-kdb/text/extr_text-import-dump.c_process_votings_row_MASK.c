
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int owner_id; int topic_id; int voting_id; } ;


 int* VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;

void FUNC_1 (void) {
  int VAR_9 = VAR_0[VAR_6], VAR_10 = VAR_0[VAR_7], VAR_11 = VAR_0[VAR_5];
  if (VAR_0[VAR_8] != 2 || VAR_9 >= 0 || VAR_10 <= 0 || VAR_11 <= 0) {
    return;
  }
  FUNC_0 (VAR_3 < VAR_1);
  VAR_2[VAR_3].owner_id = VAR_9;
  VAR_2[VAR_3].topic_id = VAR_10;
  VAR_2[VAR_3].voting_id = VAR_11;
  VAR_3++;

  VAR_4++;
}
