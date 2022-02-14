
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef size_t uint32_t ;
typedef size_t uint ;
struct asn_oid {size_t len; int* subs; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1(struct asn_oid *VAR_1, uint VAR_2, char *VAR_3,
    uint8_t *VAR_4, uint8_t *VAR_5)
{
 uint32_t VAR_6;

 VAR_1->len = VAR_2 + FUNC_0(VAR_3) + FUNC_0(VAR_4) + VAR_0 + 3;
 VAR_1->subs[VAR_2] = FUNC_0(VAR_3);
 for (VAR_6 = 1; VAR_6 <= FUNC_0(VAR_3); VAR_6++)
  VAR_1->subs[VAR_2 + VAR_6] = VAR_3[VAR_6 - 1];

 VAR_2 += FUNC_0(VAR_3) + 1;
 VAR_1->subs[VAR_2] = FUNC_0(VAR_4);
 for (VAR_6 = 1; VAR_6 <= FUNC_0(VAR_4); VAR_6++)
  VAR_1->subs[VAR_2 + VAR_6] = VAR_4[VAR_6 - 1];

 VAR_2 += FUNC_0(VAR_4) + 1;
 VAR_1->subs[VAR_2] = VAR_0;
 for (VAR_6 = 1; VAR_6 <= VAR_0; VAR_6++)
  VAR_1->subs[VAR_2 + VAR_6] = VAR_5[VAR_6 - 1];
}
