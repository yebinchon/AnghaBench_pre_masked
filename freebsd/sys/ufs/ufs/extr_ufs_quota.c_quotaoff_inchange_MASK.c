
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufsmount {scalar_t__* um_quotas; int * um_qflags; } ;
struct thread {int dummy; } ;
struct mount {int mnt_flag; } ;


 int VAR_0 ;
 int FUNC_0 (struct mount*) ;
 int FUNC_1 (struct mount*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ufsmount*) ;
 int FUNC_3 (struct ufsmount*) ;
 struct ufsmount* FUNC_4 (struct mount*) ;
 int FUNC_5 (struct thread*,struct mount*,int) ;

int
FUNC_6(struct thread *VAR_4, struct mount *VAR_5, int VAR_6)
{
 struct ufsmount *VAR_7;
 int VAR_8, VAR_9;

 VAR_8 = FUNC_5(VAR_4, VAR_5, VAR_6);

 VAR_7 = FUNC_4(VAR_5);
 FUNC_2(VAR_7);
 VAR_7->um_qflags[VAR_6] &= ~VAR_3;
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
  if (VAR_7->um_quotas[VAR_9] != VAR_2)
   break;
 if (VAR_9 == VAR_0) {
  FUNC_0(VAR_5);
  VAR_5->mnt_flag &= ~VAR_1;
  FUNC_1(VAR_5);
 }
 FUNC_3(VAR_7);
 return (VAR_8);
}
