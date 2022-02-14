
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct partition_entry {scalar_t__* index; } ;
struct asn_oid {int len; scalar_t__* subs; } ;



__attribute__((used)) static int
FUNC_0(const struct asn_oid *VAR_0, u_int VAR_1,
    const struct partition_entry *VAR_2)
{
 u_int VAR_3;

 for (VAR_3 = 0; VAR_3 < 2 && VAR_3 < VAR_0->len - VAR_1; VAR_3++) {
  if (VAR_0->subs[VAR_1 + VAR_3] < VAR_2->index[VAR_3])
   return (-1);
  if (VAR_0->subs[VAR_1 + VAR_3] > VAR_2->index[VAR_3])
   return (+1);
 }
 if (VAR_0->len - VAR_1 < 2)
  return (-1);
 if (VAR_0->len - VAR_1 > 2)
  return (+1);

 return (0);
}
