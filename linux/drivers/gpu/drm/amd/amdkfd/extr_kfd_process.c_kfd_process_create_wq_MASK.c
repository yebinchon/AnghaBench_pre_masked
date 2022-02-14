
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (char*,int ,int ) ;
 int FUNC_2 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_3(void)
{
 if (!VAR_1)
  VAR_1 = FUNC_1("kfd_process_wq", 0, 0);
 if (!VAR_2)
  VAR_2 = FUNC_0("kfd_restore_wq", 0);

 if (!VAR_1 || !VAR_2) {
  FUNC_2();
  return -VAR_0;
 }

 return 0;
}
