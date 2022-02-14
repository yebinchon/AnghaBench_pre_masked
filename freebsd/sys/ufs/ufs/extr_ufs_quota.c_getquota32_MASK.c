
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct mount {int dummy; } ;
struct dqblk64 {int dummy; } ;
struct dqblk32 {int dummy; } ;
typedef int dqb32 ;


 int FUNC_0 (struct thread*,struct mount*,int ,int,struct dqblk64*) ;
 int FUNC_1 (struct dqblk32*,void*,int) ;
 int FUNC_2 (struct dqblk64*,struct dqblk32*) ;

int
FUNC_3(struct thread *VAR_0, struct mount *VAR_1, u_long VAR_2, int VAR_3, void *VAR_4)
{
 struct dqblk32 VAR_5;
 struct dqblk64 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_6);
 if (VAR_7)
  return (VAR_7);
 FUNC_2(&VAR_6, &VAR_5);
 VAR_7 = FUNC_1(&VAR_5, VAR_4, sizeof(VAR_5));
 return (VAR_7);
}
