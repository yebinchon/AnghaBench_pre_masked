
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mem_ctl_info {int nr_csrows; int n_layers; int start_time; int * ue_per_layer; int * ce_per_layer; TYPE_2__* layers; struct csrow_info** csrows; scalar_t__ ce_noinfo_count; scalar_t__ ue_noinfo_count; scalar_t__ ce_mc; scalar_t__ ue_mc; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct csrow_info {int nr_channels; TYPE_1__** channels; scalar_t__ ce_count; scalar_t__ ue_count; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {int size; } ;
struct TYPE_3__ {scalar_t__ ce_count; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 struct mem_ctl_info* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
     struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct mem_ctl_info *VAR_5 = FUNC_1(VAR_1);
 int VAR_6, VAR_7, VAR_8, VAR_9;
 VAR_5->ue_mc = 0;
 VAR_5->ce_mc = 0;
 VAR_5->ue_noinfo_count = 0;
 VAR_5->ce_noinfo_count = 0;

 for (VAR_7 = 0; VAR_7 < VAR_5->nr_csrows; VAR_7++) {
  struct csrow_info *VAR_10 = VAR_5->csrows[VAR_7];

  VAR_10->ue_count = 0;
  VAR_10->ce_count = 0;

  for (VAR_8 = 0; VAR_8 < VAR_10->nr_channels; VAR_8++)
   VAR_10->channels[VAR_8]->ce_count = 0;
 }

 VAR_6 = 1;
 for (VAR_9 = 0; VAR_9 < VAR_5->n_layers; VAR_9++) {
  VAR_6 *= VAR_5->layers[VAR_9].size;
  FUNC_0(VAR_5->ce_per_layer[VAR_9], 0, VAR_6 * sizeof(u32));
  FUNC_0(VAR_5->ue_per_layer[VAR_9], 0, VAR_6 * sizeof(u32));
 }

 VAR_5->start_time = VAR_0;
 return VAR_4;
}
