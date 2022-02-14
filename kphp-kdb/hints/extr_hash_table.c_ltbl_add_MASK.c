
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int currId; int size; long long* rev; int to; } ;
typedef TYPE_1__ lookup_table ;


 long long* FUNC_0 (long long*,int,int) ;
 scalar_t__ FUNC_1 (int *,long long) ;
 int FUNC_2 (TYPE_1__*,long long) ;
 int FUNC_3 (int ,int ,int) ;

int FUNC_4 (lookup_table *VAR_0, long long VAR_1) {
  int VAR_2;

  if ( (VAR_2 = FUNC_2 (VAR_0, VAR_1)) ) {
    return VAR_2;
  }

  if (VAR_0->currId >= VAR_0->size) {
    int VAR_3 = VAR_0->size;

    VAR_0->size = VAR_0->currId * 2;

    VAR_0->rev = FUNC_0 (VAR_0->rev, sizeof (long long) * VAR_0->size, sizeof (long long) * VAR_3);

    FUNC_3 (VAR_0->rev + VAR_3, 0, sizeof (long long) * (VAR_0->size - VAR_3));
  }

  VAR_0->rev[VAR_0->currId] = VAR_1;

  *(long *)(FUNC_1 (&(VAR_0->to), VAR_1)) = VAR_0->currId;

  return VAR_0->currId++;
}
