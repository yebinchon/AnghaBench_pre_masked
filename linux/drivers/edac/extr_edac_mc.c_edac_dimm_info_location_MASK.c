
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_ctl_info {int n_layers; TYPE_1__* layers; } ;
struct dimm_info {int* location; struct mem_ctl_info* mci; } ;
struct TYPE_2__ {size_t type; } ;


 char** VAR_0 ;
 int FUNC_0 (char*,unsigned int,char*,char*,int) ;

unsigned int FUNC_1(struct dimm_info *VAR_1, char *VAR_2,
         unsigned int VAR_3)
{
 struct mem_ctl_info *VAR_4 = VAR_1->mci;
 int VAR_5, VAR_6, VAR_7 = 0;
 char *VAR_8 = VAR_2;

 for (VAR_5 = 0; VAR_5 < VAR_4->n_layers; VAR_5++) {
  VAR_6 = FUNC_0(VAR_8, VAR_3, "%s %d ",
         VAR_0[VAR_4->layers[VAR_5].type],
         VAR_1->location[VAR_5]);
  VAR_8 += VAR_6;
  VAR_3 -= VAR_6;
  VAR_7 += VAR_6;
  if (!VAR_3)
   break;
 }

 return VAR_7;
}
