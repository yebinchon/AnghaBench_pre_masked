
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct excludes {int pattern; struct excludes* next; } ;
struct dirent {scalar_t__ d_fileno; char* d_name; } ;


 int VAR_0 ;
 struct excludes* VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_1(const struct dirent *VAR_2)
{
 struct excludes *VAR_3;

 if (VAR_2->d_fileno == 0)
  return (0);


 if (VAR_2->d_name[0] == '.' && (VAR_2->d_name[1] == '\0' ||
     (VAR_2->d_name[1] == '.' && VAR_2->d_name[2] == '\0')))
  return (0);


 for (VAR_3 = VAR_1; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
  if (FUNC_0(VAR_3->pattern, VAR_2->d_name, VAR_0) == 0)
   return (0);

 return (1);
}
