
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit_message {void* label; void* parent_label; int subject; int message; } ;
struct commit {int dummy; } ;


 int FUNC_0 (int ,char const**) ;
 int FUNC_1 () ;
 int FUNC_2 (struct commit*,int *,int ) ;
 char* FUNC_3 (struct commit*) ;
 int FUNC_4 (char const*,int) ;
 void* FUNC_5 (char*,char const*,...) ;

__attribute__((used)) static int FUNC_6(struct commit *VAR_0, struct commit_message *VAR_1)
{
 const char *VAR_2, *VAR_3;
 int VAR_4;

 VAR_1->message = FUNC_2(VAR_0, ((void*)0), FUNC_1());
 VAR_2 = FUNC_3(VAR_0);

 VAR_4 = FUNC_0(VAR_1->message, &VAR_3);

 VAR_1->subject = FUNC_4(VAR_3, VAR_4);
 VAR_1->label = FUNC_5("%s... %s", VAR_2, VAR_1->subject);
 VAR_1->parent_label = FUNC_5("parent of %s", VAR_1->label);

 return 0;
}
