
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argv_array {char const** argv; int argc; int alloc; } ;


 int FUNC_0 (char const**,int,int ) ;
 char const** VAR_0 ;

__attribute__((used)) static void FUNC_1(struct argv_array *VAR_1, const char *VAR_2)
{
 if (VAR_1->argv == VAR_0)
  VAR_1->argv = ((void*)0);

 FUNC_0(VAR_1->argv, VAR_1->argc + 2, VAR_1->alloc);
 VAR_1->argv[VAR_1->argc++] = VAR_2;
 VAR_1->argv[VAR_1->argc] = ((void*)0);
}
