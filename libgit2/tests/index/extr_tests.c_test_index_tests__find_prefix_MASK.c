
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int path; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (size_t*,int *,char*) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *,size_t) ;
 scalar_t__ FUNC_6 (int **,int ) ;

void FUNC_7(void)
{
   git_index *VAR_2;
   const git_index_entry *VAR_3;
   size_t VAR_4;

   FUNC_1(FUNC_6(&VAR_2, VAR_1));

   FUNC_1(FUNC_3(&VAR_4, VAR_2, "src"));
   VAR_3 = FUNC_5(VAR_2, VAR_4);
   FUNC_0(FUNC_2(VAR_3->path, "src/block-sha1/sha1.c") == 0);

   FUNC_1(FUNC_3(&VAR_4, VAR_2, "src/co"));
   VAR_3 = FUNC_5(VAR_2, VAR_4);
   FUNC_0(FUNC_2(VAR_3->path, "src/commit.c") == 0);

   FUNC_0(VAR_0 == FUNC_3(((void*)0), VAR_2, "blah"));

   FUNC_4(VAR_2);
}
