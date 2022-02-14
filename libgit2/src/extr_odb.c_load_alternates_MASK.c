
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_odb ;
struct TYPE_7__ {scalar_t__ ptr; } ;
typedef TYPE_1__ git_buf ;


 char const* VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 char* FUNC_0 (char**,char*) ;
 char* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char const*,char const*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__) ;
 int FUNC_5 (int *,char const*,int,int) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(git_odb *VAR_3, const char *VAR_4, int VAR_5)
{
 git_buf VAR_6 = VAR_2;
 git_buf VAR_7 = VAR_2;
 char *VAR_8;
 const char *VAR_9;
 int VAR_10 = 0;


 if (VAR_5 > VAR_1)
  return 0;

 if (FUNC_3(&VAR_6, VAR_4, VAR_0) < 0)
  return -1;

 if (FUNC_6(VAR_6.ptr) == 0) {
  FUNC_2(&VAR_6);
  return 0;
 }

 if (FUNC_4(&VAR_7, VAR_6.ptr) < 0) {
  FUNC_2(&VAR_6);
  return -1;
 }

 VAR_8 = (char *)VAR_7.ptr;


 while ((VAR_9 = FUNC_0(&VAR_8, "\r\n")) != ((void*)0)) {
  if (*VAR_9 == '\0' || *VAR_9 == '#')
   continue;






  if (*VAR_9 == '.' && !VAR_5) {
   if ((VAR_10 = FUNC_3(&VAR_6, VAR_4, VAR_9)) < 0)
    break;
   VAR_9 = FUNC_1(&VAR_6);
  }

  if ((VAR_10 = FUNC_5(VAR_3, VAR_9, 1, VAR_5 + 1)) < 0)
   break;
 }

 FUNC_2(&VAR_6);
 FUNC_2(&VAR_7);

 return VAR_10;
}
