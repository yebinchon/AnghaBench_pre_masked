
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fifolog_file {int fd; int magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fifolog_file**) ;
 char* FUNC_1 (struct fifolog_file*,char const*,int) ;
 struct fifolog_file* FUNC_2 (int) ;
 int FUNC_3 (struct fifolog_file*,struct fifolog_file*,int) ;
 int FUNC_4 (struct fifolog_file*,int ,int) ;

const char *
FUNC_5(struct fifolog_file **VAR_2, const char *VAR_3, int VAR_4)
{
 struct fifolog_file VAR_5, *VAR_6;
 const char *VAR_7;
 int VAR_8;

 VAR_6 = &VAR_5;
 FUNC_4(VAR_6, 0, sizeof *VAR_6);
 VAR_6->fd = -1;
 VAR_7 = FUNC_1(VAR_6, VAR_3, VAR_4);
 VAR_8 = VAR_1;
 if (VAR_7 == ((void*)0)) {
  *VAR_2 = FUNC_2(sizeof *VAR_6);
  if (*VAR_2 != ((void*)0)) {
   FUNC_3(*VAR_2, VAR_6, sizeof *VAR_6);
   (*VAR_2)->magic = VAR_0;
   return (VAR_7);
  }
 }
 FUNC_0(&VAR_6);
 VAR_1 = VAR_8;
 return (VAR_7);
}
