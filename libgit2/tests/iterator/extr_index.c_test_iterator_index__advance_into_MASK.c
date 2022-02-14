
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ git_iterator_options ;
typedef int git_iterator ;
typedef int git_index ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int **,int ,int *,TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ) ;

void FUNC_9(void)
{
 git_iterator *VAR_5;
 git_iterator_options VAR_6 = VAR_2;
 git_index *VAR_7;

 VAR_4 = FUNC_2("icase");

 VAR_6.flags |= VAR_1 |
  VAR_0;

 FUNC_1(FUNC_8(&VAR_7, VAR_4));

 FUNC_1(FUNC_6(&VAR_5, VAR_4, VAR_7, &VAR_6));
 FUNC_3(VAR_5, "B");
 FUNC_3(VAR_5, "D");
 FUNC_3(VAR_5, "F");
 FUNC_3(VAR_5, "H");
 FUNC_3(VAR_5, "J");
 FUNC_3(VAR_5, "L/");
 FUNC_3(VAR_5, "L/1");
 FUNC_3(VAR_5, "L/B");
 FUNC_3(VAR_5, "L/D");
 FUNC_3(VAR_5, "L/a");
 FUNC_3(VAR_5, "L/c");
 FUNC_3(VAR_5, "a");
 FUNC_3(VAR_5, "c");
 FUNC_3(VAR_5, "e");
 FUNC_3(VAR_5, "g");
 FUNC_3(VAR_5, "i");
 FUNC_3(VAR_5, "k/");
 FUNC_3(VAR_5, "k/1");
 FUNC_3(VAR_5, "k/B");
 FUNC_3(VAR_5, "k/D");
 FUNC_3(VAR_5, "k/a");
 FUNC_3(VAR_5, "k/c");

 FUNC_0(VAR_3, FUNC_5(((void*)0), VAR_5));
 FUNC_7(VAR_5);
 FUNC_4(VAR_7);
}
