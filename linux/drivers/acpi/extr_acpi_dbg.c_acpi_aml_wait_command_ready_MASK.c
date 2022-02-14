
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acpi_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,size_t,int *) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(bool VAR_3,
           char *VAR_4, size_t VAR_5)
{
 acpi_status VAR_6;

 if (VAR_3)
  FUNC_2("\n%1c ", VAR_1);
 else
  FUNC_2("\n%1c ", VAR_0);

 VAR_6 = FUNC_1(VAR_4, VAR_5, ((void*)0));
 if (FUNC_0(VAR_6))
  return -VAR_2;
 return 0;
}
