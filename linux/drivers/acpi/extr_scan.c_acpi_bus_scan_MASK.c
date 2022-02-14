
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,int ,int *,void**) ;
 int FUNC_3 (int ,int ,int ,int (*) (int ,int ,int *,void**),int *,int *,void**) ;

int FUNC_4(acpi_handle VAR_3)
{
 void *VAR_4 = ((void*)0);

 if (FUNC_0(FUNC_2(VAR_3, 0, ((void*)0), &VAR_4)))
  FUNC_3(VAR_0, VAR_3, VAR_1,
        FUNC_2, ((void*)0), ((void*)0), &VAR_4);

 if (VAR_4) {
  FUNC_1(VAR_4);
  return 0;
 }
 return -VAR_2;
}
