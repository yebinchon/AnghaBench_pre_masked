
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_index ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ git_diff_options ;
typedef int git_diff ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int *,int *,TYPE_1__*) ;
 int FUNC_3 (int **,int *,int ,int *,TYPE_1__*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int *) ;
 int FUNC_10 (int **,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;

__attribute__((used)) static void *FUNC_13(void *VAR_5)
{
 int VAR_6 = *(int *)VAR_5;
 git_diff_options VAR_7 = VAR_0;
 git_diff *VAR_8 = ((void*)0);
 git_index *VAR_9 = ((void*)0);
 git_repository *VAR_10;

 FUNC_0(FUNC_10(&VAR_10, FUNC_11(VAR_4)));
 FUNC_0(FUNC_9(&VAR_9, VAR_10));


 if (VAR_6 == 0) {
  int VAR_11;

  for (VAR_11 = 0; VAR_11 < 300; ++VAR_11) {
   switch (VAR_11 & 0x03) {
   case 0: (void)FUNC_5(VAR_9, "new_file"); break;
   case 1: (void)FUNC_7(VAR_9, "modified_file"); break;
   case 2: (void)FUNC_7(VAR_9, "new_file"); break;
   case 3: (void)FUNC_5(VAR_9, "modified_file"); break;
   }
   FUNC_12();
  }

  goto done;
 }



 switch (VAR_6 & 0x03) {
 case 0: ;
  FUNC_0(FUNC_2(&VAR_8, VAR_10, VAR_9, &VAR_7));
  break;
 case 1: ;
  FUNC_0(FUNC_3(&VAR_8, VAR_10, VAR_2, VAR_9, &VAR_7));
  break;
 case 2: ;
  FUNC_0(FUNC_3(&VAR_8, VAR_10, VAR_3, VAR_9, &VAR_7));
  break;
 case 3: ;
  VAR_7.flags |= VAR_1;
  FUNC_0(FUNC_2(&VAR_8, VAR_10, VAR_9, &VAR_7));
  break;
 }



 FUNC_1(VAR_8);

done:
 FUNC_6(VAR_9);
 FUNC_8(VAR_10);
 FUNC_4();

 return VAR_5;
}
