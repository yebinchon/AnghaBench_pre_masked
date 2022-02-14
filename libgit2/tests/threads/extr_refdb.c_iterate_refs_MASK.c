
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct th_data {int path; } ;
typedef int git_repository ;
typedef int git_reference_iterator ;
typedef int git_reference ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (struct th_data*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *) ;
 int FUNC_7 (int **,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int ) ;

__attribute__((used)) static void *FUNC_10(void *VAR_2)
{
 struct th_data *VAR_3 = (struct th_data *) VAR_2;
 git_reference_iterator *VAR_4;
 git_reference *VAR_5;
 int VAR_6 = 0, VAR_7;
 git_repository *VAR_8;

 FUNC_2(VAR_3, FUNC_9(&VAR_8, VAR_3->path));
 do {
  VAR_7 = FUNC_6(&VAR_4, VAR_8);
 } while (VAR_7 == VAR_0);
 FUNC_2(VAR_3, VAR_7);

 for (VAR_6 = 0; !FUNC_7(&VAR_5, VAR_4); ++VAR_6) {
  FUNC_0(VAR_5 != ((void*)0));
  FUNC_4(VAR_5);
 }

 if (VAR_1 > 0)
  FUNC_1(VAR_1, VAR_6);

 FUNC_5(VAR_4);

 FUNC_8(VAR_8);
 FUNC_3();
 return VAR_2;
}
