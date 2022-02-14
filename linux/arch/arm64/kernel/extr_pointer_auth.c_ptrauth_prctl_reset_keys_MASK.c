
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ptrauth_keys {int apga; int apdb; int apda; int apib; int apia; } ;
struct TYPE_2__ {struct ptrauth_keys keys_user; } ;
struct task_struct {TYPE_1__ thread; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct ptrauth_keys*) ;
 int FUNC_2 (struct ptrauth_keys*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

int FUNC_5(struct task_struct *VAR_6, unsigned long VAR_7)
{
 struct ptrauth_keys *VAR_8 = &VAR_6->thread.keys_user;
 unsigned long VAR_9 = VAR_4 | VAR_5 |
          VAR_1 | VAR_2;
 unsigned long VAR_10 = VAR_9 | VAR_3;

 if (!FUNC_3() && !FUNC_4())
  return -VAR_0;

 if (!VAR_7) {
  FUNC_1(VAR_8);
  FUNC_2(VAR_8);
  return 0;
 }

 if (VAR_7 & ~VAR_10)
  return -VAR_0;

 if (((VAR_7 & VAR_9) && !FUNC_3()) ||
     ((VAR_7 & VAR_3) && !FUNC_4()))
  return -VAR_0;

 if (VAR_7 & VAR_4)
  FUNC_0(&VAR_8->apia, sizeof(VAR_8->apia));
 if (VAR_7 & VAR_5)
  FUNC_0(&VAR_8->apib, sizeof(VAR_8->apib));
 if (VAR_7 & VAR_1)
  FUNC_0(&VAR_8->apda, sizeof(VAR_8->apda));
 if (VAR_7 & VAR_2)
  FUNC_0(&VAR_8->apdb, sizeof(VAR_8->apdb));
 if (VAR_7 & VAR_3)
  FUNC_0(&VAR_8->apga, sizeof(VAR_8->apga));

 FUNC_2(VAR_8);

 return 0;
}
