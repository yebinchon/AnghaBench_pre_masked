
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpx_board {int * model; } ;


 struct cpx_board* VAR_0 ;
 scalar_t__ FUNC_0 (char*,int *) ;

struct cpx_board *
FUNC_1(char *VAR_1){
 struct cpx_board *VAR_2;
 struct cpx_board *VAR_3;

 VAR_2 = ((void*)0);
 for (VAR_3 = VAR_0; VAR_3->model != ((void*)0); VAR_3++){
  if (FUNC_0(VAR_1, VAR_3->model) == 0) {
   VAR_2 = VAR_3;
   break;
  }
 };

 return VAR_2;
}
