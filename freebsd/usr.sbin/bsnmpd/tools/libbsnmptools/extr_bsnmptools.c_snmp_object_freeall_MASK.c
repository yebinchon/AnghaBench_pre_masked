
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snmp_toolinfo {int snmp_objectlist; } ;
struct TYPE_4__ {struct snmp_object* octets; } ;
struct TYPE_5__ {TYPE_1__ octetstring; } ;
struct TYPE_6__ {scalar_t__ syntax; TYPE_2__ v; } ;
struct snmp_object {TYPE_3__ val; } ;


 struct snmp_object* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct snmp_object*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct snmp_toolinfo *VAR_2)
{
 struct snmp_object *VAR_3;

 while ((VAR_3 = FUNC_0(&VAR_2->snmp_objectlist)) != ((void*)0)) {
  FUNC_1(&VAR_2->snmp_objectlist, VAR_1);

  if (VAR_3->val.syntax == VAR_0 &&
      VAR_3->val.v.octetstring.octets != ((void*)0))
   FUNC_2(VAR_3->val.v.octetstring.octets);
  FUNC_2(VAR_3);
 }
}
