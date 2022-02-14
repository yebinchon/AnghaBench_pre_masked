
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devinfo_rman {int dm_size; } ;
struct devinfo_res {int dr_start; int dr_size; int dr_rman; } ;


 struct devinfo_rman* FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;

void
FUNC_2(struct devinfo_res *VAR_0)
{
 struct devinfo_rman *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_0(VAR_0->dr_rman);
 VAR_2 = (VAR_1->dm_size > 1000) || (VAR_1->dm_size == 0);
 FUNC_1(VAR_2 ? "0x%jx" : "%ju", VAR_0->dr_start);
 if (VAR_0->dr_size > 1)
  FUNC_1(VAR_2 ? "-0x%jx" : "-%ju",
      VAR_0->dr_start + VAR_0->dr_size - 1);
}
