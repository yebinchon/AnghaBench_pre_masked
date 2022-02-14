
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysinfo_15_1_x {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (struct sysinfo_15_1_x*) ;
 struct sysinfo_15_1_x* VAR_3 ;
 int FUNC_4 (struct sysinfo_15_1_x*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(void)
{
 struct sysinfo_15_1_x *VAR_4 = VAR_3;
 int VAR_5 = 0;

 FUNC_1(&VAR_2);
 FUNC_0(&VAR_1);
 if (VAR_0) {
  VAR_5 = 1;
  FUNC_3(VAR_4);
  FUNC_4(VAR_4);
 }
 FUNC_6();
 if (!VAR_0)
  FUNC_5();
 FUNC_2(&VAR_2);
 return VAR_5;
}
