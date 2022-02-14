
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_item {int kind; int usage; } ;
struct hid_data {int dummy; } ;
typedef int report_desc_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;

 int FUNC_2 (char*,struct hid_item*) ;
 int FUNC_3 (struct hid_data*) ;


 scalar_t__ FUNC_4 (struct hid_data*,struct hid_item*) ;


 struct hid_data* FUNC_5 (int ,int ,int) ;
 char* FUNC_6 (int ) ;
 char* FUNC_7 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_8(report_desc_t VAR_1)
{
 struct hid_data *VAR_2 = ((void*)0);
 struct hid_item VAR_3;

 for (VAR_2 = FUNC_5(VAR_1, ~0, -1); FUNC_4(VAR_2, &VAR_3); ) {
  switch (VAR_3.kind) {
  case 132:
   FUNC_1(VAR_0,
"Collection page=%s usage=%s\n", FUNC_7(FUNC_0(VAR_3.usage)),
     FUNC_6(VAR_3.usage));
   break;

  case 131:
   FUNC_1(VAR_0, "End collection\n");
   break;

  case 129:
   FUNC_2("Input  ", &VAR_3);
   break;

  case 128:
   FUNC_2("Output ", &VAR_3);
   break;

  case 130:
   FUNC_2("Feature", &VAR_3);
   break;
  }
 }

 FUNC_3(VAR_2);
}
