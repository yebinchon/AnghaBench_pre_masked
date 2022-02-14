
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argv_array {char const** argv; int argc; } ;


 int FUNC_0 (struct argv_array*,int ) ;
 int FUNC_1 (char const*) ;

const char *FUNC_2(struct argv_array *VAR_0, const char *VAR_1)
{
 FUNC_0(VAR_0, FUNC_1(VAR_1));
 return VAR_0->argv[VAR_0->argc - 1];
}
