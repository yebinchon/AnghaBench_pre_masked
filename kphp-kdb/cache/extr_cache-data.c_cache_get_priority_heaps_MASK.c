
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct cache_uri {scalar_t__ local_copy; struct cache_uri* hnext; } ;
struct TYPE_7__ {int max_size; int compare; scalar_t__ size; } ;
typedef TYPE_1__ cache_heap_t ;


 int VAR_0 ;
 struct cache_uri** VAR_1 ;
 int FUNC_0 (char*,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,struct cache_uri*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_3 (cache_heap_t *VAR_6, cache_heap_t *VAR_7, int VAR_8, int VAR_9, int *VAR_10, int *VAR_11) {
  int VAR_12;
  struct cache_uri *VAR_13;
  if (VAR_8 == 0) {
    VAR_8 = VAR_0;
  }
  if (VAR_9 == 0) {
    VAR_9 = VAR_0;
  }
  VAR_6->size = 0;
  VAR_6->max_size = (VAR_8 < VAR_0) ? VAR_8 : VAR_0;
  VAR_6->compare = VAR_2;
  VAR_7->size = 0;
  VAR_7->max_size = (VAR_9 < VAR_0) ? VAR_9 : VAR_0;
  VAR_7->compare = VAR_3;
  for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
    for (VAR_13 = VAR_1[VAR_12]; VAR_13 != ((void*)0); VAR_13 = VAR_13->hnext) {

      FUNC_1 (VAR_13->local_copy ? VAR_6 : VAR_7, VAR_13);
    }
  }
  *VAR_10 = FUNC_2 (VAR_6);
  if (VAR_5 >= 3) {
    FUNC_0 ("cached", VAR_6, *VAR_10);
  }
  *VAR_11 = FUNC_2 (VAR_7);
  if (VAR_5 >= 3) {
    FUNC_0 ("uncached", VAR_7, *VAR_11);
  }


  return 0;
}
