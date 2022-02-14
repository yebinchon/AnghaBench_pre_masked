
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* u_int ;
struct snmp_toolinfo {int dummy; } ;
struct asn_oid {int dummy; } ;
typedef int int32_t ;


 int VAR_0 ;
 char* VAR_1 ;
 scalar_t__ FUNC_0 (struct snmp_toolinfo*,char*,struct asn_oid const*,int ) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char) ;
 int FUNC_3 (char) ;
 scalar_t__ FUNC_4 (char,int) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static int32_t
FUNC_9(struct snmp_toolinfo *VAR_2, char *VAR_3, char *VAR_4,
    const struct asn_oid *VAR_5)
{
 int32_t VAR_6;
 char VAR_7[VAR_0 + 1];

 if (VAR_3 == ((void*)0))
  return (-1);

 do {
  FUNC_5(VAR_7, 0, VAR_0 + 1);

  if (FUNC_1(*VAR_3) && (VAR_4 == ((void*)0) || VAR_4[0] == '\0')) {
   FUNC_6(VAR_7, VAR_1, VAR_0 + 1);
   VAR_6 = FUNC_7(VAR_1);
  } else if (VAR_4 != ((void*)0)){
   FUNC_6(VAR_7, VAR_4, VAR_0 + 1);
   VAR_6 = FUNC_7(VAR_4);
  } else
   VAR_6 = 0;

  for ( ; VAR_6 < VAR_0; VAR_3++) {
   if (FUNC_4(*VAR_3, VAR_6) > 0) {
    VAR_7[VAR_6++] = *VAR_3;
    continue;
   }

   if (*VAR_3 == ',' )
    VAR_3++;
   else if (*VAR_3 == '\0')
    ;
   else {
    if (!FUNC_2(*VAR_3) || !FUNC_3(*VAR_3))
     FUNC_8("Unexpected character %#2x in"
         " filename", (u_int) *VAR_3);
    else
     FUNC_8("Illegal character '%c' in"
         " filename", *VAR_3);
    return (-1);
   }

   VAR_7[VAR_6]='\0';
   break;
  }

  if ((VAR_6 == VAR_0) && (VAR_7[VAR_0] != '\0')) {
   FUNC_8("Filename %s too long", VAR_7);
   return (-1);
  }

  if (FUNC_0(VAR_2, VAR_7, VAR_5, 0) < 0) {
   FUNC_8("Error adding file %s to list", VAR_7);
   return (-1);
  }
 } while (*VAR_3 != '\0');

 return(1);
}
