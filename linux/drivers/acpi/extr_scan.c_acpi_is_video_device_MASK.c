
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ,int ,int *,long*,int *) ;

long FUNC_2(acpi_handle VAR_6)
{
 long VAR_7 = 0;


 if (FUNC_0(VAR_6, "_DOD") || FUNC_0(VAR_6, "_DOS"))
  VAR_7 |= VAR_3;


 if (FUNC_0(VAR_6, "_ROM"))
  VAR_7 |= VAR_4;


 if (FUNC_0(VAR_6, "_VPO") &&
     FUNC_0(VAR_6, "_GPD") &&
     FUNC_0(VAR_6, "_SPD"))
  VAR_7 |= VAR_2;


 if (VAR_7)
  FUNC_1(VAR_0, VAR_6,
        VAR_1, VAR_5, ((void*)0),
        &VAR_7, ((void*)0));

 return VAR_7;
}
