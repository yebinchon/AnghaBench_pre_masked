
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* uma_zone_t ;
typedef TYPE_2__* uma_bucket_t ;
struct uma_bucket_zone {scalar_t__ ubz_entries; TYPE_1__* ubz_zone; } ;
struct TYPE_8__ {int ub_entries; scalar_t__ ub_cnt; int ub_bucket; } ;
struct TYPE_7__ {uintptr_t uz_flags; int uz_count; } ;


 int VAR_0 ;
 uintptr_t VAR_1 ;
 uintptr_t VAR_2 ;
 struct uma_bucket_zone* FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,void*,int) ;

__attribute__((used)) static uma_bucket_t
FUNC_3(uma_zone_t VAR_4, void *VAR_5, int VAR_6)
{
 struct uma_bucket_zone *VAR_7;
 uma_bucket_t VAR_8;







 if (VAR_3)
  return (((void*)0));
 if ((VAR_4->uz_flags & VAR_1) == 0)
  VAR_5 = (void *)(uintptr_t)VAR_4->uz_flags;
 else {
  if ((uintptr_t)VAR_5 & VAR_1)
   return (((void*)0));
  VAR_5 = (void *)((uintptr_t)VAR_5 | VAR_1);
 }
 if ((uintptr_t)VAR_5 & VAR_2)
  VAR_6 |= VAR_0;
 VAR_7 = FUNC_0(VAR_4->uz_count);
 if (VAR_7->ubz_zone == VAR_4 && (VAR_7 + 1)->ubz_entries != 0)
  VAR_7++;
 VAR_8 = FUNC_2(VAR_7->ubz_zone, VAR_5, VAR_6);
 if (VAR_8) {



  VAR_8->ub_cnt = 0;
  VAR_8->ub_entries = VAR_7->ubz_entries;
 }

 return (VAR_8);
}
