
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int acpi_trace_event_type ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;

void
FUNC_3(acpi_trace_event_type VAR_2,
      u8 VAR_3, u8 *VAR_4, char *VAR_5)
{

 FUNC_1(VAR_1);

 if (VAR_5) {
  FUNC_0((VAR_0,
      "%s %s [0x%p:%s] execution.\n",
      FUNC_2(VAR_2),
      VAR_3 ? "Begin" : "End", VAR_4, VAR_5));
 } else {
  FUNC_0((VAR_0,
      "%s %s [0x%p] execution.\n",
      FUNC_2(VAR_2),
      VAR_3 ? "Begin" : "End", VAR_4));
 }
}
