
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
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,char*,int ) ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int **,int ,int *,TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int ) ;

void FUNC_10(void)
{
 git_iterator *VAR_6;
 git_iterator_options VAR_7 = VAR_2;
 git_index *VAR_8;

 VAR_7.flags |= VAR_1 |
  VAR_0;

 VAR_5 = FUNC_2("icase");
 FUNC_1(FUNC_9(&VAR_8, VAR_5));

 FUNC_3(VAR_8, ((void*)0), 1);

 FUNC_1(FUNC_7(&VAR_6, VAR_5, VAR_8, &VAR_7));

 FUNC_4(VAR_6, "B", VAR_3);
 FUNC_4(VAR_6, "D", VAR_3);
 FUNC_4(VAR_6, "F", VAR_3);
 FUNC_4(VAR_6, "H", VAR_3);
 FUNC_4(VAR_6, "J", VAR_3);
 FUNC_4(VAR_6, "L/", VAR_3);
 FUNC_4(VAR_6, "a", VAR_3);
 FUNC_4(VAR_6, "c", VAR_3);
 FUNC_4(VAR_6, "e", VAR_3);
 FUNC_4(VAR_6, "g", VAR_3);
 FUNC_4(VAR_6, "i", VAR_3);
 FUNC_4(VAR_6, "item0", VAR_3);
 FUNC_4(VAR_6, "item1/", VAR_3);
 FUNC_4(VAR_6, "item2", VAR_3);
 FUNC_4(VAR_6, "item3/", VAR_3);
 FUNC_4(VAR_6, "item4", VAR_3);
 FUNC_4(VAR_6, "item5/", VAR_3);
 FUNC_4(VAR_6, "item6", VAR_3);
 FUNC_4(VAR_6, "item7/", VAR_3);
 FUNC_4(VAR_6, "k/", VAR_3);

 FUNC_0(VAR_4, FUNC_6(((void*)0), VAR_6));
 FUNC_8(VAR_6);
 FUNC_5(VAR_8);
}
