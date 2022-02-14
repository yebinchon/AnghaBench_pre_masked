
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_index ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int ,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int **,int ) ;
 int FUNC_8 (int *,int ,int ,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_9(void)
{
 git_oid VAR_3;
 git_index *VAR_4;

 FUNC_1("stash/zero.txt", "content\n");
 FUNC_2(FUNC_7(&VAR_4, VAR_1));
 FUNC_2(FUNC_4(VAR_4, "zero.txt"));
 FUNC_3(((void*)0), VAR_1, VAR_2, 0, "Initial commit");
 FUNC_0(FUNC_6("stash/zero.txt"));
 FUNC_5(VAR_4);

 FUNC_1("stash/one.txt", "content\n");
 FUNC_2(FUNC_8(
  &VAR_3, VAR_1, VAR_2, "First", VAR_0));
 FUNC_0(!FUNC_6("stash/one.txt"));
 FUNC_0(FUNC_6("stash/zero.txt"));

 FUNC_1("stash/two.txt", "content\n");
 FUNC_2(FUNC_8(
  &VAR_3, VAR_1, VAR_2, "Second", VAR_0));
 FUNC_0(!FUNC_6("stash/two.txt"));
 FUNC_0(FUNC_6("stash/zero.txt"));

 FUNC_1("stash/three.txt", "content\n");
 FUNC_2(FUNC_8(
  &VAR_3, VAR_1, VAR_2, "Third", VAR_0));
 FUNC_0(!FUNC_6("stash/three.txt"));
 FUNC_0(FUNC_6("stash/zero.txt"));
}
