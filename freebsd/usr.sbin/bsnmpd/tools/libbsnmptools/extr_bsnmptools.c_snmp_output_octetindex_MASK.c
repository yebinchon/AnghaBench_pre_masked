
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef size_t uint32_t ;
typedef scalar_t__ u_char ;
struct snmp_toolinfo {int dummy; } ;
struct asn_oid {size_t* subs; } ;
typedef enum snmp_tc { ____Placeholder_snmp_tc } snmp_tc ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__* FUNC_1 (size_t) ;
 int FUNC_2 (struct snmp_toolinfo*,int,size_t,scalar_t__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_5(struct snmp_toolinfo *VAR_2, enum snmp_tc VAR_3,
    struct asn_oid *VAR_4)
{
 uint32_t VAR_5;
 uint8_t *VAR_6;

 if ((VAR_6 = FUNC_1(VAR_4->subs[0] + 1)) == ((void*)0))
  FUNC_4(VAR_0, "malloc failed - %s", FUNC_3(VAR_1));
 else {
  for (VAR_5 = 0; VAR_5 < VAR_4->subs[0]; VAR_5++)
   VAR_6[VAR_5] = (u_char) (VAR_4->subs[VAR_5 + 1]);

  FUNC_2(VAR_2, VAR_3, VAR_4->subs[0], VAR_6);
  FUNC_0(VAR_6);
 }
}
