
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_filespec {char* path; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct diff_filespec *VAR_0, struct diff_filespec *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0->path), VAR_3 = FUNC_0(VAR_1->path);
 while (VAR_2 && VAR_3) {
  char VAR_4 = VAR_0->path[--VAR_2];
  char VAR_5 = VAR_1->path[--VAR_3];
  if (VAR_4 != VAR_5)
   return 0;
  if (VAR_4 == '/')
   return 1;
 }
 return (!VAR_2 || VAR_0->path[VAR_2 - 1] == '/') &&
  (!VAR_3 || VAR_1->path[VAR_3 - 1] == '/');
}
