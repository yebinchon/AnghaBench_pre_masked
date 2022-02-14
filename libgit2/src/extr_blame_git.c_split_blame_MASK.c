
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ suspect; } ;
typedef TYPE_1__ git_blame__entry ;
typedef int git_blame ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_5(git_blame *VAR_0, git_blame__entry *VAR_1, git_blame__entry *VAR_2)
{
 git_blame__entry *VAR_3;

 if (VAR_1[0].suspect && VAR_1[2].suspect) {

  FUNC_2(VAR_2, &VAR_1[0]);


  VAR_3 = FUNC_3(sizeof(*VAR_3));
  FUNC_0(VAR_3);
  FUNC_4(VAR_3, &(VAR_1[2]), sizeof(git_blame__entry));
  FUNC_1(VAR_0, VAR_3);


  VAR_3 = FUNC_3(sizeof(*VAR_3));
  FUNC_0(VAR_3);
  FUNC_4(VAR_3, &(VAR_1[1]), sizeof(git_blame__entry));
  FUNC_1(VAR_0, VAR_3);
 } else if (!VAR_1[0].suspect && !VAR_1[2].suspect) {




  FUNC_2(VAR_2, &VAR_1[1]);
 } else if (VAR_1[0].suspect) {

  FUNC_2(VAR_2, &VAR_1[0]);
  VAR_3 = FUNC_3(sizeof(*VAR_3));
  FUNC_0(VAR_3);
  FUNC_4(VAR_3, &(VAR_1[1]), sizeof(git_blame__entry));
  FUNC_1(VAR_0, VAR_3);
 } else {

  FUNC_2(VAR_2, &VAR_1[1]);
  VAR_3 = FUNC_3(sizeof(*VAR_3));
  FUNC_0(VAR_3);
  FUNC_4(VAR_3, &(VAR_1[2]), sizeof(git_blame__entry));
  FUNC_1(VAR_0, VAR_3);
 }

 return 0;
}
