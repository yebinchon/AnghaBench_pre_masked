
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit_name {unsigned int prio; int peeled; int * path; int sha1; scalar_t__ name_checked; int * tag; } ;
typedef int git_tag ;
typedef int git_repository ;
typedef int git_oidmap ;
typedef int git_oid ;


 int FUNC_0 (struct commit_name*) ;
 struct commit_name* FUNC_1 (int *,int const*) ;
 int FUNC_2 (int *) ;
 struct commit_name* FUNC_3 (int) ;
 int * FUNC_4 (char const*) ;
 int FUNC_5 (int *,int const*) ;
 scalar_t__ FUNC_6 (int *,int *,struct commit_name*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int **,int *,struct commit_name*,unsigned int,int const*) ;

__attribute__((used)) static int FUNC_9(
 git_repository *VAR_0,
 git_oidmap *VAR_1,
 const char *VAR_2,
 const git_oid *VAR_3,
 unsigned int VAR_4,
 const git_oid *VAR_5)
{
 struct commit_name *VAR_6 = FUNC_1(VAR_1, VAR_3);
 bool VAR_7 = (VAR_6 != ((void*)0));

 git_tag *VAR_8 = ((void*)0);
 if (FUNC_8(&VAR_8, VAR_0, VAR_6, VAR_4, VAR_5)) {
  if (!VAR_7) {
   VAR_6 = FUNC_3(sizeof(struct commit_name));
   FUNC_0(VAR_6);

   VAR_6->path = ((void*)0);
   VAR_6->tag = ((void*)0);
  }

  if (VAR_6->tag)
   FUNC_7(VAR_6->tag);
  VAR_6->tag = VAR_8;
  VAR_6->prio = VAR_4;
  VAR_6->name_checked = 0;
  FUNC_5(&VAR_6->sha1, VAR_5);
  FUNC_2(VAR_6->path);
  VAR_6->path = FUNC_4(VAR_2);
  FUNC_5(&VAR_6->peeled, VAR_3);

  if (!VAR_7 && FUNC_6(VAR_1, &VAR_6->peeled, VAR_6) < 0)
   return -1;
 }
 else
  FUNC_7(VAR_8);

 return 0;
}
