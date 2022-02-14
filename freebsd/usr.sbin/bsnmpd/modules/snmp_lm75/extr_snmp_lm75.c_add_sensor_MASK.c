
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int temp ;
struct lm75_snmp_sensor {int sysctlidx; int temp; scalar_t__ index; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct lm75_snmp_sensor*,int ) ;
 int VAR_1 ;
 struct lm75_snmp_sensor* FUNC_1 (int,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,char*,int*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct lm75_snmp_sensor*,int) ;
 scalar_t__ FUNC_5 (int*,size_t*,int,char*) ;

__attribute__((used)) static int
FUNC_6(char *VAR_5)
{
 int VAR_6, VAR_7;
 size_t VAR_8;
 struct lm75_snmp_sensor *VAR_9;

 if (FUNC_2(VAR_5, "dev.lm75.%d.temperature", &VAR_6) != 1)
  return (-1);


 VAR_8 = sizeof(VAR_7);
 if (FUNC_5(&VAR_7, &VAR_8, VAR_6, "temperature") != 0)
  return (-1);


 VAR_9 = FUNC_1(1, sizeof(*VAR_9));
 if (VAR_9 == ((void*)0)) {
  FUNC_3(VAR_0, "Unable to allocate %zu bytes for resource",
      sizeof(*VAR_9));
  return (-1);
 }
 VAR_9->index = ++VAR_3;
 VAR_9->sysctlidx = VAR_6;
 VAR_9->temp = (VAR_7 - VAR_1) / 10;
 FUNC_0(&VAR_4, VAR_9, VAR_2);

 FUNC_4(VAR_9, VAR_6);

 return (0);
}
