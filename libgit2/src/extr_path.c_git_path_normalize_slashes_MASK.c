
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* ptr; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (TYPE_1__*,char const*) ;

int FUNC_1(git_buf *VAR_0, const char *VAR_1)
{
 int VAR_2;
 char *VAR_3;

 if ((VAR_2 = FUNC_0(VAR_0, VAR_1)) < 0)
  return VAR_2;

 for (VAR_3 = VAR_0->ptr; *VAR_3; VAR_3++) {
  if (*VAR_3 == '\\')
   *VAR_3 = '/';
 }

 return 0;
}
