
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwspinlock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *,int,struct hwspinlock*) ;
 struct hwspinlock* FUNC_5 (int *,int,int ) ;

__attribute__((used)) static int FUNC_6(struct hwspinlock *VAR_4, int VAR_5)
{
 struct hwspinlock *VAR_6;
 int VAR_7;

 FUNC_1(&VAR_3);

 VAR_7 = FUNC_4(&VAR_2, VAR_5, VAR_4);
 if (VAR_7) {
  if (VAR_7 == -VAR_0)
   FUNC_3("hwspinlock id %d already exists!\n", VAR_5);
  goto out;
 }


 VAR_6 = FUNC_5(&VAR_2, VAR_5, VAR_1);


 FUNC_0(VAR_6 != VAR_4);

out:
 FUNC_2(&VAR_3);
 return 0;
}
