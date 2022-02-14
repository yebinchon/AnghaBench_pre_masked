
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct snmp_toolinfo {int dummy; } ;
struct snmp_pdu {size_t nbindings; TYPE_1__* bindings; } ;
struct snmp_object {int info; } ;
struct asn_oid {int dummy; } ;
typedef int int32_t ;
struct TYPE_3__ {int var; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct snmp_toolinfo*) ;
 int FUNC_1 (struct snmp_toolinfo*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct asn_oid*,int *) ;
 int FUNC_3 (int *,char*) ;
 struct snmp_object* FUNC_4 (int,int) ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (struct snmp_object*) ;
 scalar_t__ FUNC_7 (struct snmp_toolinfo*,struct snmp_object*,TYPE_1__*) ;
 int FUNC_8 (struct snmp_toolinfo*,TYPE_1__*,int ) ;
 int FUNC_9 (struct snmp_toolinfo*,struct snmp_object*) ;
 int VAR_2 ;

int32_t
FUNC_10(struct snmp_toolinfo *VAR_3, struct snmp_pdu *VAR_4,
    struct asn_oid *VAR_5)
{
 struct snmp_object *VAR_6;
 char VAR_7[VAR_0];
 int32_t VAR_8;
 uint32_t VAR_9;

 if ((VAR_6 = FUNC_4(1, sizeof(struct snmp_object))) == ((void*)0))
  return (-1);

 VAR_9 = VAR_8 = 0;
 while (VAR_9 < VAR_4->nbindings) {
  if (VAR_5 != ((void*)0) && !(FUNC_2(VAR_5,
      &(VAR_4->bindings[VAR_9].var))))
   break;

  if (FUNC_0(VAR_3) != VAR_1) {
   if (!FUNC_1(VAR_3) &&
       (FUNC_7(VAR_3, VAR_6,
       &(VAR_4->bindings[VAR_9])) > 0))
    FUNC_9(VAR_3, VAR_6);
   else {
    FUNC_3(&(VAR_4->bindings[VAR_9].var), VAR_7);
    FUNC_5(VAR_2, "%s", VAR_7);
   }
  }
  VAR_8 |= FUNC_8(VAR_3, &(VAR_4->bindings[VAR_9]),
      VAR_6->info);
  VAR_9++;
 }

 FUNC_6(VAR_6);
 VAR_6 = ((void*)0);

 if (VAR_8)
  return (-1);

 return (VAR_9);
}
