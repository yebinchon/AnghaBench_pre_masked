
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwspinlock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,unsigned int) ;
 struct hwspinlock* FUNC_3 (int *,unsigned int) ;
 int FUNC_4 (int *,unsigned int,int ) ;

__attribute__((used)) static struct hwspinlock *FUNC_5(unsigned int VAR_3)
{
 struct hwspinlock *VAR_4 = ((void*)0);
 int VAR_5;

 FUNC_0(&VAR_2);


 VAR_5 = FUNC_4(&VAR_1, VAR_3, VAR_0);
 if (VAR_5 == 0) {
  FUNC_2("hwspinlock %d still in use (or not present)\n", VAR_3);
  goto out;
 }

 VAR_4 = FUNC_3(&VAR_1, VAR_3);
 if (!VAR_4) {
  FUNC_2("failed to delete hwspinlock %d\n", VAR_3);
  goto out;
 }

out:
 FUNC_1(&VAR_2);
 return VAR_4;
}
