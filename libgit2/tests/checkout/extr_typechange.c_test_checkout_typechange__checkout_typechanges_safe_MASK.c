
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_object ;
struct TYPE_4__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int * VAR_4 ;
 int ** VAR_5 ;
 int FUNC_3 (int ,int *,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int **,int ,int *) ;

void FUNC_10(void)
{
 int VAR_6;
 git_object *VAR_7;
 git_checkout_options VAR_8 = VAR_1;

 for (VAR_6 = 0; VAR_5[VAR_6] != ((void*)0); ++VAR_6) {
  FUNC_2(FUNC_9(&VAR_7, VAR_3, VAR_5[VAR_6]));

  VAR_8.checkout_strategy = !VAR_6 ? VAR_0 : VAR_2;

  FUNC_2(FUNC_3(VAR_3, VAR_7, &VAR_8));

  FUNC_2(
   FUNC_8(VAR_3, FUNC_5(VAR_7)));

  FUNC_0(VAR_3, FUNC_5(VAR_7), ((void*)0), 1);

  FUNC_4(VAR_7);

  if (!VAR_4[VAR_6]) {
   FUNC_1(FUNC_7("typechanges"));
   FUNC_1(FUNC_6("typechanges/a"));
   FUNC_1(FUNC_6("typechanges/b"));
   FUNC_1(FUNC_6("typechanges/c"));
   FUNC_1(FUNC_6("typechanges/d"));
   FUNC_1(FUNC_6("typechanges/e"));
  } else {
   FUNC_1(FUNC_7("typechanges"));
   FUNC_1(!FUNC_6("typechanges/a"));
   FUNC_1(!FUNC_6("typechanges/b"));
   FUNC_1(!FUNC_6("typechanges/c"));
   FUNC_1(!FUNC_6("typechanges/d"));
   FUNC_1(!FUNC_6("typechanges/e"));
  }
 }
}
