
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct mem_ctl_info {int tot_dimms; TYPE_1__** dimms; } ;
struct TYPE_4__ {struct mem_ctl_info* mci; } ;
struct TYPE_3__ {scalar_t__ smbios_handle; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_0(u16 VAR_1)
{
 struct mem_ctl_info *VAR_2 = VAR_0->mci;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->tot_dimms; VAR_3++) {
  if (VAR_2->dimms[VAR_3]->smbios_handle == VAR_1)
   return VAR_3;
 }
 return -1;
}
