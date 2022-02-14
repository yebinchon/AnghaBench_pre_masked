
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int extent_state_t ;
struct TYPE_3__ {int delay_coalesce; int state; int npages; int lru; int bitmap; int * heaps; int mtx; } ;
typedef TYPE_1__ eset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ,int *,int) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,char*,int ,int ) ;
 int VAR_4 ;

bool
FUNC_5(tsdn_t *VAR_5, eset_t *VAR_6, extent_state_t VAR_7,
    bool VAR_8) {
 if (FUNC_4(&VAR_6->mtx, "extents", VAR_2,
     VAR_4)) {
  return 1;
 }
 for (unsigned VAR_9 = 0; VAR_9 < VAR_1 + 1; VAR_9++) {
  FUNC_2(&VAR_6->heaps[VAR_9]);
 }
 FUNC_1(VAR_6->bitmap, &VAR_3, 1);
 FUNC_3(&VAR_6->lru);
 FUNC_0(&VAR_6->npages, 0, VAR_0);
 VAR_6->state = VAR_7;
 VAR_6->delay_coalesce = VAR_8;
 return 0;
}
