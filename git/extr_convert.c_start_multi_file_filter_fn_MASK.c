
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subprocess_entry {int dummy; } ;
struct subprocess_capability {char* member_0; int member_1; } ;
struct cmd2process {int supported_capabilities; } ;





 int FUNC_0 (struct subprocess_entry*,char*,int*,int *,struct subprocess_capability*,int *) ;

__attribute__((used)) static int FUNC_1(struct subprocess_entry *VAR_0)
{
 static int VAR_1[] = {2, 0};
 static struct subprocess_capability VAR_2[] = {
  { "clean", 130 },
  { "smudge", 128 },
  { "delay", 129 },
  { ((void*)0), 0 }
 };
 struct cmd2process *VAR_3 = (struct cmd2process *)VAR_0;
 return FUNC_0(VAR_0, "git-filter", VAR_1, ((void*)0),
        VAR_2,
        &VAR_3->supported_capabilities);
}
