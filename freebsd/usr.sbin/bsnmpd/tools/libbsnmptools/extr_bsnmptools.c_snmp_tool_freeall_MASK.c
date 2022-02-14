
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snmp_toolinfo {int * passwd; } ;
struct TYPE_2__ {int * cport; int * chost; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct snmp_toolinfo*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (struct snmp_toolinfo*) ;
 int FUNC_3 (struct snmp_toolinfo*) ;

void
FUNC_4(struct snmp_toolinfo *VAR_1)
{
 if (VAR_0.chost != ((void*)0)) {
  FUNC_0(VAR_0.chost);
  VAR_0.chost = ((void*)0);
 }

 if (VAR_0.cport != ((void*)0)) {
  FUNC_0(VAR_0.cport);
  VAR_0.cport = ((void*)0);
 }

 FUNC_2(VAR_1);
 FUNC_1(VAR_1);
 FUNC_3(VAR_1);

 if (VAR_1->passwd != ((void*)0)) {
  FUNC_0(VAR_1->passwd);
  VAR_1->passwd = ((void*)0);
 }
}
