
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_usage {int dummy; } ;
struct hid_report {scalar_t__ maxfield; struct hid_field** field; int device; } ;
struct hid_field {size_t index; struct hid_report* report; struct hid_usage* usage; int * value; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct hid_field* FUNC_1 (int,int ) ;

__attribute__((used)) static struct hid_field *FUNC_2(struct hid_report *VAR_2, unsigned VAR_3, unsigned VAR_4)
{
 struct hid_field *VAR_5;

 if (VAR_2->maxfield == VAR_1) {
  FUNC_0(VAR_2->device, "too many fields in report\n");
  return ((void*)0);
 }

 VAR_5 = FUNC_1((sizeof(struct hid_field) +
    VAR_3 * sizeof(struct hid_usage) +
    VAR_4 * sizeof(unsigned)), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->index = VAR_2->maxfield++;
 VAR_2->field[VAR_5->index] = VAR_5;
 VAR_5->usage = (struct hid_usage *)(VAR_5 + 1);
 VAR_5->value = (s32 *)(VAR_5->usage + VAR_3);
 VAR_5->report = VAR_2;

 return VAR_5;
}
