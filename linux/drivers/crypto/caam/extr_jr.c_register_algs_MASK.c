
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct device *VAR_2)
{
 FUNC_5(&VAR_1);

 if (++VAR_0 != 1)
  goto algs_unlock;

 FUNC_1(VAR_2);
 FUNC_0(VAR_2);
 FUNC_2(VAR_2);
 FUNC_4(VAR_2);
 FUNC_3(VAR_2);

algs_unlock:
 FUNC_6(&VAR_1);
}
