
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int32_t ;
typedef int git_repository ;
typedef int git_index ;
typedef int git_diff_options ;
typedef int git_diff ;
struct TYPE_2__ {int status; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *,size_t) ;
 int FUNC_6 (int **,int *,int *,int *) ;
 size_t FUNC_7 (int *) ;
 int FUNC_8 (int **,int *,int ,int *,int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,int *) ;
 int FUNC_13 (int **,int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void *FUNC_15(void *VAR_5)
{
 int VAR_6 = *(int *)VAR_5;
 git_repository *VAR_7;
 git_diff_options VAR_8 = VAR_0;
 git_diff *VAR_9 = ((void*)0);
 size_t VAR_10;
 int VAR_11[4] = { 0, 0, 0, 0 };

 FUNC_1(FUNC_13(&VAR_7, FUNC_14(VAR_4)));

 switch (VAR_6 & 0x03) {
 case 0: ;
  FUNC_1(FUNC_6(&VAR_9, VAR_7, ((void*)0), &VAR_8));
  break;
 case 1: ;
  FUNC_1(FUNC_8(&VAR_9, VAR_7, VAR_1, ((void*)0), &VAR_8));
  break;
 case 2: ;
  FUNC_1(FUNC_8(&VAR_9, VAR_7, VAR_2, ((void*)0), &VAR_8));
  break;
 case 3: ;
  {
   git_index *VAR_12;
   FUNC_1(FUNC_12(&VAR_12, VAR_7));
   FUNC_1(FUNC_6(&VAR_9, VAR_7, VAR_12, &VAR_8));
   FUNC_10(VAR_12);
   break;
  }
 }



 VAR_10 = FUNC_7(VAR_9);
 FUNC_2(&VAR_3[0], (int32_t)VAR_10);
 VAR_11[0] = (int)VAR_10;

 while (VAR_10 > 0) {
  switch (FUNC_5(VAR_9, --VAR_10)->status) {
  case 128: VAR_11[1]++; FUNC_3(&VAR_3[1]); break;
  case 130: VAR_11[2]++; FUNC_3(&VAR_3[2]); break;
  case 129: VAR_11[3]++; FUNC_3(&VAR_3[3]); break;
  default: break;
  }
 }

 switch (VAR_6 & 0x03) {
 case 0: case 3:
  FUNC_0(8, VAR_11[0]); FUNC_0(4, VAR_11[1]);
  FUNC_0(0, VAR_11[2]); FUNC_0(4, VAR_11[3]);
  break;
 case 1:
  FUNC_0(12, VAR_11[0]); FUNC_0(3, VAR_11[1]);
  FUNC_0(7, VAR_11[2]); FUNC_0(2, VAR_11[3]);
  break;
 case 2:
  FUNC_0(8, VAR_11[0]); FUNC_0(3, VAR_11[1]);
  FUNC_0(3, VAR_11[2]); FUNC_0(2, VAR_11[3]);
  break;
 }

 FUNC_4(VAR_9);
 FUNC_11(VAR_7);
 FUNC_9();

 return VAR_5;
}
