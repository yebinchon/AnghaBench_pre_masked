
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sysc_platform_data {int dummy; } ;
struct ti_sysc_module_data {int * cfg; int cap; int nr_offsets; int offsets; int module_size; int module_pa; scalar_t__ name; } ;
struct sysc {struct ti_sysc_module_data* mdata; int cfg; int cap; int offsets; int module_size; int module_pa; scalar_t__ legacy_mode; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ti_sysc_platform_data* FUNC_0 (int ) ;
 struct ti_sysc_module_data* FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct sysc *VAR_3)
{
 struct ti_sysc_platform_data *VAR_4 = FUNC_0(VAR_3->dev);
 struct ti_sysc_module_data *VAR_5;

 if (!VAR_4)
  return 0;

 VAR_5 = FUNC_1(VAR_3->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 if (VAR_3->legacy_mode) {
  VAR_5->name = VAR_3->legacy_mode;
  VAR_5->module_pa = VAR_3->module_pa;
  VAR_5->module_size = VAR_3->module_size;
  VAR_5->offsets = VAR_3->offsets;
  VAR_5->nr_offsets = VAR_2;
  VAR_5->cap = VAR_3->cap;
  VAR_5->cfg = &VAR_3->cfg;
 }

 VAR_3->mdata = VAR_5;

 return 0;
}
