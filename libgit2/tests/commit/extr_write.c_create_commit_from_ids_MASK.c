
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_signature ;
typedef int git_oid ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int *,int *,int *,int *,int ,int const*,int,int const**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int ,int,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(
 git_oid *VAR_4,
 const git_oid *VAR_5,
 const git_oid *VAR_6)
{
 git_signature *VAR_7, *VAR_8;
 const git_oid *VAR_9[1];
 int VAR_10;

 FUNC_0(FUNC_3(
  &VAR_8, VAR_1, VAR_0, 123456789, 60));
 FUNC_0(FUNC_3(
  &VAR_7, VAR_1, VAR_0, 987654321, 90));

 VAR_9[0] = VAR_6;

 VAR_10 = FUNC_1(
  VAR_4,
  VAR_2,
  ((void*)0),
  VAR_7,
  VAR_8,
  ((void*)0),
  VAR_3,
  VAR_5,
  1,
  VAR_9);

 FUNC_2(VAR_8);
 FUNC_2(VAR_7);

 return VAR_10;
}
