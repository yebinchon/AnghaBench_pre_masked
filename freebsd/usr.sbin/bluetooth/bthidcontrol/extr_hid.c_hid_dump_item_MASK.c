
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct hid_item {int flags; int report_size; int report_count; int logical_minimum; int logical_maximum; int physical_minimum; int physical_maximum; int unit; int unit_exponent; int usage; scalar_t__ report_ID; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,char*,...) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_4(char const *VAR_11, struct hid_item *VAR_12)
{
 if ((VAR_12->flags & VAR_1) && !VAR_10)
  return;

 FUNC_1(VAR_9,
"%s id=%u size=%u count=%u page=%s usage=%s%s%s%s%s%s%s%s%s%s",
  VAR_11, (uint8_t) VAR_12->report_ID, VAR_12->report_size, VAR_12->report_count,
  FUNC_3(FUNC_0(VAR_12->usage)),
  FUNC_2(VAR_12->usage),
  VAR_12->flags & VAR_1 ? " Const" : "",
  VAR_12->flags & VAR_6 ? " Variable" : "",
  VAR_12->flags & VAR_5 ? " Relative" : "",
  VAR_12->flags & VAR_8 ? " Wrap" : "",
  VAR_12->flags & VAR_2 ? " NonLinear" : "",
  VAR_12->flags & VAR_3 ? " NoPref" : "",
  VAR_12->flags & VAR_4 ? " NullState" : "",
  VAR_12->flags & VAR_7 ? " Volatile" : "",
  VAR_12->flags & VAR_0 ? " BufBytes" : "");

 FUNC_1(VAR_9,
", logical range %d..%d",
  VAR_12->logical_minimum, VAR_12->logical_maximum);

 if (VAR_12->physical_minimum != VAR_12->physical_maximum)
  FUNC_1(VAR_9,
", physical range %d..%d",
   VAR_12->physical_minimum, VAR_12->physical_maximum);

 if (VAR_12->unit)
  FUNC_1(VAR_9,
", unit=0x%02x exp=%d", VAR_12->unit, VAR_12->unit_exponent);

 FUNC_1(VAR_9, "\n");
}
