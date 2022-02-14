
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trailer_item {int * value; int token; } ;
struct arg_item {int * value; int token; } ;


 int FUNC_0 (struct arg_item*) ;
 struct trailer_item* FUNC_1 (int,int) ;

__attribute__((used)) static struct trailer_item *FUNC_2(struct arg_item *VAR_0)
{
 struct trailer_item *VAR_1 = FUNC_1(sizeof(*VAR_1), 1);
 VAR_1->token = VAR_0->token;
 VAR_1->value = VAR_0->value;
 VAR_0->token = *(VAR_0->value = ((void*)0));
 FUNC_0(VAR_0);
 return VAR_1;
}
