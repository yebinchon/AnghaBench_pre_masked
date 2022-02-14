
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int *,int *) ;

__attribute__((used)) static int FUNC_2(acpi_handle VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_1(VAR_7, VAR_0,
         &VAR_2, ((void*)0));
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_1(VAR_7, VAR_1,
         &VAR_5, ((void*)0));
 if (VAR_8 == 0) {
  FUNC_0(FUNC_1(VAR_7, VAR_0,
            &VAR_6, ((void*)0)));
  FUNC_0(FUNC_1(VAR_7, VAR_1,
            &VAR_4, ((void*)0)));
 } else {
  FUNC_1(VAR_7, VAR_1,
           &VAR_3, ((void*)0));
 }

 return VAR_8;
}
