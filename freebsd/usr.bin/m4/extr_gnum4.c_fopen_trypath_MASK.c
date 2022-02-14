
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_file {int dummy; } ;
typedef int FILE ;


 struct input_file* FUNC_0 (struct input_file*,char const*) ;
 int FUNC_1 () ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (struct input_file*,int *,char const*) ;

struct input_file *
FUNC_4(struct input_file *VAR_0, const char *VAR_1)
{
 FILE *VAR_2;

 VAR_2 = FUNC_2(VAR_1, "r");
 if (VAR_2 != ((void*)0)) {
  FUNC_3(VAR_0, VAR_2, VAR_1);
  return VAR_0;
 }
 if (VAR_1[0] == '/')
  return ((void*)0);

 FUNC_1();

 return FUNC_0(VAR_0, VAR_1);
}
