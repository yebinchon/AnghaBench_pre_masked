
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int docs; int idx_docs; int pos_capacity; unsigned long long** Pos; int mutex_insert; } ;
typedef TYPE_1__ volume_t ;


 unsigned long long VAR_0 ;
 int FUNC_0 (int) ;
 unsigned long long* FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 unsigned long long** FUNC_4 (unsigned long long**,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5 (volume_t *VAR_2, unsigned long long VAR_3, unsigned long long VAR_4) {
  const unsigned long long VAR_5 = VAR_4 | (VAR_3 & VAR_0);
  VAR_1++;
  FUNC_2 (&VAR_2->mutex_insert);
  int VAR_6 = ++(VAR_2->docs);
  int VAR_7 = VAR_6 - VAR_2->idx_docs - 1;
  FUNC_0 (VAR_7 >= 0);
  int VAR_8 = VAR_7 & 2047;
  VAR_7 >>= 11;
  if (!VAR_8) {
    unsigned long long *VAR_9 = FUNC_1 (2048, 8);
    FUNC_0 (VAR_9 != ((void*)0));
    VAR_9[0] = VAR_5;
    if (VAR_7 == VAR_2->pos_capacity) {
      int VAR_10 = 1 + (VAR_2->pos_capacity << 1);
      unsigned long long **VAR_11 = FUNC_4 (VAR_2->Pos, VAR_10 * sizeof (VAR_2->Pos[0]));
      FUNC_0 (VAR_11 != ((void*)0));
      VAR_2->Pos = VAR_11;
      VAR_2->pos_capacity = VAR_10;
    }
    FUNC_0 (VAR_7 < VAR_2->pos_capacity);
    VAR_2->Pos[VAR_7] = VAR_9;
  } else {
    FUNC_0 (VAR_7 < VAR_2->pos_capacity);
    VAR_2->Pos[VAR_7][VAR_8] = VAR_5;
  }
  FUNC_3 (&VAR_2->mutex_insert);
  return VAR_6;
}
