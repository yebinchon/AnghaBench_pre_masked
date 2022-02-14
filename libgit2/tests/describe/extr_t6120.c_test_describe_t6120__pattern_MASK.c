
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_time_t ;
typedef int git_signature ;
typedef int git_oid ;
typedef int git_object ;
struct TYPE_7__ {char* pattern; int describe_strategy; } ;
typedef TYPE_1__ git_describe_options ;
struct TYPE_8__ {int always_use_long_format; } ;
typedef TYPE_2__ git_describe_format_options ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,int ,TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*,char*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,char*,char*,int,int ) ;
 int FUNC_7 (int *,int ,char*,int *,int *,char*,int ) ;
 int VAR_3 ;

void FUNC_8(void)
{
 git_describe_options VAR_4 = VAR_1;
 git_describe_format_options VAR_5 = VAR_0;
 git_oid VAR_6;
 git_object *VAR_7;
 git_signature *VAR_8;
 git_time_t VAR_9;


 FUNC_1(FUNC_4(&VAR_7, VAR_3, "HEAD"));

 VAR_9 = 1380553019;
 FUNC_1(FUNC_6(&VAR_8, "tagger", "tagger@libgit2.org", VAR_9, 0));
 FUNC_1(FUNC_7(&VAR_6, VAR_3, "test-annotated", VAR_7, VAR_8, "test-annotated", 0));
 FUNC_5(VAR_8);
 FUNC_3(VAR_7);

 FUNC_2(&VAR_9, "one more", "refs/tags/test1-lightweight");
 FUNC_2(&VAR_9, "yet another", "refs/tags/test2-lightweight");
 FUNC_2(&VAR_9, "even more", ((void*)0));



 VAR_4.pattern = "test-*";
 FUNC_0("test-annotated-*", "HEAD", VAR_3, &VAR_4, &VAR_5);

 VAR_4.describe_strategy = VAR_2;
 VAR_4.pattern = "test1-*";
 FUNC_0("test1-lightweight-*", "HEAD", VAR_3, &VAR_4, &VAR_5);

 VAR_4.pattern = "test2-*";
 FUNC_0("test2-lightweight-*", "HEAD", VAR_3, &VAR_4, &VAR_5);

 VAR_5.always_use_long_format = 1;
 FUNC_0("test2-lightweight-*", "HEAD^", VAR_3, &VAR_4, &VAR_5);
}
