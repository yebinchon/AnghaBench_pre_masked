
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_revwalk ;
typedef int git_oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int const*,int*,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(git_revwalk *VAR_3,
  const int VAR_4[][VAR_1], int VAR_5)
{
 git_oid VAR_6;
 int VAR_7;
 int VAR_8[VAR_1];

 for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7)
  VAR_8[VAR_7] = -1;

 VAR_7 = 0;
 while (FUNC_1(&VAR_6, VAR_3) == 0) {
  VAR_8[VAR_7++] = FUNC_0(&VAR_6);






 }

 for (VAR_7 = 0; VAR_7 < VAR_5; ++VAR_7)
  if (FUNC_2(VAR_4[VAR_7],
    VAR_8, VAR_2) == 0)
   return 0;

 return VAR_0;
}
