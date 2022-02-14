
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int docs; int idx_docs; unsigned long long* Idx_Pos; unsigned long long** Pos; int mutex_insert; } ;
typedef TYPE_1__ volume_t ;


 unsigned long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long long VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2 (volume_t *VAR_4, int VAR_5, unsigned long long VAR_6, unsigned long long *VAR_7) {
  FUNC_0 (&VAR_4->mutex_insert);
  if (VAR_5 < 1 || VAR_5 > VAR_4->docs) {
    FUNC_1 (&VAR_4->mutex_insert);
    return VAR_1;
  }
  unsigned long long VAR_8;
  if (VAR_5 <= VAR_4->idx_docs) {
    VAR_8 = VAR_4->Idx_Pos[VAR_5];
  } else {
    int VAR_9 = VAR_5 - VAR_4->idx_docs - 1;
    VAR_8 = VAR_4->Pos[VAR_9 >> 11][VAR_9 & 2047];
  }
  FUNC_1 (&VAR_4->mutex_insert);

  *VAR_7 = VAR_8 & VAR_0;

  if ((VAR_6 ^ VAR_8) & VAR_3) {
    return VAR_2;
  }

  return 0;
}
