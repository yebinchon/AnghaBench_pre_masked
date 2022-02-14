
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*,unsigned int) ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(unsigned int VAR_1,
          struct task_struct *VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_8("Booting CPU %d\n", VAR_1);







 VAR_4 = FUNC_1(VAR_1);
 if (FUNC_6("marvell,armada375"))
  FUNC_5(VAR_0);
 else
  FUNC_4(VAR_4, VAR_0);
 FUNC_9();





 FUNC_0(FUNC_2(VAR_1));

 VAR_3 = FUNC_3(VAR_4);
 if (VAR_3) {
  FUNC_7("Could not start the secondary CPU: %d\n", VAR_3);
  return VAR_3;
 }

 return 0;
}
