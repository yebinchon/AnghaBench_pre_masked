
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_report {int maxfield; struct hid_field** field; } ;
struct hid_field {int logical; scalar_t__ report_count; int logical_minimum; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static struct hid_field *FUNC_1(struct hid_report *VAR_1,
        int VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->maxfield; VAR_4++) {
  if (VAR_1->field[VAR_4]->logical == (VAR_0 | VAR_2) &&
      VAR_1->field[VAR_4]->report_count > 0) {
   if (!VAR_3 ||
       VAR_1->field[VAR_4]->logical_minimum == 1)
    return VAR_1->field[VAR_4];
   else {
    FUNC_0("logical_minimum is not 1 as it should be\n");
    return ((void*)0);
   }
  }
 }
 return ((void*)0);
}
