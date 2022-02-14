
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct device_node {int dummy; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (unsigned int,int) ;
 struct device_node* FUNC_5 (int *,int *,char*) ;
 scalar_t__ FUNC_6 (struct device_node*,int ) ;
 unsigned int FUNC_7 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_8 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(unsigned int VAR_5, struct task_struct *VAR_6)
{
 phys_addr_t VAR_7;
 unsigned int VAR_8 = 0;
 struct device_node *VAR_9;


 VAR_7 = FUNC_1(VAR_4);
 FUNC_3(VAR_0, VAR_7);

 VAR_9 = FUNC_5(((void*)0), ((void*)0), "hisilicon,hip01-sysctrl");
 if (FUNC_0(!VAR_9))
  return -1;
 VAR_3 = FUNC_6(VAR_9, 0);


 VAR_8 = FUNC_7(VAR_3 + VAR_1);
 FUNC_2();
 VAR_8 |= VAR_2;
 FUNC_2();
 FUNC_8(VAR_8, VAR_3 + VAR_1);

 FUNC_4(VAR_5, 1);

 return 0;
}
