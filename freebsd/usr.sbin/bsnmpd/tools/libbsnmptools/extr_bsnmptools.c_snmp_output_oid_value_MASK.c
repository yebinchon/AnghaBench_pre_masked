
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snmp_toolinfo {int dummy; } ;
struct TYPE_4__ {int var; } ;
struct snmp_object {TYPE_2__* info; TYPE_1__ val; } ;
struct asn_oid {int dummy; } ;
struct TYPE_6__ {char* str; } ;
struct TYPE_5__ {char* string; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct snmp_toolinfo*) ;
 int FUNC_1 (struct snmp_toolinfo*) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (int *,struct asn_oid*) ;
 int FUNC_3 (struct asn_oid*,char*) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (struct snmp_object*,int ,int) ;
 scalar_t__ FUNC_6 (struct snmp_toolinfo*,struct snmp_object*) ;
 scalar_t__ FUNC_7 (struct snmp_toolinfo*,struct snmp_object*) ;
 scalar_t__ FUNC_8 (struct snmp_toolinfo*,struct snmp_object*) ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;

__attribute__((used)) static void
FUNC_9(struct snmp_toolinfo *VAR_5, struct asn_oid *VAR_6)
{
 char VAR_7[VAR_0];
 struct snmp_object VAR_8;

 if (FUNC_0(VAR_5) == VAR_1)
  FUNC_4(VAR_3, "%s : ", VAR_4[VAR_2].str);

 if(!FUNC_1(VAR_5)) {
  FUNC_5(&VAR_8, 0, sizeof(struct snmp_object));
  FUNC_2(&(VAR_8.val.var), VAR_6);

  if (FUNC_6(VAR_5, &VAR_8) > 0)
   FUNC_4(VAR_3, "%s" , VAR_8.info->string);
  else if (FUNC_8(VAR_5, &VAR_8) > 0)
   FUNC_4(VAR_3, "%s" , VAR_8.info->string);
  else if (FUNC_7(VAR_5, &VAR_8) > 0)
   FUNC_4(VAR_3, "%s" , VAR_8.info->string);
  else {
   (void) FUNC_3(VAR_6, VAR_7);
   FUNC_4(VAR_3, "%s", VAR_7);
  }
 } else {
  (void) FUNC_3(VAR_6, VAR_7);
  FUNC_4(VAR_3, "%s", VAR_7);
 }
}
