
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char** strings; int count; } ;
typedef TYPE_1__ git_strarray ;
struct TYPE_7__ {char** strings; int count; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (char*) ;

void FUNC_5(void)
{
 git_strarray VAR_3, VAR_4;

 char *VAR_5[] = { "staged_changes", "staged_changes_file_deleted" };
 char *VAR_6[] = { "55d316c9ba708999f1918e9677d01dfcae69c6b9",
  "a6be623522ce87a1d862128ac42672604f7b468b" };
 char *VAR_7[] = { "32504b727382542f9f089e24fddac5e78533e96c",
  "061d42a44cacde5726057b67558821d95db96f19" };

 FUNC_4("status");

 VAR_0.strings = VAR_5;
 VAR_0.count = 2;
 VAR_3.strings = VAR_6;
 VAR_3.count = 2;
 VAR_4.strings = VAR_7;
 VAR_4.count = 2;

 FUNC_1(FUNC_3(&VAR_2, VAR_1, "0017bd4"));
 FUNC_0(&VAR_0, 1, &VAR_3);

 FUNC_1(FUNC_2(VAR_1, VAR_2, &VAR_0));

 FUNC_0(&VAR_0, 1, &VAR_4);
}
