
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; int currId; int* rev; int to; int hash; } ;
typedef TYPE_1__ lookup_table ;


 int FUNC_0 (int) ;
 size_t* FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int*,int) ;
 int* FUNC_6 (int*,int,int) ;

int FUNC_7 (lookup_table *VAR_0, int VAR_1) {
  FUNC_2 (VAR_0);

  FUNC_0 (VAR_0->size > 0);

  int VAR_2;
  if ( (VAR_2 = FUNC_3 (VAR_0, VAR_1)) ) {
    return VAR_2;
  }

  if (VAR_0->currId >= VAR_0->size) {
    FUNC_0 (VAR_0->currId == VAR_0->size);

    int VAR_3 = VAR_0->size;

    VAR_0->size = VAR_0->currId * 2;
    VAR_0->rev = FUNC_6 (VAR_0->rev, sizeof (int) * VAR_0->size, sizeof (int) * VAR_3);
    FUNC_0 (VAR_0->rev != ((void*)0));
    FUNC_0 (0 < VAR_0->size && VAR_0->size < 100000000);
    VAR_0->hash = FUNC_5 (VAR_0->rev, VAR_0->size);
    FUNC_4 (*(VAR_0->rev + VAR_3), 0, sizeof (int) * (VAR_0->size - VAR_3));
  }
  FUNC_0 (VAR_0->currId < VAR_0->size);

  FUNC_0 (VAR_0->currId < VAR_0->size);

  VAR_0->rev[VAR_0->currId] = VAR_1;

  *(FUNC_1 (&(VAR_0->to), VAR_1)) = VAR_0->currId;

  return VAR_0->currId++;
}
