
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procstat_cmd {int (* cmd ) (struct procstat*,struct kinfo_proc*) ;} ;
struct procstat {int dummy; } ;
struct kinfo_proc {int ki_pid; } ;


 int VAR_0 ;
 int FUNC_0 (char**,char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct procstat*,struct kinfo_proc*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int ,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(const struct procstat_cmd *VAR_1, struct procstat *VAR_2,
    struct kinfo_proc *VAR_3)
{
 char *VAR_4 = ((void*)0);

 FUNC_0(&VAR_4, "%d", VAR_3->ki_pid);
 if (VAR_4 == ((void*)0))
  FUNC_4(1, VAR_0, "Failed to allocate memory in procstat()");
 FUNC_5(VAR_4);
 VAR_1->cmd(VAR_2, VAR_3);
 FUNC_3(VAR_4);
 FUNC_1(VAR_4);
}
