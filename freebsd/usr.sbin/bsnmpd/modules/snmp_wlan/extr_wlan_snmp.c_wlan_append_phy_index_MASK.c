
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint ;
struct asn_oid {int len; int* subs; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1(struct asn_oid *VAR_0, uint VAR_1, char *VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4;

 VAR_0->len = VAR_1 + FUNC_0(VAR_2) + 2;
 VAR_0->subs[VAR_1] = FUNC_0(VAR_2);
 for (VAR_4 = 1; VAR_4 <= FUNC_0(VAR_2); VAR_4++)
  VAR_0->subs[VAR_1 + VAR_4] = VAR_2[VAR_4 - 1];
 VAR_0->subs[VAR_1 + FUNC_0(VAR_2) + 1] = VAR_3;
}
