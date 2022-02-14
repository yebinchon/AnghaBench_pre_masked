
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_toolinfo {int dummy; } ;
struct asn_oid {int dummy; } ;
typedef int int32_t ;


 int VAR_0 ;



 struct asn_oid VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char**,char const* const*,char**,char**) ;
 int FUNC_2 (struct asn_oid*,int ,int) ;
 int FUNC_3 (struct snmp_toolinfo*,char*,char*,struct asn_oid*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,struct asn_oid*) ;
 int FUNC_6 (char*,char*,int ) ;
 int VAR_3 ;
 int FUNC_7 (char*,...) ;

int32_t
FUNC_8(struct snmp_toolinfo *VAR_4, char *VAR_5)
{
 char VAR_6[VAR_2 + 1];
 int32_t VAR_7, VAR_8, VAR_9;
 struct asn_oid VAR_10;
 char *VAR_11, *VAR_12;
 const char *const VAR_13[] = {
  "cut",
  "path",
  "file",
  ((void*)0)
 };





 FUNC_0(VAR_5 != ((void*)0));
 VAR_6[0] = '\0';
 FUNC_2(&VAR_10, 0, sizeof(struct asn_oid));
 VAR_7 = -1;

 while ((VAR_9 = FUNC_1(&VAR_5, VAR_13, &VAR_11, &VAR_12)) != VAR_0) {
  switch (VAR_9) {
      case 0:
   if (VAR_11 == ((void*)0)) {
    FUNC_7("Suboption 'cut' requires an argument");
    return (-1);
   } else {
    if (FUNC_5(VAR_11, &VAR_10) < 0)
     return (-1);
   }
   VAR_7 = 1;
   break;

      case 1:
   if ((VAR_8 = FUNC_4(VAR_11)) < 0)
    return (-1);
   FUNC_6(VAR_6, VAR_11, VAR_8 + 1);
   break;

      case 2:
   if (VAR_11 == ((void*)0))
    return (-1);
   if (VAR_7 == -1)
    VAR_8 = FUNC_3(VAR_4, VAR_11, VAR_6, &VAR_1);
   else
    VAR_8 = FUNC_3(VAR_4, VAR_11, VAR_6, &VAR_10);
   if (VAR_8 < 0)
    return (-1);
   break;

      default:
   FUNC_7("Unknown suboption - '%s'", VAR_3);
   return (-1);
  }
 }


 return (2);
}
