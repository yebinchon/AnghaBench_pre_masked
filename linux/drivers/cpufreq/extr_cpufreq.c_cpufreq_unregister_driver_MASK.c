
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_driver {int name; } ;


 int VAR_0 ;
 struct cpufreq_driver* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

int FUNC_8(struct cpufreq_driver *VAR_5)
{
 unsigned long VAR_6;

 if (!VAR_1 || (VAR_5 != VAR_1))
  return -VAR_0;

 FUNC_3("unregistering driver %s\n", VAR_5->name);


 FUNC_1();
 FUNC_5(&VAR_3);
 FUNC_4();
 FUNC_0(VAR_4);

 FUNC_6(&VAR_2, VAR_6);

 VAR_1 = ((void*)0);

 FUNC_7(&VAR_2, VAR_6);
 FUNC_2();

 return 0;
}
