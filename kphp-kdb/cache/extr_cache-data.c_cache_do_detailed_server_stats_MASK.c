
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* hnext; } ;
typedef TYPE_1__ cache_stat_server_t ;
typedef int A ;


 TYPE_1__** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void const*,void const*) ;
 int FUNC_2 (void const*,void const*) ;
 int FUNC_3 (void const*,void const*) ;
 int FUNC_4 (void const*,void const*) ;
 int FUNC_5 (TYPE_1__**,int,int,int (*) (void const*,void const*)) ;
 int VAR_2 ;
 int FUNC_6 (int,char*,int) ;
 TYPE_1__** FUNC_7 (int) ;

int FUNC_8 (cache_stat_server_t ***VAR_3, int VAR_4) {
  *VAR_3 = ((void*)0);
  if (!VAR_2) {
    return 0;
  }
  cache_stat_server_t **VAR_5 = FUNC_7 (VAR_2 * sizeof (cache_stat_server_t *)), *VAR_6;
  int VAR_7, VAR_8 = 0;
  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
    for (VAR_6 = VAR_0[VAR_7]; VAR_6 != ((void*)0); VAR_6 = VAR_6->hnext) {
      FUNC_0 (VAR_8 < VAR_2);
      VAR_5[VAR_8++] = VAR_6;
    }
  }
  int(*VAR_9)(const void *, const void *) = ((void*)0);
  switch (VAR_4 & 3) {
    case 0:
      VAR_9 = FUNC_4;
      break;
    case 1:
      VAR_9 = FUNC_1;
      break;
    case 2:
      VAR_9 = FUNC_3;
      break;
    case 3:
      VAR_9 = FUNC_2;
      break;
  }
  FUNC_6 (4, "cache_do_detailed_server_stats: n = %d\n", VAR_8);
  FUNC_5 (VAR_5, VAR_8, sizeof (VAR_5[0]), VAR_9);
  *VAR_3 = VAR_5;
  return VAR_8;
}
