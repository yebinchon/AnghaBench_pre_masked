
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pathspec {int nr; TYPE_1__* items; } ;
struct TYPE_2__ {int match; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,struct pathspec const*,char*,int ) ;
 int VAR_2 ;
 char* FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(int VAR_3, const struct pathspec *VAR_4)
{
 char *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(VAR_4->nr, 1);
 FUNC_3(&VAR_2, VAR_3 ? VAR_0 : VAR_1,
        VAR_4, VAR_5, FUNC_0("Unstaged changes after refreshing the index:"));
 for (VAR_6 = 0; VAR_6 < VAR_4->nr; VAR_6++) {
  if (!VAR_5[VAR_6])
   FUNC_1(FUNC_0("pathspec '%s' did not match any files"),
       VAR_4->items[VAR_6].match);
 }
 FUNC_2(VAR_5);
}
