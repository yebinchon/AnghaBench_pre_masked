
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufsmount {int* um_qflags; } ;
struct thread {int dummy; } ;
struct mount {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ufsmount*) ;
 int FUNC_1 (struct ufsmount*) ;
 struct ufsmount* FUNC_2 (struct mount*) ;
 int FUNC_3 (struct thread*,int ) ;
 int FUNC_4 (struct thread*,struct mount*,int) ;

int
FUNC_5(struct thread *VAR_4, struct mount *VAR_5, int VAR_6)
{
 struct ufsmount *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_4, VAR_1);
 if (VAR_8)
  return (VAR_8);

 VAR_7 = FUNC_2(VAR_5);
 FUNC_0(VAR_7);
 if ((VAR_7->um_qflags[VAR_6] & (VAR_3|VAR_2)) != 0) {
  FUNC_1(VAR_7);
  return (VAR_0);
 }
 VAR_7->um_qflags[VAR_6] |= VAR_2;
 FUNC_1(VAR_7);

 return (FUNC_4(VAR_4, VAR_5, VAR_6));
}
