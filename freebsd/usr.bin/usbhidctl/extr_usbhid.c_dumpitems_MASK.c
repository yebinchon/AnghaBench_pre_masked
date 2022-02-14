
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_item {int kind; int usage; int collection; } ;
struct hid_data {int dummy; } ;
typedef int report_desc_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,struct hid_item*) ;

 char* FUNC_2 (int ) ;
 int FUNC_3 (struct hid_data*) ;


 scalar_t__ FUNC_4 (struct hid_data*,struct hid_item*) ;


 int FUNC_5 (int ,int const,int) ;
 struct hid_data* FUNC_6 (int ,int ,int) ;
 char* FUNC_7 (int ) ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static void
FUNC_10(report_desc_t VAR_0)
{
 struct hid_data *VAR_1;
 struct hid_item VAR_2;
 int VAR_3;

 for (VAR_1 = FUNC_6(VAR_0, ~0, -1); FUNC_4(VAR_1, &VAR_2); ) {
  switch (VAR_2.kind) {
  case 132:
   FUNC_9("Collection type=%s page=%s usage=%s\n",
          FUNC_2(VAR_2.collection),
          FUNC_8(FUNC_0(VAR_2.usage)),
          FUNC_7(VAR_2.usage));
   break;
  case 131:
   FUNC_9("End collection\n");
   break;
  case 129:
   FUNC_1("Input  ", &VAR_2);
   break;
  case 128:
   FUNC_1("Output ", &VAR_2);
   break;
  case 130:
   FUNC_1("Feature", &VAR_2);
   break;
  }
 }
 FUNC_3(VAR_1);
 VAR_3 = FUNC_5(VAR_0, 129, -1);
 FUNC_9("Total   input size %d bytes\n", VAR_3);

 VAR_3 = FUNC_5(VAR_0, 128, -1);
 FUNC_9("Total  output size %d bytes\n", VAR_3);

 VAR_3 = FUNC_5(VAR_0, 130, -1);
 FUNC_9("Total feature size %d bytes\n", VAR_3);
}
