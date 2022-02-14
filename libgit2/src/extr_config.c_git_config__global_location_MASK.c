
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 int VAR_0 ;
 char const VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__ const*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char const*,size_t) ;
 scalar_t__ FUNC_4 (TYPE_1__ const**,int ) ;

int FUNC_5(git_buf *VAR_3)
{
 const git_buf *VAR_4;
 const char *VAR_5, *VAR_6;

 if (FUNC_4(&VAR_4, VAR_2) < 0)
  return -1;


 if (!VAR_4 || !FUNC_2(VAR_4))
  return -1;


 for (VAR_5 = VAR_6 = FUNC_0(VAR_4); *VAR_5; ++VAR_5) {
  if (*VAR_5 == VAR_1 &&
   (VAR_5 <= VAR_6 || VAR_5[-1] != '\\'))
   break;
 }

 if (FUNC_3(VAR_3, VAR_6, (size_t)(VAR_5 - VAR_6)) < 0)
  return -1;

 return FUNC_1(VAR_3, VAR_3->ptr, VAR_0);
}
