
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id_cpuid2_flag; char* id_name; int id_fn; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*,char const*) ;

__attribute__((used)) static bool
FUNC_3(const char *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4); VAR_6++) {
  if (VAR_4[VAR_6].id_cpuid2_flag != 0 &&
      (VAR_1 & VAR_4[VAR_6].id_cpuid2_flag) == 0)
   continue;
  if (FUNC_2(VAR_4[VAR_6].id_name, "acpi") == 0 &&
      VAR_3 == ((void*)0))
   continue;
  if (FUNC_2(VAR_4[VAR_6].id_name, VAR_5))
   continue;
  VAR_2 = VAR_4[VAR_6].id_fn;
  if (VAR_0)
   FUNC_1("CPU idle set to %s\n", VAR_4[VAR_6].id_name);
  return (1);
 }
 return (0);
}
