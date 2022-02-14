
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int origin_len; int origin; struct TYPE_11__* next; } ;
typedef TYPE_1__ zone_t ;
typedef int B ;
typedef int A ;


 TYPE_1__** FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int * VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__**,int) ;

__attribute__((used)) static void FUNC_8 (zone_t *VAR_1, zone_t *VAR_2) {
  VAR_0 = ((void*)0);
  int VAR_3 = FUNC_6 (VAR_1);
  int VAR_4 = FUNC_6 (VAR_2);
  int VAR_5 = 0, VAR_6 = 0;
  zone_t *VAR_7;
  zone_t **VAR_8 = FUNC_0 (sizeof (VAR_8[0]) * VAR_3);
  for (VAR_7 = VAR_1; VAR_7 != ((void*)0); VAR_7 = VAR_7->next) {
    VAR_8[VAR_5++] = VAR_7;
  }
  zone_t **VAR_9 = FUNC_0 (sizeof (VAR_9[0]) * VAR_4);
  for (VAR_7 = VAR_2; VAR_7 != ((void*)0); VAR_7 = VAR_7->next) {
    VAR_9[VAR_6++] = VAR_7;
  }
  FUNC_1 (VAR_5 == VAR_3 && VAR_6 == VAR_4);
  FUNC_7 (VAR_8, VAR_3);
  FUNC_7 (VAR_9, VAR_4);
  VAR_5 = VAR_6 = 0;
  while (VAR_5 < VAR_3 && VAR_6 < VAR_4) {
    int VAR_10 = FUNC_2 (VAR_8[VAR_5]->origin, VAR_8[VAR_5]->origin_len, VAR_9[VAR_6]->origin, VAR_9[VAR_6]->origin_len);
    if (VAR_10 < 0) {
      FUNC_3 (VAR_8[VAR_5++]);
    } else if (!VAR_10) {
      FUNC_5 (VAR_8[VAR_5], VAR_9[VAR_6]);
      VAR_5++;
      VAR_6++;
    } else {
      FUNC_4 (VAR_9[VAR_6++]);
    }
  }
  while (VAR_5 < VAR_3) {
    FUNC_3 (VAR_8[VAR_5++]);
  }
  while (VAR_6 < VAR_4) {
    FUNC_4 (VAR_9[VAR_6++]);
  }
}
