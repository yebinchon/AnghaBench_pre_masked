
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_1__* uma_zone_t ;
typedef TYPE_2__* uma_cache_t ;
typedef TYPE_3__* uma_bucket_t ;
struct TYPE_15__ {scalar_t__ ub_cnt; } ;
struct TYPE_14__ {TYPE_3__* uc_crossbucket; TYPE_3__* uc_freebucket; TYPE_3__* uc_allocbucket; } ;
struct TYPE_13__ {int uz_flags; int * uz_domain; TYPE_2__* uz_cpu; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_3__*,int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 size_t VAR_2 ;
 int FUNC_7 (TYPE_1__*,int *,TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_8(uma_zone_t VAR_3)
{
 uma_cache_t VAR_4;
 uma_bucket_t VAR_5, VAR_6, VAR_7;
 int VAR_8;

 if (VAR_3->uz_flags & VAR_0)
  return;

 VAR_5 = VAR_6 = VAR_7 = ((void*)0);
 FUNC_1(VAR_3);
 FUNC_5();
 if (VAR_3->uz_flags & VAR_1)
  VAR_8 = FUNC_0(VAR_8);
 else
  VAR_8 = 0;
 VAR_4 = &VAR_3->uz_cpu[VAR_2];
 if (VAR_4->uc_allocbucket) {
  if (VAR_4->uc_allocbucket->ub_cnt != 0)
   FUNC_7(VAR_3, &VAR_3->uz_domain[VAR_8],
       VAR_4->uc_allocbucket, 0);
  else
   VAR_5 = VAR_4->uc_allocbucket;
  VAR_4->uc_allocbucket = ((void*)0);
 }
 if (VAR_4->uc_freebucket) {
  if (VAR_4->uc_freebucket->ub_cnt != 0)
   FUNC_7(VAR_3, &VAR_3->uz_domain[VAR_8],
       VAR_4->uc_freebucket, 0);
  else
   VAR_6 = VAR_4->uc_freebucket;
  VAR_4->uc_freebucket = ((void*)0);
 }
 VAR_7 = VAR_4->uc_crossbucket;
 VAR_4->uc_crossbucket = ((void*)0);
 FUNC_6();
 FUNC_2(VAR_3);
 if (VAR_5)
  FUNC_4(VAR_3, VAR_5, ((void*)0));
 if (VAR_6)
  FUNC_4(VAR_3, VAR_6, ((void*)0));
 if (VAR_7) {
  FUNC_3(VAR_3, VAR_7);
  FUNC_4(VAR_3, VAR_7, ((void*)0));
 }
}
