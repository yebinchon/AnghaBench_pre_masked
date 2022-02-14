
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct asn_oid {int* subs; scalar_t__ len; } ;
typedef int asn_subid_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct asn_oid*,struct asn_oid*) ;
 int VAR_1 ;
 int FUNC_1 (struct asn_oid*,int ,int) ;
 scalar_t__ FUNC_2 (struct asn_oid*,int ) ;
 int FUNC_3 (char*,char**,int) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static char *
FUNC_5(char *VAR_2, struct asn_oid *VAR_3)
{
 char *VAR_4, *VAR_5;
 uint32_t VAR_6, VAR_7, VAR_8;
 struct asn_oid VAR_9;
 int VAR_10;

 if (FUNC_2(VAR_3, (asn_subid_t) VAR_0) < 0)
  return (((void*)0));

 VAR_5 = VAR_2;
 VAR_10 = VAR_1;
 VAR_1 = 0;
 VAR_6 = FUNC_3(VAR_5, &VAR_4, 10);
 if (VAR_1 != 0 || (VAR_6 / 1000) > 9) {
  FUNC_4("Integer value %s not supported", VAR_2);
  VAR_1 = VAR_10;
  return (((void*)0));
 } else
  VAR_1 = VAR_10;

 if (*VAR_4 != '.') {
  FUNC_4("Failed adding oid - %s", VAR_2);
  return (((void*)0));
 }

 FUNC_1(&VAR_9, 0, sizeof(struct asn_oid));
 VAR_9.len = VAR_0;

 for (VAR_7 = 0, VAR_8 = 1000; VAR_7 < 4; VAR_7++) {
  VAR_9.subs[VAR_7] = VAR_6 / VAR_8;
  VAR_6 = VAR_6 % VAR_8;
  VAR_8 = VAR_8 / 10;
 }

 VAR_5 = VAR_4 + 1;
 VAR_10 = VAR_1;
 VAR_1 = 0;
 VAR_6 = FUNC_3(VAR_5, &VAR_4, 10);
 if (VAR_1 != 0 || (VAR_6 / 1000) > 9) {
  FUNC_4("Integer value %s not supported", VAR_2);
  VAR_1 = VAR_10;
  return (((void*)0));
 } else
  VAR_1 = VAR_10;

 for (VAR_7 = 0, VAR_8 = 1000; VAR_7 < 4; VAR_7++) {
  VAR_9.subs[VAR_7 + 4] = VAR_6 / VAR_8;
  VAR_6 = VAR_6 % VAR_8;
  VAR_8 = VAR_8 / 10;
 }

 FUNC_0(VAR_3, &VAR_9);
 return (VAR_4);
}
