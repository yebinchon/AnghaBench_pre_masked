
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_space {int session_buf; int context_buf; } ;
struct tpm_chip {int tpm_mutex; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tpm_chip*,struct tpm_space*) ;
 int FUNC_4 (struct tpm_chip*) ;
 int FUNC_5 (struct tpm_chip*) ;

void FUNC_6(struct tpm_chip *VAR_0, struct tpm_space *VAR_1)
{
 FUNC_1(&VAR_0->tpm_mutex);
 if (!FUNC_4(VAR_0)) {
  FUNC_3(VAR_0, VAR_1);
  FUNC_5(VAR_0);
 }
 FUNC_2(&VAR_0->tpm_mutex);
 FUNC_0(VAR_1->context_buf);
 FUNC_0(VAR_1->session_buf);
}
