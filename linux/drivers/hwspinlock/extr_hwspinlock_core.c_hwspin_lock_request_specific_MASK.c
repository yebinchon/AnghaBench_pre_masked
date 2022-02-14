
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwspinlock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct hwspinlock*) ;
 unsigned int FUNC_2 (struct hwspinlock*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,unsigned int) ;
 struct hwspinlock* FUNC_6 (int *,unsigned int) ;
 int FUNC_7 (int *,unsigned int,int ) ;

struct hwspinlock *FUNC_8(unsigned int VAR_3)
{
 struct hwspinlock *VAR_4;
 int VAR_5;

 FUNC_3(&VAR_2);


 VAR_4 = FUNC_6(&VAR_1, VAR_3);
 if (!VAR_4) {
  FUNC_5("hwspinlock %u does not exist\n", VAR_3);
  goto out;
 }


 FUNC_0(FUNC_2(VAR_4) != VAR_3);


 VAR_5 = FUNC_7(&VAR_1, VAR_3, VAR_0);
 if (VAR_5 == 0) {
  FUNC_5("hwspinlock %u is already in use\n", VAR_3);
  VAR_4 = ((void*)0);
  goto out;
 }


 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 < 0)
  VAR_4 = ((void*)0);

out:
 FUNC_4(&VAR_2);
 return VAR_4;
}
