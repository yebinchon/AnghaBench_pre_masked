
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (char const**) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,int ) ;

__attribute__((used)) static bool FUNC_3(const char *VAR_0)
{
 static const char *VAR_1[] = {
  "acpi.rsdp",
 };
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++)
  if (FUNC_2(VAR_0, VAR_1[VAR_2], FUNC_1(VAR_1[VAR_2])) == 0)
   return (1);

 return (0);
}
