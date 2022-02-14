
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct snmp_toolinfo {int dummy; } ;
struct index {int syntax; int tc; int snmp_enum; } ;
struct asn_oid {scalar_t__ len; int * subs; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct asn_oid*,struct asn_oid*) ;
 int FUNC_1 (struct asn_oid*,struct asn_oid*,int,scalar_t__) ;
 int FUNC_2 (int *,int *,scalar_t__) ;
 int FUNC_3 (struct asn_oid*,int ,int) ;
 int FUNC_4 (struct snmp_toolinfo*,int ) ;
 int FUNC_5 (struct snmp_toolinfo*,int ) ;
 int FUNC_6 (struct snmp_toolinfo*,int ) ;
 int FUNC_7 (struct snmp_toolinfo*,int ,int ) ;
 int FUNC_8 (struct snmp_toolinfo*,int *) ;
 int FUNC_9 (struct snmp_toolinfo*,int ,struct asn_oid*) ;
 int FUNC_10 (struct snmp_toolinfo*,struct asn_oid*) ;
 int FUNC_11 (struct snmp_toolinfo*,int ) ;

__attribute__((used)) static int32_t
FUNC_12(struct snmp_toolinfo *VAR_2, struct index *VAR_3,
    struct asn_oid *VAR_4)
{
 uint8_t VAR_5[4];
 uint32_t VAR_6 = 1;
 uint64_t VAR_7;
 struct asn_oid VAR_8, VAR_9;

 if (VAR_4->len < VAR_6)
  return (-1);

 FUNC_3(&VAR_8, 0, sizeof(struct asn_oid));
 FUNC_0(&VAR_8, VAR_4);

 switch (VAR_3->syntax) {
     case 132:
  FUNC_7(VAR_2, VAR_3->snmp_enum, VAR_8.subs[0]);
  break;

     case 130:
  if ((VAR_8.subs[0] > VAR_8.len -1 ) || (VAR_8.subs[0] >
      VAR_0))
   return (-1);
  FUNC_9(VAR_2, VAR_3->tc, &VAR_8);
  VAR_6 += VAR_8.subs[0];
  break;

     case 129:
  if ((VAR_8.subs[0] > VAR_8.len -1) || (VAR_8.subs[0] >
      VAR_1))
   return (-1);

  VAR_6 += VAR_8.subs[0];
  FUNC_3(&VAR_9, 0, sizeof(struct asn_oid));
  FUNC_1(&VAR_9, &VAR_8, 1, VAR_6);
  FUNC_10(VAR_2, &VAR_9);
  break;

     case 131:
  if (VAR_8.len < 4)
   return (-1);
  for (VAR_6 = 0; VAR_6 < 4; VAR_6++)
   VAR_5[VAR_6] = VAR_8.subs[VAR_6];

  FUNC_8(VAR_2, VAR_5);
  VAR_6 = 4;
  break;

     case 135:
  FUNC_4(VAR_2, VAR_8.subs[0]);
  break;

     case 133:
  FUNC_6(VAR_2, VAR_8.subs[0]);
  break;

     case 128:
  FUNC_11(VAR_2, VAR_8.subs[0]);
  break;

     case 134:
  if (VAR_4->len < 2)
   return (-1);
  VAR_6 = 2;
  FUNC_2(&VAR_7, VAR_8.subs, VAR_6);
  FUNC_5(VAR_2, VAR_7);
  break;

     default:
  return (-1);
 }

 return (VAR_6);
}
