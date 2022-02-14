
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ec {int flags; int gpe; int handle; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct acpi_ec*,int,int ) ;
 int VAR_5 ;
 int FUNC_2 (struct acpi_ec*,int) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct acpi_ec *VAR_6)
{
 if (FUNC_7(VAR_1, &VAR_6->flags)) {
  if (FUNC_0(FUNC_3(VAR_6->handle,
     VAR_0, &VAR_5)))
   FUNC_6("failed to remove space handler\n");
  FUNC_5(VAR_1, &VAR_6->flags);
 }
 FUNC_2(VAR_6, 0);

 if (FUNC_7(VAR_3, &VAR_6->flags)) {
  if (FUNC_0(FUNC_4(((void*)0), VAR_6->gpe,
     &VAR_4)))
   FUNC_6("failed to remove gpe handler\n");
  FUNC_5(VAR_3, &VAR_6->flags);
 }
 if (FUNC_7(VAR_2, &VAR_6->flags)) {
  FUNC_1(VAR_6, 1, 0);
  FUNC_5(VAR_2, &VAR_6->flags);
 }
}
