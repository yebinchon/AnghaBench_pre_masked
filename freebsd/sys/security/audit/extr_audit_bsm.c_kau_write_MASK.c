
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au_token {scalar_t__ len; } ;
struct au_record {int len; int token_q; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,struct au_token*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct au_record *VAR_1, struct au_token *VAR_2)
{

 FUNC_0(VAR_2 != ((void*)0), ("kau_write: tok == NULL"));

 FUNC_1(&VAR_1->token_q, VAR_2, VAR_0);
 VAR_1->len += VAR_2->len;
}
