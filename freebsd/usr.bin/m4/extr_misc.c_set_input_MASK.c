
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_file {int lineno; int name; scalar_t__ c; int * file; } ;
typedef int FILE ;


 int FUNC_0 () ;
 int FUNC_1 (char const*) ;

void
FUNC_2(struct input_file *VAR_0, FILE *VAR_1, const char *VAR_2)
{
 VAR_0->file = VAR_1;
 VAR_0->lineno = 1;
 VAR_0->c = 0;
 VAR_0->name = FUNC_1(VAR_2);
 FUNC_0();
}
