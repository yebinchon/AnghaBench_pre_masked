
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int s_i ;
typedef int int32_t ;
typedef int i ;
typedef enum snmp_op { ____Placeholder_snmp_op } snmp_op ;
struct TYPE_2__ {int val; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char**,char*,int ,int ) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int*,size_t*,int*,size_t) ;
 int FUNC_4 (int ,char*,char*,int ) ;

int32_t
FUNC_5(int32_t VAR_6, enum snmp_op VAR_7, int32_t *VAR_8)
{
 char *VAR_9;
 size_t VAR_10, VAR_11;
 int32_t VAR_12, VAR_13;

 if (VAR_6 >= VAR_0)
  return (-2);

 if (VAR_7 == VAR_2) {
  VAR_13 = *VAR_8;
  VAR_11 = sizeof(VAR_13);
 } else
  VAR_11 = 0;

 VAR_10 = sizeof(VAR_12);

 FUNC_0(&VAR_9, "%d%d", VAR_4,
     VAR_3[VAR_6].name);
 if (VAR_9 == ((void*)0))
  return (-1);

 if (FUNC_3(VAR_9, &VAR_12, &VAR_10, (VAR_7 == VAR_2 ? &VAR_13 : ((void*)0)),
     VAR_11) == -1) {
  FUNC_4(VAR_1, "sysctl(%s) failed - %s", VAR_9,
      FUNC_2(VAR_5));
  FUNC_1(VAR_9);
  return (-1);
 }

 VAR_3[VAR_6].val = VAR_12;
 *VAR_8 = VAR_12;

 FUNC_1(VAR_9);

 return (VAR_12);
}
