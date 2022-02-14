
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resync_info {void* hi; void* lo; } ;
struct TYPE_2__ {scalar_t__ sb_lvbptr; } ;
struct dlm_lock_resource {TYPE_1__ lksb; } ;
typedef int sector_t ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct dlm_lock_resource *VAR_0,
       sector_t VAR_1, sector_t VAR_2)
{
 struct resync_info *VAR_3;

 VAR_3 = (struct resync_info *)VAR_0->lksb.sb_lvbptr;
 VAR_3->lo = FUNC_0(VAR_1);
 VAR_3->hi = FUNC_0(VAR_2);
}
