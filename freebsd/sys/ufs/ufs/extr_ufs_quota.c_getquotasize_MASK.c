
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct ufsmount {scalar_t__* um_quotas; int* um_qflags; } ;
struct thread {int dummy; } ;
struct mount {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ufsmount*) ;
 int FUNC_1 (struct ufsmount*) ;
 struct ufsmount* FUNC_2 (struct mount*) ;
 int FUNC_3 (int*,void*,int) ;

int
FUNC_4(struct thread *VAR_4, struct mount *VAR_5, u_long VAR_6, int VAR_7,
    void *VAR_8)
{
 struct ufsmount *VAR_9 = FUNC_2(VAR_5);
 int VAR_10;

 FUNC_0(VAR_9);
 if (VAR_9->um_quotas[VAR_7] == VAR_1 ||
     (VAR_9->um_qflags[VAR_7] & VAR_3)) {
  FUNC_1(VAR_9);
  return (VAR_0);
 }
 if ((VAR_9->um_qflags[VAR_7] & VAR_2) != 0)
  VAR_10 = 64;
 else
  VAR_10 = 32;
 FUNC_1(VAR_9);
 return (FUNC_3(&VAR_10, VAR_8, sizeof(int)));
}
