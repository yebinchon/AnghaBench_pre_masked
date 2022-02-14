
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* uma_zone_t ;
typedef TYPE_2__* uma_zone_domain_t ;
typedef TYPE_3__* uma_cache_t ;
typedef TYPE_4__* uma_bucket_t ;
struct uma_type_header {int uth_xdomain; int uth_sleeps; void* uth_fails; void* uth_frees; void* uth_allocs; int uth_zone_free; } ;
struct uma_percpu_stat {int ups_frees; int ups_allocs; int ups_cache_free; } ;
struct sbuf {int dummy; } ;
struct TYPE_9__ {scalar_t__ ub_cnt; } ;
struct TYPE_8__ {int uc_frees; int uc_allocs; int uc_crossbucket; int uc_freebucket; int uc_allocbucket; } ;
struct TYPE_7__ {scalar_t__ uzd_nitems; } ;
struct TYPE_6__ {TYPE_3__* uz_cpu; int uz_xdomain; int uz_sleeps; int uz_fails; int uz_frees; int uz_allocs; TYPE_2__* uz_domain; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct uma_percpu_stat*,int) ;
 void* FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct uma_type_header *VAR_2, uma_zone_t VAR_3, struct sbuf *VAR_4,
    struct uma_percpu_stat *VAR_5, bool VAR_6)
{
 uma_zone_domain_t VAR_7;
 uma_bucket_t VAR_8;
 uma_cache_t VAR_9;
 int VAR_10;


 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  VAR_7 = &VAR_3->uz_domain[VAR_10];
  VAR_2->uth_zone_free += VAR_7->uzd_nitems;
 }
 VAR_2->uth_allocs = FUNC_3(VAR_3->uz_allocs);
 VAR_2->uth_frees = FUNC_3(VAR_3->uz_frees);
 VAR_2->uth_fails = FUNC_3(VAR_3->uz_fails);
 VAR_2->uth_sleeps = VAR_3->uz_sleeps;
 VAR_2->uth_xdomain = VAR_3->uz_xdomain;
 for (VAR_10 = 0; VAR_10 < VAR_0 + 1; VAR_10++) {
  FUNC_2(&VAR_5[VAR_10], sizeof(*VAR_5));
  if (VAR_6 || FUNC_0(VAR_10))
   continue;
  VAR_9 = &VAR_3->uz_cpu[VAR_10];
  VAR_8 = (uma_bucket_t)FUNC_1(&VAR_9->uc_allocbucket);
  if (VAR_8 != ((void*)0))
   VAR_5[VAR_10].ups_cache_free += VAR_8->ub_cnt;
  VAR_8 = (uma_bucket_t)FUNC_1(&VAR_9->uc_freebucket);
  if (VAR_8 != ((void*)0))
   VAR_5[VAR_10].ups_cache_free += VAR_8->ub_cnt;
  VAR_8 = (uma_bucket_t)FUNC_1(&VAR_9->uc_crossbucket);
  if (VAR_8 != ((void*)0))
   VAR_5[VAR_10].ups_cache_free += VAR_8->ub_cnt;
  VAR_5[VAR_10].ups_allocs = VAR_9->uc_allocs;
  VAR_5[VAR_10].ups_frees = VAR_9->uc_frees;
 }
}
