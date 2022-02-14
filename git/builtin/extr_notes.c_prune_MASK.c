
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;
struct notes_tree {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 struct option FUNC_1 () ;
 struct option FUNC_2 (int*,int ) ;
 struct option FUNC_3 (int*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,struct notes_tree*,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct notes_tree*) ;
 int VAR_3 ;
 struct notes_tree* FUNC_8 (char*,int ) ;
 int FUNC_9 (int,char const**,char const*,struct option*,int ,int ) ;
 int FUNC_10 (struct notes_tree*,int) ;
 int VAR_4 ;
 int FUNC_11 (int ,struct option*) ;

__attribute__((used)) static int FUNC_12(int VAR_5, const char **VAR_6, const char *VAR_7)
{
 struct notes_tree *VAR_8;
 int VAR_9 = 0, VAR_10 = 0;
 struct option VAR_11[] = {
  FUNC_2(&VAR_9, FUNC_0("do not remove, show only")),
  FUNC_3(&VAR_10, FUNC_0("report pruned notes")),
  FUNC_1()
 };

 VAR_5 = FUNC_9(VAR_5, VAR_6, VAR_7, VAR_11, VAR_3,
        0);

 if (VAR_5) {
  FUNC_6(FUNC_4("too many parameters"));
  FUNC_11(VAR_3, VAR_11);
 }

 VAR_8 = FUNC_8("prune", VAR_0);

 FUNC_10(VAR_8, (VAR_10 ? VAR_2 : 0) |
  (VAR_9 ? VAR_2|VAR_1 : 0) );
 if (!VAR_9)
  FUNC_5(VAR_4, VAR_8,
        "Notes removed by 'git notes prune'");
 FUNC_7(VAR_8);
 return 0;
}
