
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtas_fadump_mem_struct {int dummy; } ;
struct fw_dump {scalar_t__ dump_registered; int ibm_configure_kernel_dump; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (char*,int) ;
 unsigned int FUNC_2 (int) ;
 int FUNC_3 (int ,int,int,int *,int ,int *,int) ;

__attribute__((used)) static int FUNC_4(struct fw_dump *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;


 do {
  VAR_5 = FUNC_3(VAR_3->ibm_configure_kernel_dump, 3, 1,
    ((void*)0), VAR_1, &VAR_2,
    sizeof(struct rtas_fadump_mem_struct));

  VAR_4 = FUNC_2(VAR_5);
  if (VAR_4)
   FUNC_0(VAR_4);
 } while (VAR_4);

 if (VAR_5) {
  FUNC_1("Failed to un-register - unexpected error(%d).\n", VAR_5);
  return -VAR_0;
 }

 VAR_3->dump_registered = 0;
 return 0;
}
