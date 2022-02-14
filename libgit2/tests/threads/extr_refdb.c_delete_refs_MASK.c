
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct th_data {int id; int path; } ;
typedef int name ;
typedef int git_repository ;
typedef int git_reference ;
typedef int git_refdb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct th_data*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ) ;
 int FUNC_9 (int **,int *) ;
 int FUNC_10 (char*,int,char*,int,int) ;

__attribute__((used)) static void *FUNC_11(void *VAR_4)
{
 int VAR_5, VAR_6;
 struct th_data *VAR_7 = (struct th_data *) VAR_4;
 git_reference *VAR_8;
 char VAR_9[128];
 git_repository *VAR_10;

 FUNC_0(VAR_7, FUNC_8(&VAR_10, VAR_7->path));

 for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
  FUNC_10(
   VAR_9, sizeof(VAR_9), "refs/heads/thread-%03d-%02d", (VAR_7->id) & ~0x3, VAR_5);

  if (!FUNC_6(&VAR_8, VAR_10, VAR_9)) {
   do {
    VAR_6 = FUNC_4(VAR_8);
   } while (VAR_6 == VAR_0);

   if (VAR_6 == VAR_1)
    VAR_6 = 0;

   FUNC_0(VAR_7, VAR_6);
   FUNC_5(VAR_8);
  }

  if (VAR_3 && VAR_5 == VAR_2/2) {
   git_refdb *VAR_11;
   FUNC_0(VAR_7, FUNC_9(&VAR_11, VAR_10));
   do {
    VAR_6 = FUNC_2(VAR_11);
   } while (VAR_6 == VAR_0);
   FUNC_0(VAR_7, VAR_6);
   FUNC_3(VAR_11);
  }
 }

 FUNC_7(VAR_10);
 FUNC_1();
 return VAR_4;
}
