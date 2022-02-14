
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packed_git {int pack_fd; int pack_name; } ;
struct child_process {int git_cmd; int stdout_to_stderr; int args; int in; } ;


 struct child_process VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct child_process*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(const struct packed_git *VAR_3)
{
 struct child_process VAR_4 = VAR_0;

 if (FUNC_2(VAR_3->pack_fd, 0, VAR_1) < 0)
  FUNC_1("Failed seeking to start of '%s'", VAR_3->pack_name);

 VAR_4.in = VAR_3->pack_fd;
 VAR_4.git_cmd = 1;
 VAR_4.stdout_to_stderr = 1;
 FUNC_0(&VAR_4.args, "unpack-objects");
 if (!VAR_2)
  FUNC_0(&VAR_4.args, "-q");

 return FUNC_3(&VAR_4);
}
