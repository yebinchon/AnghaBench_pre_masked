
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct walk_object {int uninteresting; } ;
typedef int git_packbuilder ;
typedef int git_oid ;


 int FUNC_0 (struct walk_object**,int *,int const*) ;

__attribute__((used)) static int FUNC_1(git_packbuilder *VAR_0, const git_oid *VAR_1)
{
 int VAR_2;
 struct walk_object *VAR_3;

 if ((VAR_2 = FUNC_0(&VAR_3, VAR_0, VAR_1)) < 0)
  return VAR_2;

 VAR_3->uninteresting = 1;

 return 0;
}
