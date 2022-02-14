
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtas_fadump_mem_struct {int dummy; } ;
struct fw_dump {int dump_registered; int ibm_configure_kernel_dump; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 unsigned int FUNC_5 (int) ;
 int FUNC_6 (int ,int,int,int *,int ,int *,int) ;

__attribute__((used)) static int FUNC_7(struct fw_dump *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7, VAR_8 = -VAR_2;


 do {
  VAR_7 = FUNC_6(VAR_5->ibm_configure_kernel_dump, 3, 1,
    ((void*)0), VAR_3, &VAR_4,
    sizeof(struct rtas_fadump_mem_struct));

  VAR_6 = FUNC_5(VAR_7);
  if (VAR_6)
   FUNC_2(VAR_6);

 } while (VAR_6);

 switch (VAR_7) {
 case 0:
  FUNC_4("Registration is successful!\n");
  VAR_5->dump_registered = 1;
  VAR_8 = 0;
  break;
 case -1:
  FUNC_3("Failed to register. Hardware Error(%d).\n", VAR_7);
  break;
 case -3:
  if (!FUNC_0())
   FUNC_3("Can't have holes in boot memory area.\n");
  else if (!FUNC_1())
   FUNC_3("Can't have holes in reserved memory area.\n");

  FUNC_3("Failed to register. Parameter Error(%d).\n", VAR_7);
  VAR_8 = -VAR_1;
  break;
 case -9:
  FUNC_3("Already registered!\n");
  VAR_5->dump_registered = 1;
  VAR_8 = -VAR_0;
  break;
 default:
  FUNC_3("Failed to register. Unknown Error(%d).\n", VAR_7);
  break;
 }

 return VAR_8;
}
