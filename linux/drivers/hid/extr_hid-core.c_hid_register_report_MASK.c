
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_report_enum {int numbered; int report_list; struct hid_report** report_id_hash; } ;
struct hid_report {unsigned int id; unsigned int type; unsigned int application; int list; struct hid_device* device; scalar_t__ size; } ;
struct hid_device {struct hid_report_enum* report_enum; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct hid_report* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;

struct hid_report *FUNC_2(struct hid_device *VAR_2,
           unsigned int VAR_3, unsigned int VAR_4,
           unsigned int VAR_5)
{
 struct hid_report_enum *VAR_6 = VAR_2->report_enum + VAR_3;
 struct hid_report *VAR_7;

 if (VAR_4 >= VAR_1)
  return ((void*)0);
 if (VAR_6->report_id_hash[VAR_4])
  return VAR_6->report_id_hash[VAR_4];

 VAR_7 = FUNC_0(sizeof(struct hid_report), VAR_0);
 if (!VAR_7)
  return ((void*)0);

 if (VAR_4 != 0)
  VAR_6->numbered = 1;

 VAR_7->id = VAR_4;
 VAR_7->type = VAR_3;
 VAR_7->size = 0;
 VAR_7->device = VAR_2;
 VAR_7->application = VAR_5;
 VAR_6->report_id_hash[VAR_4] = VAR_7;

 FUNC_1(&VAR_7->list, &VAR_6->report_list);

 return VAR_7;
}
