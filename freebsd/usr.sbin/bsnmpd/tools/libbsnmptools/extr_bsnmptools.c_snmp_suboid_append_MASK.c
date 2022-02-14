
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asn_oid {scalar_t__ len; int * subs; } ;
typedef int int32_t ;
typedef int asn_subid_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;

int32_t
FUNC_1(struct asn_oid *VAR_1, asn_subid_t VAR_2)
{
 if (VAR_1 == ((void*)0))
  return (-1);

 if (VAR_1->len >= VAR_0) {
  FUNC_0("Oid too long - %u", VAR_1->len);
  return (-1);
 }

 VAR_1->subs[VAR_1->len++] = VAR_2;

 return (1);
}
