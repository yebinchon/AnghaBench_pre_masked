
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_space {scalar_t__* session_tbl; } ;
struct tpm_chip {int dummy; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (struct tpm_chip*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct tpm_chip *VAR_0, struct tpm_space *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->session_tbl); VAR_2++) {
  if (VAR_1->session_tbl[VAR_2])
   FUNC_1(VAR_0, VAR_1->session_tbl[VAR_2]);
 }
}
