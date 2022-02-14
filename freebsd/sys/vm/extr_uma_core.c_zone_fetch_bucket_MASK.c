
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* uma_zone_t ;
typedef TYPE_2__* uma_zone_domain_t ;
typedef TYPE_3__* uma_bucket_t ;
struct TYPE_12__ {scalar_t__ ub_cnt; } ;
struct TYPE_11__ {scalar_t__ uzd_nitems; scalar_t__ uzd_imin; int uzd_buckets; } ;
struct TYPE_10__ {int uz_bkt_count; } ;


 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static uma_bucket_t
FUNC_4(uma_zone_t VAR_1, uma_zone_domain_t VAR_2)
{
 uma_bucket_t VAR_3;

 FUNC_3(VAR_1);

 if ((VAR_3 = FUNC_1(&VAR_2->uzd_buckets)) != ((void*)0)) {
  FUNC_0(VAR_2->uzd_nitems >= VAR_3->ub_cnt);
  FUNC_2(&VAR_2->uzd_buckets, VAR_3, VAR_0);
  VAR_2->uzd_nitems -= VAR_3->ub_cnt;
  if (VAR_2->uzd_imin > VAR_2->uzd_nitems)
   VAR_2->uzd_imin = VAR_2->uzd_nitems;
  VAR_1->uz_bkt_count -= VAR_3->ub_cnt;
 }
 return (VAR_3);
}
