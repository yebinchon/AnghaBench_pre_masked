
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_space {int * context_tbl; } ;
struct tpm_chip {struct tpm_space work_space; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct tpm_chip*,int ) ;
 int FUNC_2 (struct tpm_chip*,struct tpm_space*) ;

void FUNC_3(struct tpm_chip *VAR_0)
{
 struct tpm_space *VAR_1 = &VAR_0->work_space;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->context_tbl); VAR_2++)
  if (VAR_1->context_tbl[VAR_2] && ~VAR_1->context_tbl[VAR_2])
   FUNC_1(VAR_0, VAR_1->context_tbl[VAR_2]);

 FUNC_2(VAR_0, VAR_1);
}
