
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwspinlock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct hwspinlock*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,void**,int ,int,int ) ;

struct hwspinlock *FUNC_6(void)
{
 struct hwspinlock *VAR_3;
 int VAR_4;

 FUNC_2(&VAR_2);


 VAR_4 = FUNC_5(&VAR_1, (void **)&VAR_3,
      0, 1, VAR_0);
 if (VAR_4 == 0) {
  FUNC_4("a free hwspinlock is not available\n");
  VAR_3 = ((void*)0);
  goto out;
 }


 FUNC_0(VAR_4 > 1);


 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 < 0)
  VAR_3 = ((void*)0);

out:
 FUNC_3(&VAR_2);
 return VAR_3;
}
