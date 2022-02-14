
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_item {int flags; int report_ID; int pos; int report_size; int report_count; int logical_minimum; int logical_maximum; int physical_minimum; int physical_maximum; int unit; int unit_exponent; int usage; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(const char *VAR_3, struct hid_item *VAR_4)
{
 if ((VAR_4->flags & VAR_0) && !VAR_2)
  return;
 FUNC_3("%s rid=%d pos=%d size=%d count=%d page=%s usage=%s%s%s", VAR_3,
        VAR_4->report_ID, VAR_4->pos, VAR_4->report_size, VAR_4->report_count,
        FUNC_2(FUNC_0(VAR_4->usage)),
        FUNC_1(VAR_4->usage),
        VAR_4->flags & VAR_0 ? " Const" : "",
        VAR_4->flags & VAR_1 ? "" : " Array");
 FUNC_3(", logical range %d..%d",
        VAR_4->logical_minimum, VAR_4->logical_maximum);
 if (VAR_4->physical_minimum != VAR_4->physical_maximum)
  FUNC_3(", physical range %d..%d",
         VAR_4->physical_minimum, VAR_4->physical_maximum);
 if (VAR_4->unit)
  FUNC_3(", unit=0x%02x exp=%d", VAR_4->unit, VAR_4->unit_exponent);
 FUNC_3("\n");
}
