
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hid_report_enum {scalar_t__ numbered; } ;
struct hid_device {struct hid_report_enum* report_enum; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hid_device*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (char*,scalar_t__,char*,int,...) ;

void FUNC_4(struct hid_device *VAR_2, int VAR_3, u8 *VAR_4,
  int VAR_5)
{
 struct hid_report_enum *VAR_6;
 char *VAR_7;
 unsigned int VAR_8;

 VAR_7 = FUNC_2(VAR_1, VAR_0);

 if (!VAR_7)
  return;

 VAR_6 = VAR_2->report_enum + VAR_3;


 FUNC_3(VAR_7, VAR_1 - 1,
   "\nreport (size %u) (%snumbered) = ", VAR_5,
   VAR_6->numbered ? "" : "un");
 FUNC_0(VAR_2, VAR_7);

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  FUNC_3(VAR_7, VAR_1 - 1,
    " %02x", VAR_4[VAR_8]);
  FUNC_0(VAR_2, VAR_7);
 }
 FUNC_0(VAR_2, "\n");
 FUNC_1(VAR_7);
}
