
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ git_iterator_options ;
typedef int git_iterator ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*) ;
 int VAR_4 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int **,int ,int *,int *,TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int) ;

void FUNC_9(void)
{
 git_iterator *VAR_5;
 git_iterator_options VAR_6 = VAR_2;

 VAR_4 = FUNC_2("icase");

 VAR_6.flags |= VAR_1 |
  VAR_0;

 FUNC_3(FUNC_8("icase/Empty", 0777));

 FUNC_1(FUNC_6(&VAR_5, VAR_4, ((void*)0), ((void*)0), &VAR_6));
 FUNC_4(VAR_5, "B");
 FUNC_4(VAR_5, "D");
 FUNC_4(VAR_5, "Empty/");
 FUNC_4(VAR_5, "F");
 FUNC_4(VAR_5, "H");
 FUNC_4(VAR_5, "J");
 FUNC_4(VAR_5, "L/");
 FUNC_4(VAR_5, "L/1");
 FUNC_4(VAR_5, "L/B");
 FUNC_4(VAR_5, "L/D");
 FUNC_4(VAR_5, "L/a");
 FUNC_4(VAR_5, "L/c");
 FUNC_4(VAR_5, "a");
 FUNC_4(VAR_5, "c");
 FUNC_4(VAR_5, "e");
 FUNC_4(VAR_5, "g");
 FUNC_4(VAR_5, "i");
 FUNC_4(VAR_5, "k/");
 FUNC_4(VAR_5, "k/1");
 FUNC_4(VAR_5, "k/B");
 FUNC_4(VAR_5, "k/D");
 FUNC_4(VAR_5, "k/a");
 FUNC_4(VAR_5, "k/c");

 FUNC_0(VAR_3, FUNC_5(((void*)0), VAR_5));
 FUNC_7(VAR_5);
}
