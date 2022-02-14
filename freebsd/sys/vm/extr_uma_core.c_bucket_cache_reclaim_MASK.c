
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_1__* uma_zone_t ;
typedef TYPE_2__* uma_zone_domain_t ;
typedef TYPE_3__* uma_bucket_t ;
struct TYPE_15__ {long ub_cnt; } ;
struct TYPE_14__ {long uzd_nitems; scalar_t__ uzd_imin; scalar_t__ uzd_imax; int uzd_buckets; int uzd_wss; } ;
struct TYPE_13__ {scalar_t__ uz_count; scalar_t__ uz_count_min; TYPE_2__* uz_domain; } ;


 TYPE_3__* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_3__*,int *) ;
 long FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_8(uma_zone_t VAR_3, bool VAR_4)
{
 uma_zone_domain_t VAR_5;
 uma_bucket_t VAR_6;
 long VAR_7, VAR_8;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  VAR_5 = &VAR_3->uz_domain[VAR_9];
  VAR_7 = VAR_4 ? 0 : FUNC_6(VAR_5->uzd_wss, VAR_5->uzd_nitems -
      VAR_5->uzd_imin);
  while (VAR_5->uzd_nitems > VAR_7) {
   VAR_6 = FUNC_0(&VAR_5->uzd_buckets, VAR_1);
   if (VAR_6 == ((void*)0))
    break;
   VAR_8 = VAR_6->ub_cnt;
   FUNC_1(&VAR_5->uzd_buckets, VAR_6, VAR_0);
   VAR_5->uzd_nitems -= VAR_8;





   VAR_5->uzd_imax -= FUNC_7(VAR_5->uzd_imax, VAR_8);
   VAR_5->uzd_imin -= FUNC_7(VAR_5->uzd_imin, VAR_8);

   FUNC_3(VAR_3);
   FUNC_4(VAR_3, VAR_6);
   FUNC_5(VAR_3, VAR_6, ((void*)0));
   FUNC_2(VAR_3);
  }
 }





 if (VAR_3->uz_count > VAR_3->uz_count_min)
  VAR_3->uz_count--;
}
