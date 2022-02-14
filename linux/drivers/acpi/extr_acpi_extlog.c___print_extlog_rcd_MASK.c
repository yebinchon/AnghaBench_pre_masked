
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_hest_generic_status {scalar_t__ error_severity; } ;
typedef int pfx_seq ;
typedef int atomic_t ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (char*,struct acpi_hest_generic_status*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int,char*,char const*,unsigned int) ;

__attribute__((used)) static void FUNC_4(const char *VAR_3,
          struct acpi_hest_generic_status *VAR_4, int VAR_5)
{
 static atomic_t VAR_6;
 unsigned int VAR_7;
 char VAR_8[64];

 if (!VAR_3) {
  if (VAR_4->error_severity <= VAR_0)
   VAR_3 = VAR_2;
  else
   VAR_3 = VAR_1;
 }
 VAR_7 = FUNC_0(&VAR_6);
 FUNC_3(VAR_8, sizeof(VAR_8), "%s{%u}", VAR_3, VAR_7);
 FUNC_2("%s""Hardware error detected on CPU%d\n", VAR_8, VAR_5);
 FUNC_1(VAR_8, VAR_4);
}
