
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tpm_space {int * session_buf; int * context_buf; int session_tbl; int context_tbl; } ;
struct TYPE_2__ {int * session_buf; int * context_buf; int session_tbl; int context_tbl; } ;
struct tpm_chip {int last_cc; TYPE_1__ work_space; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct tpm_chip*) ;
 int FUNC_2 (struct tpm_chip*) ;
 int FUNC_3 (struct tpm_chip*,int,int *) ;
 int FUNC_4 (struct tpm_chip*,struct tpm_space*,int *,size_t) ;

int FUNC_5(struct tpm_chip *VAR_1, struct tpm_space *VAR_2, u8 *VAR_3,
         size_t VAR_4)
{
 int VAR_5;
 int VAR_6;

 if (!VAR_2)
  return 0;

 VAR_6 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_0(&VAR_1->work_space.context_tbl, &VAR_2->context_tbl,
        sizeof(VAR_2->context_tbl));
 FUNC_0(&VAR_1->work_space.session_tbl, &VAR_2->session_tbl,
        sizeof(VAR_2->session_tbl));
 FUNC_0(VAR_1->work_space.context_buf, VAR_2->context_buf, VAR_0);
 FUNC_0(VAR_1->work_space.session_buf, VAR_2->session_buf, VAR_0);

 VAR_5 = FUNC_2(VAR_1);
 if (VAR_5) {
  FUNC_1(VAR_1);
  return VAR_5;
 }

 VAR_5 = FUNC_3(VAR_1, VAR_6, VAR_3);
 if (VAR_5) {
  FUNC_1(VAR_1);
  return VAR_5;
 }

 VAR_1->last_cc = VAR_6;
 return 0;
}
