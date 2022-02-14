
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 () ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(unsigned int VAR_8, struct task_struct *VAR_9)
{
 int VAR_10 = &VAR_5 - &VAR_4;

 if (VAR_6) {

  FUNC_6(VAR_0,
         VAR_2 + VAR_1);

  FUNC_2(FUNC_4(0), &VAR_4, VAR_10);

  FUNC_6(FUNC_0(VAR_3),
         VAR_7 + (VAR_6 & 0x000000ff));

  FUNC_1();
  FUNC_5();
  FUNC_3(0, VAR_10);


  FUNC_6(0, VAR_2 + VAR_1);
 }

 return 0;
}
