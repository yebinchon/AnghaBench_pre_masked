
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef size_t uint32_t ;
typedef size_t uint ;
struct asn_oid {size_t len; int* subs; } ;


 size_t VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(const struct asn_oid *VAR_2, uint VAR_3,
    char *VAR_4, uint8_t *VAR_5)
{
 uint32_t VAR_6;
 int VAR_7;

 if (VAR_2->len - VAR_3 != VAR_2->subs[VAR_3] + 2 + VAR_0
     || VAR_2->subs[VAR_3] >= VAR_1)
  return (-1);

 for (VAR_6 = 0; VAR_6 < VAR_2->subs[VAR_3]; VAR_6++)
  VAR_4[VAR_6] = VAR_2->subs[VAR_3 + VAR_6 + 1];
 VAR_4[VAR_6] = '\0';

 VAR_7 = VAR_3 + VAR_2->subs[VAR_3] + 1;
 if (VAR_2->subs[VAR_7] != VAR_0)
  return (-1);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  VAR_5[VAR_6] = VAR_2->subs[VAR_7 + VAR_6 + 1];

 return (0);
}
