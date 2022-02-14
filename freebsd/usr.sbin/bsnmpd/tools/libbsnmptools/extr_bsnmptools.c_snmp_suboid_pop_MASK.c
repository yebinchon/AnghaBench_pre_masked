
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asn_oid {int len; int* subs; } ;
typedef int int32_t ;
typedef int asn_subid_t ;



int32_t
FUNC_0(struct asn_oid *VAR_0)
{
 asn_subid_t VAR_1;

 if (VAR_0 == ((void*)0))
  return (-1);

 if (VAR_0->len < 1)
  return (-1);

 VAR_1 = VAR_0->subs[--(VAR_0->len)];
 VAR_0->subs[VAR_0->len] = 0;

 return (VAR_1);
}
