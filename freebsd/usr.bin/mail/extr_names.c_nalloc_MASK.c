
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct name {int n_type; int n_name; int * n_blink; int * n_flink; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;

struct name *
FUNC_2(char VAR_0[], int VAR_1)
{
 struct name *VAR_2;

 VAR_2 = (struct name *)FUNC_0(sizeof(*VAR_2));
 VAR_2->n_flink = ((void*)0);
 VAR_2->n_blink = ((void*)0);
 VAR_2->n_type = VAR_1;
 VAR_2->n_name = FUNC_1(VAR_0);
 return (VAR_2);
}
