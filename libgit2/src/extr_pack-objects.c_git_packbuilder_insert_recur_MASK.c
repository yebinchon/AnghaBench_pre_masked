
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_tag ;
struct TYPE_6__ {int repo; } ;
typedef TYPE_1__ git_packbuilder ;
typedef int git_oid ;
typedef int git_object ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int const*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int const*,char const*) ;
 int FUNC_6 (TYPE_1__*,int const*) ;
 int FUNC_7 (TYPE_1__*,int const*) ;
 int * FUNC_8 (int *) ;

int FUNC_9(git_packbuilder *VAR_2, const git_oid *VAR_3, const char *VAR_4)
{
 git_object *VAR_5;
 int VAR_6;

 FUNC_0(VAR_2 && VAR_3);

 if ((VAR_6 = FUNC_3(&VAR_5, VAR_2->repo, VAR_3, VAR_1)) < 0)
  return VAR_6;

 switch (FUNC_4(VAR_5)) {
 case 131:
  VAR_6 = FUNC_5(VAR_2, VAR_3, VAR_4);
  break;
 case 128:
  VAR_6 = FUNC_7(VAR_2, VAR_3);
  break;
 case 130:
  VAR_6 = FUNC_6(VAR_2, VAR_3);
  break;
 case 129:
  if ((VAR_6 = FUNC_5(VAR_2, VAR_3, VAR_4)) < 0)
   goto cleanup;
  VAR_6 = FUNC_9(VAR_2, FUNC_8((git_tag *) VAR_5), ((void*)0));
  break;

 default:
  FUNC_1(VAR_0, "unknown object type");
  VAR_6 = -1;
 }

cleanup:
 FUNC_2(VAR_5);
 return VAR_6;
}
