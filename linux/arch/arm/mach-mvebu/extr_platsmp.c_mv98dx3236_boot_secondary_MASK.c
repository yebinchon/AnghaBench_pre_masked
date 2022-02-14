
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static int FUNC_6(unsigned int VAR_1, struct task_struct *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_4 = FUNC_1(VAR_1);
 FUNC_3(VAR_4,
         VAR_0);





 FUNC_0(FUNC_2(VAR_1));





 VAR_3 = FUNC_4(VAR_4);
 if (VAR_3) {
  FUNC_5("unable to boot CPU: %d\n", VAR_3);
  return VAR_3;
 }

 return 0;
}
