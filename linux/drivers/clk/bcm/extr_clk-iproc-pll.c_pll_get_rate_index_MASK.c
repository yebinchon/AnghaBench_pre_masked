
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iproc_pll {int num_vco_entries; TYPE_1__* vco_param; } ;
struct TYPE_2__ {unsigned int rate; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct iproc_pll *VAR_1, unsigned int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_vco_entries; VAR_3++)
  if (VAR_2 == VAR_1->vco_param[VAR_3].rate)
   break;

 if (VAR_3 >= VAR_1->num_vco_entries)
  return -VAR_0;

 return VAR_3;
}
