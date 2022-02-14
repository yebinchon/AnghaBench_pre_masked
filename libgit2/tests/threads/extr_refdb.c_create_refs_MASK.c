
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct th_data {int id; int path; } ;
typedef int name ;
typedef int git_repository ;
typedef int git_reference ;
typedef int git_refdb ;
typedef int git_oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct th_data*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int *,char*,int *,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ) ;
 int FUNC_9 (int **,int *) ;
 int FUNC_10 (char*,int,char*,int ,int) ;

__attribute__((used)) static void *FUNC_11(void *VAR_3)
{
 int VAR_4, VAR_5;
 struct th_data *VAR_6 = (struct th_data *) VAR_3;
 git_oid VAR_7;
 char VAR_8[128];
 git_reference *VAR_9[VAR_1];
 git_repository *VAR_10;

 FUNC_0(VAR_6, FUNC_8(&VAR_10, VAR_6->path));

 do {
  VAR_5 = FUNC_6(&VAR_7, VAR_10, "HEAD");
 } while (VAR_5 == VAR_0);
 FUNC_0(VAR_6, VAR_5);

 for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) {
  FUNC_10(VAR_8, sizeof(VAR_8), "refs/heads/thread-%03d-%02d", VAR_6->id, VAR_4);
  do {
   VAR_5 = FUNC_4(&VAR_9[VAR_4], VAR_10, VAR_8, &VAR_7, 0, ((void*)0));
  } while (VAR_5 == VAR_0);
  FUNC_0(VAR_6, VAR_5);

  if (VAR_2 && VAR_4 == VAR_1/2) {
   git_refdb *VAR_11;
   FUNC_0(VAR_6, FUNC_9(&VAR_11, VAR_10));
   do {
    VAR_5 = FUNC_2(VAR_11);
   } while (VAR_5 == VAR_0);
   FUNC_0(VAR_6, VAR_5);
   FUNC_3(VAR_11);
  }
 }

 for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4)
  FUNC_5(VAR_9[VAR_4]);

 FUNC_7(VAR_10);

 FUNC_1();
 return VAR_3;
}
