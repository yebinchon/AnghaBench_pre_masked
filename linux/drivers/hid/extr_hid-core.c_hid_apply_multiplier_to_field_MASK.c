
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_usage {size_t collection_index; int resolution_multiplier; } ;
struct hid_field {int maxusage; struct hid_usage* usage; } ;
struct hid_device {struct hid_collection* collection; } ;
struct hid_collection {int parent_idx; } ;



__attribute__((used)) static void FUNC_0(struct hid_device *VAR_0,
       struct hid_field *VAR_1,
       struct hid_collection *VAR_2,
       int VAR_3)
{
 struct hid_collection *VAR_4;
 struct hid_usage *VAR_5;
 int VAR_6;







 for (VAR_6 = 0; VAR_6 < VAR_1->maxusage; VAR_6++) {
  VAR_5 = &VAR_1->usage[VAR_6];

  VAR_4 = &VAR_0->collection[VAR_5->collection_index];
  while (VAR_4->parent_idx != -1 &&
         VAR_4 != VAR_2)
   VAR_4 = &VAR_0->collection[VAR_4->parent_idx];

  if (VAR_4->parent_idx != -1 ||
      VAR_2 == ((void*)0))
   VAR_5->resolution_multiplier = VAR_3;

 }
}
