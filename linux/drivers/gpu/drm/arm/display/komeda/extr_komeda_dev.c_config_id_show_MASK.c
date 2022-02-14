
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union komeda_config_id {int n_layers; int value; scalar_t__ n_richs; int n_scalers; int n_pipelines; int max_line_sz; } ;
struct komeda_pipeline {int n_layers; TYPE_2__** layers; int n_scalers; } ;
struct komeda_dev {int n_pipelines; struct komeda_pipeline** pipelines; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int config_id ;
struct TYPE_3__ {int end; } ;
struct TYPE_4__ {scalar_t__ layer_type; TYPE_1__ hsize_in; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct komeda_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (union komeda_config_id*,int ,int) ;
 int FUNC_2 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_2, struct device_attribute *VAR_3, char *VAR_4)
{
 struct komeda_dev *VAR_5 = FUNC_0(VAR_2);
 struct komeda_pipeline *VAR_6 = VAR_5->pipelines[0];
 union komeda_config_id VAR_7;
 int VAR_8;

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));

 VAR_7.max_line_sz = VAR_6->layers[0]->hsize_in.end;
 VAR_7.n_pipelines = VAR_5->n_pipelines;
 VAR_7.n_scalers = VAR_6->n_scalers;
 VAR_7.n_layers = VAR_6->n_layers;
 VAR_7.n_richs = 0;
 for (VAR_8 = 0; VAR_8 < VAR_6->n_layers; VAR_8++) {
  if (VAR_6->layers[VAR_8]->layer_type == VAR_0)
   VAR_7.n_richs++;
 }
 return FUNC_2(VAR_4, VAR_1, "0x%08x\n", VAR_7.value);
}
