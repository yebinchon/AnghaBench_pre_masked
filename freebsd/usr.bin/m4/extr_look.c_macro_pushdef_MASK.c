
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct macro_definition {struct macro_definition* next; } ;
typedef TYPE_1__* ndptr ;
struct TYPE_3__ {struct macro_definition* d; } ;


 TYPE_1__* FUNC_0 (char const*) ;
 int FUNC_1 (struct macro_definition*,char const*,char const*) ;
 struct macro_definition* FUNC_2 (int,int *) ;

void
FUNC_3(const char *VAR_0, const char *VAR_1)
{
 ndptr VAR_2;
 struct macro_definition *VAR_3;

 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = FUNC_2(sizeof(struct macro_definition), ((void*)0));
 VAR_3->next = VAR_2->d;
 VAR_2->d = VAR_3;
 FUNC_1(VAR_2->d, VAR_1, VAR_0);
}
