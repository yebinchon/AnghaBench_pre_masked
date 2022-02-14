
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct commit_info {int summary; int committer_tz; int committer_time; int committer_mail; int committer; int author_tz; int author_time; int author_mail; int author; } ;
struct TYPE_2__ {int oid; } ;
struct commit {TYPE_1__ object; } ;


 int FUNC_0 (struct commit_info*) ;
 int FUNC_1 (char const*,char const**) ;
 int FUNC_2 (char const*,char*,int *,int *,int *,int *) ;
 char* FUNC_3 () ;
 char* FUNC_4 (struct commit*,int *,char const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char const*,int) ;
 int FUNC_7 (int *,char*,int ) ;
 int FUNC_8 (struct commit*,char const*) ;

__attribute__((used)) static void FUNC_9(struct commit *VAR_0,
       struct commit_info *VAR_1,
       int VAR_2)
{
 int VAR_3;
 const char *VAR_4, *VAR_5;
 const char *VAR_6;

 FUNC_0(VAR_1);

 VAR_5 = FUNC_3();
 VAR_6 = FUNC_4(VAR_0, ((void*)0), VAR_5);
 FUNC_2(VAR_6, "\nauthor ",
      &VAR_1->author, &VAR_1->author_mail,
      &VAR_1->author_time, &VAR_1->author_tz);

 if (!VAR_2) {
  FUNC_8(VAR_0, VAR_6);
  return;
 }

 FUNC_2(VAR_6, "\ncommitter ",
      &VAR_1->committer, &VAR_1->committer_mail,
      &VAR_1->committer_time, &VAR_1->committer_tz);

 VAR_3 = FUNC_1(VAR_6, &VAR_4);
 if (VAR_3)
  FUNC_6(&VAR_1->summary, VAR_4, VAR_3);
 else
  FUNC_7(&VAR_1->summary, "(%s)", FUNC_5(&VAR_0->object.oid));

 FUNC_8(VAR_0, VAR_6);
}
