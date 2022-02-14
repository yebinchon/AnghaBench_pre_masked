
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int report_ID; int kind; } ;
struct variable {int val; TYPE_1__ h; struct variable* next; } ;
typedef int report_desc_t ;
typedef enum hid_kind { ____Placeholder_hid_kind } hid_kind ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,int,int*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int*,TYPE_1__*,int ) ;
 int FUNC_4 (int,int,int*,int) ;
 int* FUNC_5 (int) ;
 int FUNC_6 (int*,int ,int) ;
 int FUNC_7 (char*,...) ;
 struct variable* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (char*,int) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_9(int VAR_6, report_desc_t VAR_7)
{
 struct variable *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;
 u_char *VAR_13;
 enum hid_kind VAR_14;

 VAR_14 = 0;
 VAR_12 = 0;
 for (VAR_14 = 0; VAR_14 < 3; VAR_14 ++) {
     for (VAR_12 = 0; VAR_12 < 256; VAR_12 ++) {
  for (VAR_8 = VAR_3; VAR_8; VAR_8 = VAR_8->next) {
   if (VAR_12 == VAR_8->h.report_ID && VAR_14 == VAR_8->h.kind)
    break;
  }
  if (VAR_8 == ((void*)0))
   continue;
  VAR_9 = FUNC_2(VAR_7, VAR_14, VAR_12);
  if (VAR_9 <= 0)
   continue;
  VAR_13 = FUNC_5(VAR_9);
  FUNC_6(VAR_13, 0, VAR_9);
  VAR_13[0] = VAR_12;
  if (!VAR_5 && FUNC_1(VAR_6, VAR_14, VAR_13, VAR_9) == 0) {
   if (VAR_4) {
    FUNC_7("Got %s report %d (%d bytes):",
        VAR_14 == VAR_1 ? "input" :
        VAR_14 == VAR_2 ? "output" : "feature",
        VAR_12, VAR_9);
    for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
     FUNC_7(" %02x", VAR_13[VAR_10]);
    FUNC_7("\n");
   }
  } else if (!VAR_5) {
   FUNC_8("hid_get_report(rid %d)", VAR_12);
   if (VAR_4) {
    FUNC_7("Can't get %s report %d (%d bytes). "
        "Will be initialized with zeros.\n",
        VAR_14 == VAR_1 ? "input" :
        VAR_14 == VAR_2 ? "output" : "feature",
        VAR_12, VAR_9);
   }
  }
  for (VAR_8 = VAR_3; VAR_8; VAR_8 = VAR_8->next) {
   if (VAR_12 != VAR_8->h.report_ID || VAR_14 != VAR_8->h.kind)
    continue;
   FUNC_3(VAR_13, &VAR_8->h, VAR_8->val);
  }
  if (VAR_4) {
   FUNC_7("Setting %s report %d (%d bytes):",
       VAR_14 == VAR_2 ? "output" :
       VAR_14 == VAR_0 ? "feature" : "input",
       VAR_12, VAR_9);
   for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
    FUNC_7(" %02x", VAR_13[VAR_10]);
   FUNC_7("\n");
  }
  VAR_11 = FUNC_4(VAR_6, VAR_14, VAR_13, VAR_9);
  if (VAR_11 != 0)
   FUNC_8("hid_set_report(rid %d)", VAR_12);
  FUNC_0(VAR_13);
     }
 }
}
