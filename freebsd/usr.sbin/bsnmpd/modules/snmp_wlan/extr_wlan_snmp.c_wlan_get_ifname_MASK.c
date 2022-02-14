
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef size_t uint32_t ;
typedef size_t uint ;
struct asn_oid {size_t len; size_t* subs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,scalar_t__) ;

__attribute__((used)) static uint8_t *
FUNC_1(const struct asn_oid *VAR_1, uint VAR_2, uint8_t *VAR_3)
{
 uint32_t VAR_4;

 FUNC_0(VAR_3, 0, VAR_0);

 if (VAR_1->len - VAR_2 != VAR_1->subs[VAR_2] + 1 || VAR_1->subs[VAR_2] >= VAR_0)
  return (((void*)0));

 for (VAR_4 = 0; VAR_4 < VAR_1->subs[VAR_2]; VAR_4++)
  VAR_3[VAR_4] = VAR_1->subs[VAR_2 + VAR_4 + 1];
 VAR_3[VAR_4] = '\0';

 return (VAR_3);
}
