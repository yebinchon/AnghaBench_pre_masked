
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transaction_buffer {int p; int buff; } ;
struct lev_copyexec_aux_transaction_footer {int sha1; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned char*) ;
 int FUNC_1 (int ,unsigned char*,int) ;
 struct lev_copyexec_aux_transaction_footer* FUNC_2 (struct transaction_buffer*,int ,int) ;

__attribute__((used)) static void FUNC_3 (struct transaction_buffer *VAR_1) {
  unsigned char VAR_2[20];
  FUNC_0 (VAR_1->buff, VAR_1->p, VAR_2);
  struct lev_copyexec_aux_transaction_footer *VAR_3 = FUNC_2 (VAR_1, VAR_0, sizeof (struct lev_copyexec_aux_transaction_footer));
  FUNC_1 (VAR_3->sha1, VAR_2, 20);
}
