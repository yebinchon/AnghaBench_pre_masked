
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ node; } ;
union acpi_generic_state {TYPE_1__ scope; } ;
typedef scalar_t__ u32 ;
typedef int acpi_status ;


 char* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,char const*,int *,char**) ;
 char* FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char*) ;

char *FUNC_8(union acpi_generic_state *VAR_2,
          const char *VAR_3)
{
 acpi_status VAR_4;
 char *VAR_5 = ((void*)0);
 char *VAR_6 = ((void*)0);
 char *VAR_7 = ((void*)0);
 u32 VAR_8 = 0;



 if (VAR_2 && VAR_2->scope.node) {
  VAR_7 =
      FUNC_4(VAR_2->scope.node,
          VAR_1);
  if (VAR_7) {
   VAR_8 = FUNC_7(VAR_7);
  }
 }

 VAR_4 = FUNC_3(VAR_0, VAR_3,
       ((void*)0), &VAR_6);
 if (FUNC_1(VAR_4)) {
  goto cleanup;
 }



 VAR_5 =
     FUNC_0(VAR_8 + FUNC_7(VAR_6) +
     2);
 if (!VAR_5) {
  goto cleanup;
 }



 if (VAR_7 && (*VAR_6 != '\\') && (*VAR_6 != '^')) {
  FUNC_6(VAR_5, VAR_7);
  if (VAR_7[1]) {
   FUNC_6(VAR_5, ".");
  }
 }

 FUNC_5(VAR_6);
 FUNC_6(VAR_5, VAR_6);

cleanup:
 if (VAR_7) {
  FUNC_2(VAR_7);
 }
 if (VAR_6) {
  FUNC_2(VAR_6);
 }

 return (VAR_5);
}
