
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au_record {int used; scalar_t__ len; int token_q; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct au_record* FUNC_1 (int,int ,int ) ;

__attribute__((used)) static struct au_record *
FUNC_2(void)
{
 struct au_record *VAR_2;

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0, VAR_1);
 VAR_2->data = ((void*)0);
 FUNC_0(&VAR_2->token_q);
 VAR_2->len = 0;
 VAR_2->used = 1;

 return (VAR_2);
}
