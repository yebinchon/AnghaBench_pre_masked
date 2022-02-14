
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ gss_OID ;
typedef int bool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (char const*) ;

bool_t
FUNC_2(const char *VAR_4, gss_OID *VAR_5)
{
 gss_OID VAR_6 = FUNC_1(VAR_4);

 if (VAR_6) {
  *VAR_5 = VAR_6;
  return (VAR_3);
 }
 FUNC_0(VAR_2, VAR_0);
 return (VAR_1);
}
