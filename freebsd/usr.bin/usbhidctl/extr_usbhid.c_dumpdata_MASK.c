
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int report_ID; int kind; } ;
struct variable {char* name; TYPE_1__ h; struct variable* next; } ;
typedef int report_desc_t ;
typedef enum hid_kind { ____Placeholder_hid_kind } hid_kind ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int*) ;
 int VAR_0 ;
 int FUNC_2 (int,int,int*,int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int,int) ;
 int* FUNC_5 (int) ;
 int FUNC_6 (int*,int ,int) ;
 int VAR_3 ;
 int FUNC_7 (int*,TYPE_1__*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int,int*,int) ;
 struct variable* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (char*,int) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void
FUNC_11(int VAR_7, report_desc_t VAR_8, int VAR_9)
{
 struct variable *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 u_char *VAR_18;
 enum hid_kind VAR_19;

 VAR_19 = VAR_6 ? 3 : 0;
 VAR_16 = -1;
 VAR_17 = !!FUNC_3(VAR_7);
 do {
  if (VAR_19 < 3) {
   if (++VAR_16 >= 256) {
    VAR_16 = 0;
    VAR_19++;
   }
   if (VAR_19 >= 3)
    VAR_16 = -1;
   for (VAR_10 = VAR_4; VAR_10; VAR_10 = VAR_10->next) {
    if (VAR_16 == VAR_10->h.report_ID &&
        VAR_19 == VAR_10->h.kind)
     break;
   }
   if (VAR_10 == ((void*)0))
    continue;
  }
  VAR_11 = FUNC_4(VAR_8, VAR_19 < 3 ? VAR_19 : VAR_1, VAR_16);
  if (VAR_11 <= 0)
   continue;
  VAR_18 = FUNC_5(VAR_11);
  FUNC_6(VAR_18, 0, VAR_11);
  if (VAR_19 < 3) {
   VAR_18[0] = VAR_16;
   VAR_15 = FUNC_2(VAR_7, VAR_19, VAR_18, VAR_11);
   if (VAR_15 < 0)
    FUNC_10("hid_get_report(rid %d)", VAR_16);
   VAR_12 = !VAR_15 && (VAR_16 == 0 || VAR_18[0] == VAR_16);
   if (VAR_16 != 0)
    VAR_18[0] = VAR_16;
  } else {
   VAR_15 = FUNC_9(VAR_7, VAR_18, VAR_11);
   if (VAR_15 < 1)
    FUNC_0(1, "read error");
   VAR_12 = 1;
  }
  if (VAR_5) {
   FUNC_8("Got %s report %d (%d bytes):",
       VAR_19 == VAR_2 ? "output" :
       VAR_19 == VAR_0 ? "feature" : "input",
       VAR_17 ? VAR_18[0] : 0, VAR_11);
   if (VAR_12) {
    for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++)
     FUNC_8(" %02x", VAR_18[VAR_13]);
   }
   FUNC_8("\n");
  }
  VAR_14 = 0;
  for (VAR_10 = VAR_4; VAR_10; VAR_10 = VAR_10->next) {
   if ((VAR_19 < 3 ? VAR_19 : VAR_1) != VAR_10->h.kind)
    continue;
   if (VAR_10->h.report_ID != 0 &&
       VAR_18[0] != VAR_10->h.report_ID)
    continue;
   VAR_14 = 1;
   if (!VAR_3)
    FUNC_8("%s=", VAR_10->name);
   if (VAR_12)
    FUNC_7(VAR_18, &VAR_10->h);
   FUNC_8("\n");
  }
  if (VAR_14)
   FUNC_8("\n");
  FUNC_1(VAR_18);
 } while (VAR_9 || VAR_19 < 3);
}
