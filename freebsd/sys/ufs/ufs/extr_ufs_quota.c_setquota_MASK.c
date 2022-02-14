
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct mount {int dummy; } ;
struct dqblk64 {int dummy; } ;
typedef int dqb64 ;


 int FUNC_0 (struct thread*,struct mount*,int ,int,struct dqblk64*) ;
 int FUNC_1 (void*,struct dqblk64*,int) ;

int
FUNC_2(struct thread *VAR_0, struct mount *VAR_1, u_long VAR_2, int VAR_3, void *VAR_4)
{
 struct dqblk64 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4, &VAR_5, sizeof(VAR_5));
 if (VAR_6)
  return (VAR_6);
 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_5);
 return (VAR_6);
}
