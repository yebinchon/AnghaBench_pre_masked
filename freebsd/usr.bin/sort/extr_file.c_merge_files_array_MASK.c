
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_header {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct file_header**) ;
 int FUNC_3 (struct file_header**,char const*,size_t) ;
 int FUNC_4 (size_t,struct file_header**,int *) ;
 int * FUNC_5 (char const*,char*) ;
 int FUNC_6 (struct file_header**) ;
 struct file_header** FUNC_7 (size_t) ;

__attribute__((used)) static void
FUNC_8(size_t VAR_0, const char **VAR_1, const char *VAR_2)
{

 if (VAR_1 && VAR_2) {
  struct file_header **VAR_3;
  FILE *VAR_4;
  size_t VAR_5;

  VAR_4 = FUNC_5(VAR_2, "w");

  if (VAR_4 == ((void*)0))
   FUNC_1(2, ((void*)0));

  VAR_3 = FUNC_7((VAR_0 + 1) * sizeof(struct file_header *));

  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   FUNC_3(VAR_3 + VAR_5, VAR_1[VAR_5], (size_t) VAR_5);

  FUNC_4(VAR_0, VAR_3, VAR_4);

  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   FUNC_2(VAR_3 + VAR_5);

  FUNC_6(VAR_3);

  FUNC_0(VAR_4, VAR_2);
 }
}
