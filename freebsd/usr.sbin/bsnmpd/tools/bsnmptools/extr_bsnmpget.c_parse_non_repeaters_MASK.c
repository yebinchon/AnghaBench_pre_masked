
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct snmp_toolinfo {int dummy; } ;
typedef int int32_t ;


 int FUNC_0 (struct snmp_toolinfo*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,void*,int) ;
 int FUNC_3 (char*,scalar_t__) ;

__attribute__((used)) static int32_t
FUNC_4(struct snmp_toolinfo *VAR_1, char *VAR_2)
{
 uint32_t VAR_3;

 FUNC_1(VAR_2 != ((void*)0));

 VAR_3 = FUNC_2(VAR_2, (void *) ((void*)0), 10);

 if (VAR_3 > VAR_0) {
  FUNC_3("Non repeaters value greater than %d maximum allowed.",
      VAR_0);
  return (-1);
 }

 FUNC_0(VAR_1, VAR_3);
 return (2);
}
