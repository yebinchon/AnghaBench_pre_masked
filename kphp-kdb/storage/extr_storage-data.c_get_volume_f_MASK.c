
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned long long volume_id; int mutex_insert; int mutex_write; } ;
typedef TYPE_1__ volume_t ;


 unsigned int VAR_0 ;
 TYPE_1__** VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_2 (int) ;

volume_t *FUNC_3 (unsigned long long VAR_4, int VAR_5) {
  unsigned int VAR_6 = (unsigned int) VAR_4 % VAR_0;
  if (VAR_1[VAR_6]) {
    if (VAR_1[VAR_6]->volume_id == VAR_4) {
      return VAR_1[VAR_6];
    }
    if ( (VAR_6 += 13) >= VAR_0) {
      VAR_6 -= VAR_0;
    }
  }
  if (!VAR_5) {
    return ((void*)0);
  }
  FUNC_0 (VAR_3 < VAR_2);
  VAR_3++;
  volume_t *VAR_7 = FUNC_2 (sizeof (volume_t));
  VAR_7->volume_id = VAR_4;
  FUNC_1 (&VAR_7->mutex_write, ((void*)0));
  FUNC_1 (&VAR_7->mutex_insert, ((void*)0));
  return VAR_1[VAR_6] = VAR_7;
}
