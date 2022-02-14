
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct proc* td_proc; } ;
struct proc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct proc*,int ,char*,char const*,char const*,...) ;

__attribute__((used)) static int
FUNC_1(struct thread *VAR_1, const char *VAR_2, const char *VAR_3, int VAR_4)
{
 struct proc *VAR_5;

 VAR_5 = VAR_1 ? VAR_1->td_proc : ((void*)0);
 if (VAR_4) {
  FUNC_0(VAR_5, VAR_0, "nfs server %s: %s, error %d\n", VAR_2,
      VAR_3, VAR_4);
 } else {
  FUNC_0(VAR_5, VAR_0, "nfs server %s: %s\n", VAR_2, VAR_3);
 }
 return (0);
}
