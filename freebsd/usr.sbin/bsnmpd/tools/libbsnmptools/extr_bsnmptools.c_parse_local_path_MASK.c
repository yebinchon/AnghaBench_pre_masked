
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int opt_arg ;
typedef int int32_t ;
struct TYPE_2__ {int local_path; } ;
typedef int SNMP_LOCAL_PATH ;


 int FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,char*) ;

int32_t
FUNC_3(char *VAR_1)
{
 FUNC_0(VAR_1 != ((void*)0));

 if (sizeof(VAR_1) > sizeof(SNMP_LOCAL_PATH)) {
  FUNC_2("Filename too long - %s", VAR_1);
  return (-1);
 }

 FUNC_1(VAR_0.local_path, VAR_1, sizeof(SNMP_LOCAL_PATH));
 return (2);
}
