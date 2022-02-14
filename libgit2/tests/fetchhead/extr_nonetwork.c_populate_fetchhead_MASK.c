
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_vector ;
typedef int git_repository ;
typedef int git_oid ;
typedef int git_fetchhead_ref ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int **,int *,int,char*,char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5(git_vector *VAR_0, git_repository *VAR_1)
{
 git_fetchhead_ref *VAR_2;
 git_oid VAR_3;

 FUNC_0(FUNC_3(&VAR_3,
  "49322bb17d3acc9146f98c97d078513228bbf3c0"));
 FUNC_0(FUNC_1(&VAR_2, &VAR_3, 1,
  "refs/heads/master",
  "git://github.com/libgit2/TestGitRepository"));
 FUNC_0(FUNC_4(VAR_0, VAR_2));

 FUNC_0(FUNC_3(&VAR_3,
  "0966a434eb1a025db6b71485ab63a3bfbea520b6"));
 FUNC_0(FUNC_1(&VAR_2, &VAR_3, 0,
  "refs/heads/first-merge",
  "git://github.com/libgit2/TestGitRepository"));
 FUNC_0(FUNC_4(VAR_0, VAR_2));

 FUNC_0(FUNC_3(&VAR_3,
  "42e4e7c5e507e113ebbb7801b16b52cf867b7ce1"));
 FUNC_0(FUNC_1(&VAR_2, &VAR_3, 0,
  "refs/heads/no-parent",
  "git://github.com/libgit2/TestGitRepository"));
 FUNC_0(FUNC_4(VAR_0, VAR_2));

 FUNC_0(FUNC_3(&VAR_3,
  "d96c4e80345534eccee5ac7b07fc7603b56124cb"));
 FUNC_0(FUNC_1(&VAR_2, &VAR_3, 0,
  "refs/tags/annotated_tag",
  "git://github.com/libgit2/TestGitRepository"));
 FUNC_0(FUNC_4(VAR_0, VAR_2));

 FUNC_0(FUNC_3(&VAR_3,
  "55a1a760df4b86a02094a904dfa511deb5655905"));
 FUNC_0(FUNC_1(&VAR_2, &VAR_3, 0,
  "refs/tags/blob",
  "git://github.com/libgit2/TestGitRepository"));
 FUNC_0(FUNC_4(VAR_0, VAR_2));

 FUNC_0(FUNC_3(&VAR_3,
  "8f50ba15d49353813cc6e20298002c0d17b0a9ee"));
 FUNC_0(FUNC_1(&VAR_2, &VAR_3, 0,
  "refs/tags/commit_tree",
  "git://github.com/libgit2/TestGitRepository"));
 FUNC_0(FUNC_4(VAR_0, VAR_2));

 FUNC_0(FUNC_2(VAR_1, VAR_0));
}
