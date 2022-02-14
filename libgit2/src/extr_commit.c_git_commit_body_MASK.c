
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* body; } ;
typedef TYPE_1__ git_commit ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char const) ;
 char const* FUNC_2 (char const*,int) ;
 char* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char const*) ;

const char *FUNC_5(git_commit *VAR_0)
{
 const char *VAR_1, *VAR_2;

 FUNC_0(VAR_0);

 if (!VAR_0->body) {

  for (VAR_1 = FUNC_3(VAR_0); *VAR_1; ++VAR_1)
   if (VAR_1[0] == '\n' && (!VAR_1[1] || VAR_1[1] == '\n'))
    break;


  for (; *VAR_1; ++VAR_1)
   if (!FUNC_1(*VAR_1))
    break;
  for (VAR_2 = VAR_1 + FUNC_4(VAR_1) - 1; VAR_1 <= VAR_2; --VAR_2)
   if (!FUNC_1(*VAR_2))
    break;

  if (*VAR_1)
   VAR_0->body = FUNC_2(VAR_1, VAR_2 - VAR_1 + 1);
 }

 return VAR_0->body;
}
