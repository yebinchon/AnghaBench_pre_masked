
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_iterator ;
struct TYPE_3__ {char* path; } ;
typedef TYPE_1__ git_index_entry ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (TYPE_1__ const**,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(git_iterator *VAR_2, bool VAR_3)
{
 const git_index_entry *VAR_4;
 int VAR_5 = FUNC_2(&VAR_4, VAR_2);

 if (VAR_3 && VAR_5 != VAR_0)
  FUNC_1(VAR_1, "Expected end of iterator, got '%s'\n", VAR_4->path);

 FUNC_0(VAR_0, VAR_5);
}
