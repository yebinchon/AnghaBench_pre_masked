
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__** contents; int length; } ;
typedef TYPE_1__ git_vector ;
struct TYPE_11__ {int name; } ;
typedef TYPE_2__ git_reference ;
struct TYPE_12__ {int worktree; int repo; } ;


 size_t FUNC_0 (TYPE_2__**) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 TYPE_7__ VAR_2 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__**,int ,int ) ;
 int FUNC_6 (int ,int ,int ,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_3 ;

void FUNC_8(void)
{
 git_vector VAR_4 = VAR_1, VAR_5 = VAR_1;
 git_reference *VAR_6[2];
 size_t VAR_7;

 FUNC_3(FUNC_5(&VAR_6[0], VAR_2.repo, VAR_0));
 FUNC_3(FUNC_5(&VAR_6[1], VAR_2.worktree, VAR_0));

 FUNC_3(FUNC_6(VAR_2.repo, VAR_3, 0, &VAR_4));
 FUNC_3(FUNC_6(VAR_2.worktree, VAR_3, 0, &VAR_5));

 FUNC_1(VAR_4.length, FUNC_0(VAR_6));
 FUNC_1(VAR_5.length, FUNC_0(VAR_6));

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_6); VAR_7++) {
  FUNC_2(VAR_6[VAR_7]->name, ((git_reference *) VAR_4.contents[VAR_7])->name);
  FUNC_2(VAR_6[VAR_7]->name, ((git_reference *) VAR_4.contents[VAR_7])->name);
  FUNC_2(VAR_6[VAR_7]->name, ((git_reference *) VAR_5.contents[VAR_7])->name);

  FUNC_4(VAR_6[VAR_7]);
  FUNC_4(VAR_4.contents[VAR_7]);
  FUNC_4(VAR_5.contents[VAR_7]);
 }

 FUNC_7(&VAR_4);
 FUNC_7(&VAR_5);
}
