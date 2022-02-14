
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwspinlock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hwspinlock*) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct hwspinlock *VAR_1)
{
 if (!VAR_1) {
  FUNC_1("invalid hwlock\n");
  return -VAR_0;
 }

 return FUNC_0(VAR_1);
}
