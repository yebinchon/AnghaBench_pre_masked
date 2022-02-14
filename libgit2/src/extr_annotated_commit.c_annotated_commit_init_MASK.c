
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_commit ;
struct TYPE_6__ {char* id_str; struct TYPE_6__* description; int commit; int type; } ;
typedef TYPE_1__ git_annotated_commit ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 size_t VAR_1 ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int,int) ;
 TYPE_1__* FUNC_3 (char const*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static int FUNC_7(
 git_annotated_commit **VAR_2,
 git_commit *VAR_3,
 const char *VAR_4)
{
 git_annotated_commit *VAR_5;
 int VAR_6 = 0;

 FUNC_1(VAR_2 && VAR_3);

 *VAR_2 = ((void*)0);

 VAR_5 = FUNC_2(1, sizeof(git_annotated_commit));
 FUNC_0(VAR_5);

 VAR_5->type = VAR_0;

 if ((VAR_6 = FUNC_4(&VAR_5->commit, VAR_3)) < 0)
  goto done;

 FUNC_6(VAR_5->id_str, FUNC_5(VAR_3));
 VAR_5->id_str[VAR_1] = '\0';

 if (!VAR_4)
  VAR_4 = VAR_5->id_str;

 VAR_5->description = FUNC_3(VAR_4);
 FUNC_0(VAR_5->description);

done:
 if (!VAR_6)
  *VAR_2 = VAR_5;

 return VAR_6;
}
