
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_integrity_info {int objects; int nodes; int member_1; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int *,void*,int *) ;

void FUNC_2(void)
{
 struct acpi_integrity_info VAR_4 = { 0, 0 };



 (void)FUNC_1(VAR_1, VAR_0,
      VAR_2, VAR_3, ((void*)0),
      (void *)&VAR_4, ((void*)0));

 FUNC_0("Verified %u namespace nodes with %u Objects\n",
         VAR_4.nodes, VAR_4.objects);
}
