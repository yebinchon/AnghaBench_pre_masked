
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au_token {struct au_token* data; scalar_t__ len; scalar_t__ used; struct au_token* t_data; int token_q; } ;
struct au_record {struct au_record* data; scalar_t__ len; scalar_t__ used; struct au_record* t_data; int token_q; } ;


 int VAR_0 ;
 struct au_token* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct au_token*,int ) ;
 int FUNC_2 (struct au_token*,int ) ;
 int VAR_1 ;

void
FUNC_3(struct au_record *VAR_2)
{
 struct au_token *VAR_3;


 while ((VAR_3 = FUNC_0(&VAR_2->token_q))) {
  FUNC_1(&VAR_2->token_q, VAR_3, VAR_1);
  FUNC_2(VAR_3->t_data, VAR_0);
  FUNC_2(VAR_3, VAR_0);
 }

 VAR_2->used = 0;
 VAR_2->len = 0;
 FUNC_2(VAR_2->data, VAR_0);
 FUNC_2(VAR_2, VAR_0);
}
