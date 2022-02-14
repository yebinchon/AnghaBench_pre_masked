
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dimm_info {TYPE_1__* mci; int * location; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int n_layers; int** ce_per_layer; int layers; } ;


 int FUNC_0 (int ,int,int ,int ,int ) ;
 int FUNC_1 (char*,char*,int) ;
 struct dimm_info* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
          struct device_attribute *VAR_1,
          char *VAR_2)
{
 struct dimm_info *VAR_3 = FUNC_2(VAR_0);
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3->mci->layers,
       VAR_3->mci->n_layers,
       VAR_3->location[0],
       VAR_3->location[1],
       VAR_3->location[2]);
 VAR_4 = VAR_3->mci->ce_per_layer[VAR_3->mci->n_layers-1][VAR_5];
 return FUNC_1(VAR_2, "%u\n", VAR_4);
}
