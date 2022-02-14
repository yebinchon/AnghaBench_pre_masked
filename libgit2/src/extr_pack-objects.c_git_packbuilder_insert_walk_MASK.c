
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct walk_object {scalar_t__ uninteresting; scalar_t__ seen; } ;
struct TYPE_4__ {int user_input; } ;
typedef TYPE_1__ git_revwalk ;
typedef int git_packbuilder ;
typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,struct walk_object*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct walk_object**,int *,int *) ;

int FUNC_5(git_packbuilder *VAR_1, git_revwalk *VAR_2)
{
 int VAR_3;
 git_oid VAR_4;
 struct walk_object *VAR_5;

 FUNC_0(VAR_1 && VAR_2);

 if ((VAR_3 = FUNC_3(VAR_1, VAR_2->user_input)) < 0)
  return VAR_3;
 while ((VAR_3 = FUNC_1(&VAR_4, VAR_2)) == 0) {
  if ((VAR_3 = FUNC_4(&VAR_5, VAR_1, &VAR_4)) < 0)
   return VAR_3;

  if (VAR_5->seen || VAR_5->uninteresting)
   continue;

  if ((VAR_3 = FUNC_2(VAR_1, VAR_5)) < 0)
   return VAR_3;
 }

 if (VAR_3 == VAR_0)
  VAR_3 = 0;

 return VAR_3;
}
