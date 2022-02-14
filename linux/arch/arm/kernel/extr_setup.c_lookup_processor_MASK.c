
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct proc_info_list {int dummy; } ;


 struct proc_info_list* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 () ;

struct proc_info_list *FUNC_3(u32 VAR_0)
{
 struct proc_info_list *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1) {
  FUNC_1("CPU%u: configuration botched (ID %08x), CPU halted\n",
         FUNC_2(), VAR_0);
  while (1)
                                                              ;
 }

 return VAR_1;
}
