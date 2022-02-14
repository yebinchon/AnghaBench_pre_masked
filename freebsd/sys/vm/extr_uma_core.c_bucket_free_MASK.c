
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* uma_zone_t ;
typedef TYPE_2__* uma_bucket_t ;
struct uma_bucket_zone {int ubz_zone; } ;
struct TYPE_7__ {scalar_t__ ub_cnt; int ub_entries; } ;
struct TYPE_6__ {int uz_flags; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 struct uma_bucket_zone* FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_2__*,void*) ;

__attribute__((used)) static void
FUNC_3(uma_zone_t VAR_1, uma_bucket_t VAR_2, void *VAR_3)
{
 struct uma_bucket_zone *VAR_4;

 FUNC_0(VAR_2->ub_cnt == 0,
     ("bucket_free: Freeing a non free bucket."));
 if ((VAR_1->uz_flags & VAR_0) == 0)
  VAR_3 = (void *)(uintptr_t)VAR_1->uz_flags;
 VAR_4 = FUNC_1(VAR_2->ub_entries);
 FUNC_2(VAR_4->ubz_zone, VAR_2, VAR_3);
}
