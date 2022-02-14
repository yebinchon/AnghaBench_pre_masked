
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_toolinfo {int dummy; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snmp_toolinfo*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*,scalar_t__) ;
 int FUNC_4 (char*,char*) ;

int32_t
FUNC_5(struct snmp_toolinfo *VAR_4, char *VAR_5)
{
 FUNC_1(VAR_5 != ((void*)0));

 if (FUNC_2(VAR_5) > FUNC_2("verbose")) {
  FUNC_4( "Invalid output option - %s",VAR_5);
  return (-1);
 }

 if (FUNC_3(VAR_5, "short", FUNC_2(VAR_5)) == 0)
  FUNC_0(VAR_4, VAR_1);
 else if (FUNC_3(VAR_5, "verbose", FUNC_2(VAR_5)) == 0)
  FUNC_0(VAR_4, VAR_3);
 else if (FUNC_3(VAR_5,"tabular", FUNC_2(VAR_5)) == 0)
  FUNC_0(VAR_4, VAR_2);
 else if (FUNC_3(VAR_5, "quiet", FUNC_2(VAR_5)) == 0)
  FUNC_0(VAR_4, VAR_0);
 else {
  FUNC_4( "Invalid output option - %s", VAR_5);
  return (-1);
 }

 return (2);
}
