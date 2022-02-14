
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct asn_oid {int dummy; } ;
typedef scalar_t__ int32_t ;
typedef int asn_subid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct asn_oid*,int ) ;
 int FUNC_1 (char*,char**,int) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static char *
FUNC_3(char *VAR_1, struct asn_oid *VAR_2)
{
 char *VAR_3;
 uint64_t VAR_4;
 int32_t VAR_5;

 VAR_5 = VAR_0;
 VAR_0 = 0;

 VAR_4 = FUNC_1(VAR_1, &VAR_3, 10);

 if (VAR_0 != 0) {
  FUNC_2("Integer value %s not supported", VAR_1);
  VAR_0 = VAR_5;
  return (((void*)0));
 }
 VAR_0 = VAR_5;
 if (FUNC_0(VAR_2, (asn_subid_t) (VAR_4 & 0xffffffff)) < 0)
  return (((void*)0));

 if (FUNC_0(VAR_2, (asn_subid_t) (VAR_4 >> 32)) < 0)
  return (((void*)0));

 return (VAR_3);
}
