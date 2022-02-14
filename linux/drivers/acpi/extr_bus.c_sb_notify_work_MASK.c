
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
typedef int acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(struct work_struct *VAR_3)
{
 acpi_handle VAR_4;

 FUNC_3(1);






 FUNC_1(((void*)0), "\\_SB", &VAR_4);
 while (1) {
  FUNC_4("Graceful shutdown in progress.\n");
  FUNC_0(VAR_4, VAR_0,
    VAR_1, ((void*)0));
  FUNC_2(VAR_2);
 }
}
