
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int docs; int idx_docs; unsigned long long* Idx_Pos; unsigned long long** Pos; int mutex_insert; } ;
typedef TYPE_1__ volume_t ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2 (volume_t *VAR_2, int VAR_3) {
  FUNC_0 (&VAR_2->mutex_insert);
  if (VAR_3 < 1 || VAR_3 > VAR_2->docs) {
    FUNC_1 (&VAR_2->mutex_insert);
    return VAR_0;
  }
  unsigned long long *VAR_4;
  if (VAR_3 <= VAR_2->idx_docs) {
    VAR_4 = &(VAR_2->Idx_Pos[VAR_3]);
  } else {
    int VAR_5 = VAR_3 - VAR_2->idx_docs - 1;
    VAR_4 = &(VAR_2->Pos[VAR_5 >> 11][VAR_5 & 2047]);
  }
  *VAR_4 ^= VAR_1;
  FUNC_1 (&VAR_2->mutex_insert);
  return 0;
}
