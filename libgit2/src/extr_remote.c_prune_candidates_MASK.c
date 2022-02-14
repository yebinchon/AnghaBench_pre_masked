
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_vector ;
struct TYPE_7__ {size_t count; char** strings; int member_0; } ;
typedef TYPE_1__ git_strarray ;
struct TYPE_8__ {int repo; } ;
typedef TYPE_2__ git_remote ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_2__*,char const*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static int FUNC_6(git_vector *VAR_0, git_remote *VAR_1)
{
 git_strarray VAR_2 = { 0 };
 size_t VAR_3;
 int VAR_4;

 if ((VAR_4 = FUNC_2(&VAR_2, VAR_1->repo)) < 0)
  return VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2.count; VAR_3++) {
  const char *VAR_5 = VAR_2.strings[VAR_3];
  char *VAR_6;

  if (!FUNC_3(VAR_1, VAR_5))
   continue;

  VAR_6 = FUNC_1(VAR_5);
  FUNC_0(VAR_6);

  if ((VAR_4 = FUNC_5(VAR_0, VAR_6)) < 0)
   goto out;
 }

out:
 FUNC_4(&VAR_2);
 return VAR_4;
}
