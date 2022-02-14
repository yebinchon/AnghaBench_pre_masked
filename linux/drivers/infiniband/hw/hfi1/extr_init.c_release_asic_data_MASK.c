
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {size_t hfi1_id; struct hfi1_asic_data* asic_data; } ;
struct hfi1_asic_data {int ** dds; } ;



__attribute__((used)) static struct hfi1_asic_data *FUNC_0(struct hfi1_devdata *VAR_0)
{
 struct hfi1_asic_data *VAR_1;
 int VAR_2;

 if (!VAR_0->asic_data)
  return ((void*)0);
 VAR_0->asic_data->dds[VAR_0->hfi1_id] = ((void*)0);
 VAR_2 = VAR_0->hfi1_id ? 0 : 1;
 VAR_1 = VAR_0->asic_data;
 VAR_0->asic_data = ((void*)0);

 return VAR_1->dds[VAR_2] ? ((void*)0) : VAR_1;
}
