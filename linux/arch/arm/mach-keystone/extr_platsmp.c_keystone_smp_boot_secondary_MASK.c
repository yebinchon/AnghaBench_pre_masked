
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int,unsigned long) ;
 int FUNC_1 (char*,unsigned int,unsigned long) ;
 int FUNC_2 (char*,unsigned int,int) ;
 int VAR_1 ;
 unsigned long FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_2,
      struct task_struct *VAR_3)
{
 unsigned long VAR_4 = FUNC_3(&VAR_1);
 int VAR_5;

 FUNC_1("keystone-smp: booting cpu %d, vector %08lx\n",
   VAR_2, VAR_4);

 VAR_5 = FUNC_0(VAR_0, VAR_2, VAR_4);
 if (VAR_5)
  FUNC_2("CPU %d bringup failed with %d\n", VAR_2, VAR_5);

 return VAR_5;
}
