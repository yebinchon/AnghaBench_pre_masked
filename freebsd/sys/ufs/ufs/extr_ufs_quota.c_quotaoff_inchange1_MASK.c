
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct mount {struct thread* mnt_susp_owner; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,struct mount*,int) ;
 int FUNC_1 (struct mount*,int ) ;
 int FUNC_2 (struct mount*) ;

__attribute__((used)) static int
FUNC_3(struct thread *VAR_1, struct mount *VAR_2, int VAR_3)
{
 int VAR_4;
 bool VAR_5;
 if (VAR_2->mnt_susp_owner == VAR_1) {
  VAR_5 = 0;
 } else {
  VAR_4 = FUNC_2(VAR_2);
  if (VAR_4 != 0)
   return (VAR_4);
  VAR_5 = 1;
 }
 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_5)
  FUNC_1(VAR_2, VAR_0);
 return (VAR_4);
}
