
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ber_oid {int dummy; } ;
struct ber_element {int dummy; } ;


 struct ber_element* FUNC_0 (struct ber_element*,struct ber_oid*) ;
 int FUNC_1 (char const*,struct ber_oid*) ;

struct ber_element *
FUNC_2(struct ber_element *VAR_0, const char *VAR_1)
{
 struct ber_oid VAR_2;

 if (FUNC_1(VAR_1, &VAR_2) == -1)
  return (((void*)0));

 return (FUNC_0(VAR_0, &VAR_2));
}
