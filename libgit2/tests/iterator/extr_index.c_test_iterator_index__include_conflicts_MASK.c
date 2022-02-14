
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
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,char*,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,char*,int ) ;
 int VAR_6 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int **,int ,int *,TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int ) ;

void FUNC_10(void)
{
 git_iterator *VAR_7;
 git_iterator_options VAR_8 = VAR_3;
 git_index *VAR_9;

 VAR_8.flags |= VAR_1 |
  VAR_0;

 VAR_6 = FUNC_3("icase");
 FUNC_2(FUNC_9(&VAR_9, VAR_6));

 FUNC_0(VAR_9, "CONFLICT1", "CONFLICT1" ,"CONFLICT1");
 FUNC_0(VAR_9, "ZZZ-CONFLICT2.ancestor", "ZZZ-CONFLICT2.ours", "ZZZ-CONFLICT2.theirs");
 FUNC_0(VAR_9, "ancestor.conflict3", "ours.conflict3", "theirs.conflict3");
 FUNC_0(VAR_9, "zzz-conflict4", "zzz-conflict4", "zzz-conflict4");


 FUNC_2(FUNC_7(&VAR_7, VAR_6, VAR_9, &VAR_8));

 FUNC_4(VAR_7, "B", VAR_4);
 FUNC_4(VAR_7, "D", VAR_4);
 FUNC_4(VAR_7, "F", VAR_4);
 FUNC_4(VAR_7, "H", VAR_4);
 FUNC_4(VAR_7, "J", VAR_4);
 FUNC_4(VAR_7, "L/", VAR_4);
 FUNC_4(VAR_7, "a", VAR_4);
 FUNC_4(VAR_7, "c", VAR_4);
 FUNC_4(VAR_7, "e", VAR_4);
 FUNC_4(VAR_7, "g", VAR_4);
 FUNC_4(VAR_7, "i", VAR_4);
 FUNC_4(VAR_7, "k/", VAR_4);

 FUNC_1(VAR_5, FUNC_6(((void*)0), VAR_7));
 FUNC_8(VAR_7);


 VAR_8.flags |= VAR_2;

 FUNC_2(FUNC_7(&VAR_7, VAR_6, VAR_9, &VAR_8));

 FUNC_4(VAR_7, "B", VAR_4);
 FUNC_4(VAR_7, "CONFLICT1", VAR_4);
 FUNC_4(VAR_7, "CONFLICT1", VAR_4);
 FUNC_4(VAR_7, "CONFLICT1", VAR_4);
 FUNC_4(VAR_7, "D", VAR_4);
 FUNC_4(VAR_7, "F", VAR_4);
 FUNC_4(VAR_7, "H", VAR_4);
 FUNC_4(VAR_7, "J", VAR_4);
 FUNC_4(VAR_7, "L/", VAR_4);
 FUNC_4(VAR_7, "ZZZ-CONFLICT2.ancestor", VAR_4);
 FUNC_4(VAR_7, "ZZZ-CONFLICT2.ours", VAR_4);
 FUNC_4(VAR_7, "ZZZ-CONFLICT2.theirs", VAR_4);
 FUNC_4(VAR_7, "a", VAR_4);
 FUNC_4(VAR_7, "ancestor.conflict3", VAR_4);
 FUNC_4(VAR_7, "c", VAR_4);
 FUNC_4(VAR_7, "e", VAR_4);
 FUNC_4(VAR_7, "g", VAR_4);
 FUNC_4(VAR_7, "i", VAR_4);
 FUNC_4(VAR_7, "k/", VAR_4);
 FUNC_4(VAR_7, "ours.conflict3", VAR_4);
 FUNC_4(VAR_7, "theirs.conflict3", VAR_4);
 FUNC_4(VAR_7, "zzz-conflict4", VAR_4);
 FUNC_4(VAR_7, "zzz-conflict4", VAR_4);
 FUNC_4(VAR_7, "zzz-conflict4", VAR_4);

 FUNC_1(VAR_5, FUNC_6(((void*)0), VAR_7));
 FUNC_8(VAR_7);

 FUNC_5(VAR_9);
}
