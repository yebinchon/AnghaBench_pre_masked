
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int local_id; struct TYPE_6__* hnext; TYPE_1__* B; } ;
typedef TYPE_2__ metafile_t ;
struct TYPE_5__ {long long volume_id; } ;


 int VAR_0 ;
 TYPE_2__** VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (long long,int) ;

__attribute__((used)) static metafile_t *FUNC_2 (long long VAR_2, int VAR_3, int *VAR_4, int VAR_5) {
  *VAR_4 = FUNC_1 (VAR_2, VAR_3);
  FUNC_0 ((*VAR_4) >= 0 && (*VAR_4) < VAR_0);
  metafile_t **VAR_6 = VAR_1 + (*VAR_4), *VAR_7;
  while (*VAR_6) {
    VAR_7 = *VAR_6;
    if (VAR_7->B->volume_id == VAR_2 && VAR_7->local_id == VAR_3) {
      *VAR_6 = VAR_7->hnext;
      if (VAR_5 >= 0) {
        VAR_7->hnext = VAR_1[*VAR_4];
        VAR_1[*VAR_4] = VAR_7;
      }
      return VAR_7;
    }
    VAR_6 = &VAR_7->hnext;
  }
  return ((void*)0);
}
