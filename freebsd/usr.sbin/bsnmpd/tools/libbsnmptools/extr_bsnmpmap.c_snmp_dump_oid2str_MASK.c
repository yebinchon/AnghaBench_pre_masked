
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snmp_oid2str {TYPE_1__* table_idx; int snmp_enum; int strlen; int access; int syntax; int string; int var; } ;
typedef int buf ;
struct TYPE_2__ {char* string; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;

void
FUNC_4(struct snmp_oid2str *VAR_2)
{
 char VAR_3[VAR_0];

 if (VAR_2 != ((void*)0)) {
  FUNC_2(VAR_3, 0, sizeof(VAR_3));
  FUNC_1(&(VAR_2->var), VAR_3);
  FUNC_0(VAR_1, "%s - %s - %d - %d - %d", VAR_3, VAR_2->string,
      VAR_2->syntax, VAR_2->access, VAR_2->strlen);
  FUNC_3(VAR_2->snmp_enum);
  FUNC_0(VAR_1,"%s \n", (VAR_2->table_idx == ((void*)0))?"No table":
      VAR_2->table_idx->string);
 }
}
