
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tpm_space {scalar_t__* context_tbl; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;

__attribute__((used)) static u32 FUNC_1(struct tpm_space *VAR_1, u32 VAR_2, bool VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1->context_tbl); VAR_4++) {
  if (VAR_3) {
   if (!VAR_1->context_tbl[VAR_4]) {
    VAR_1->context_tbl[VAR_4] = VAR_2;
    break;
   }
  } else if (VAR_1->context_tbl[VAR_4] == VAR_2)
   break;
 }

 if (VAR_4 == FUNC_0(VAR_1->context_tbl))
  return 0;

 return VAR_0 | (0xFFFFFF - VAR_4);
}
