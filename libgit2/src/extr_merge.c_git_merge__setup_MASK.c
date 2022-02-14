
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_annotated_commit ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int const**,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int const**,size_t) ;

int FUNC_6(
 git_repository *VAR_0,
 const git_annotated_commit *VAR_1,
 const git_annotated_commit *VAR_2[],
 size_t VAR_3)
{
 int VAR_4 = 0;

 FUNC_0 (VAR_0 && VAR_1 && VAR_2);

 if ((VAR_4 = FUNC_2(VAR_0, FUNC_1(VAR_1))) == 0 &&
  (VAR_4 = FUNC_3(VAR_0, VAR_2, VAR_3)) == 0 &&
  (VAR_4 = FUNC_4(VAR_0)) == 0) {
  VAR_4 = FUNC_5(VAR_0, VAR_2, VAR_3);
 }

 return VAR_4;
}
