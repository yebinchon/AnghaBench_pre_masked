
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysinfo_2_2_2 {int name; int lpar_number; } ;
struct TYPE_2__ {int infpval1; int infppnam; int infppnum; } ;
struct sthyi_sctns {TYPE_1__ par; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (struct sysinfo_2_2_2*,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct sthyi_sctns *VAR_1,
     struct sysinfo_2_2_2 *VAR_2)
{
 if (FUNC_1(VAR_2, 2, 2, 2))
  return;

 VAR_1->par.infppnum = VAR_2->lpar_number;
 FUNC_0(VAR_1->par.infppnam, VAR_2->name, sizeof(VAR_1->par.infppnam));

 VAR_1->par.infpval1 |= VAR_0;
}
