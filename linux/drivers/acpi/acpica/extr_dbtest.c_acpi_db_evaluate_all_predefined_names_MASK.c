
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_db_execute_walk {scalar_t__ count; int max_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,int ,int *,void*,int *) ;
 int FUNC_2 (char*,int *,int ) ;

__attribute__((used)) static void FUNC_3(char *VAR_4)
{
 struct acpi_db_execute_walk VAR_5;

 VAR_5.count = 0;
 VAR_5.max_count = VAR_2;

 if (VAR_4) {
  VAR_5.max_count = FUNC_2(VAR_4, ((void*)0), 0);
 }



 (void)FUNC_1(VAR_1, VAR_0,
      VAR_2,
      VAR_3, ((void*)0),
      (void *)&VAR_5, ((void*)0));

 FUNC_0("Evaluated %u predefined names in the namespace\n",
         VAR_5.count);
}
