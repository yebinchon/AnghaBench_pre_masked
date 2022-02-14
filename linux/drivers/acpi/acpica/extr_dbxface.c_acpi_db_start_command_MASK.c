
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_parse_object {int dummy; } acpi_parse_object ;
struct acpi_walk_state {int dummy; } ;
typedef scalar_t__ acpi_status ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,struct acpi_walk_state*,union acpi_parse_object*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static acpi_status
FUNC_5(struct acpi_walk_state *VAR_6,
        union acpi_parse_object *VAR_7)
{
 acpi_status VAR_8;







 VAR_5 = VAR_3;
 VAR_8 = VAR_1;

 while (VAR_8 == VAR_1) {



  VAR_8 = FUNC_3();
  if (FUNC_1(VAR_8)) {
   goto error_exit;
  }



  VAR_8 = FUNC_4();
  if (FUNC_1(VAR_8)) {
   goto error_exit;
  }

  VAR_8 =
      FUNC_2(VAR_4, VAR_6,
          VAR_7);
 }



error_exit:
 if (FUNC_1(VAR_8) && VAR_8 != VAR_0) {
  FUNC_0((VAR_2, VAR_8,
    "While parsing/handling command line"));
 }
 return (VAR_8);
}
