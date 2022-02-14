
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* summary; } ;
typedef TYPE_1__ git_commit ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (char) ;
 char const* FUNC_2 (char*) ;
 char const* FUNC_3 (int *) ;
 int FUNC_4 (int *,char const*,int) ;
 int FUNC_5 (int *,char) ;
 char* FUNC_6 (TYPE_1__*) ;

const char *FUNC_7(git_commit *VAR_1)
{
 git_buf VAR_2 = VAR_0;
 const char *VAR_3, *VAR_4;
 bool VAR_5 = 0;

 FUNC_0(VAR_1);

 if (!VAR_1->summary) {
  for (VAR_3 = FUNC_6(VAR_1), VAR_4 = ((void*)0); *VAR_3; ++VAR_3) {
   char VAR_6 = VAR_3[0];

   if (VAR_6 == '\n' && (!VAR_3[1] || VAR_3[1] == '\n'))
    break;

   else if (FUNC_1(VAR_6)) {
    if(VAR_4 == ((void*)0)) {
     VAR_4 = VAR_3;
     VAR_5 = 0;
    }
    VAR_5 |= VAR_6 == '\n';
   }

   else {

    if (VAR_4) {
     if(VAR_5)
      FUNC_5(&VAR_2, ' ');
     else
      FUNC_4(&VAR_2, VAR_4, (VAR_3 - VAR_4));
     VAR_4 = ((void*)0);
    }

    FUNC_5(&VAR_2, VAR_6);
   }
  }

  VAR_1->summary = FUNC_3(&VAR_2);
  if (!VAR_1->summary)
   VAR_1->summary = FUNC_2("");
 }

 return VAR_1->summary;
}
