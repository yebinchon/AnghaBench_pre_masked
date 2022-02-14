
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tsdn_t ;
struct TYPE_3__ {size_t allocated; size_t resident; size_t mapped; size_t n_thp; int mtx; } ;
typedef TYPE_1__ base_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

void
FUNC_4(tsdn_t *VAR_1, base_t *VAR_2, size_t *VAR_3, size_t *VAR_4,
    size_t *VAR_5, size_t *VAR_6) {
 FUNC_1(VAR_0);

 FUNC_2(VAR_1, &VAR_2->mtx);
 FUNC_0(VAR_2->allocated <= VAR_2->resident);
 FUNC_0(VAR_2->resident <= VAR_2->mapped);
 *VAR_3 = VAR_2->allocated;
 *VAR_4 = VAR_2->resident;
 *VAR_5 = VAR_2->mapped;
 *VAR_6 = VAR_2->n_thp;
 FUNC_3(VAR_1, &VAR_2->mtx);
}
