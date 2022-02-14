
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int,int *) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (unsigned int,int ) ;
 unsigned long VAR_0 ;
 unsigned long FUNC_4 (int) ;
 int VAR_1 ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;
 scalar_t__ FUNC_7 (unsigned int) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (unsigned int) ;
 scalar_t__ FUNC_11 (unsigned long,unsigned long) ;
 int FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(unsigned int VAR_2, struct task_struct *VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;

 VAR_2 = FUNC_0(VAR_2);
 FUNC_10(VAR_2);
 FUNC_3(VAR_2, 0);
 if (FUNC_1(VAR_2, &VAR_1)) {
  VAR_5 = VAR_0 + FUNC_4(50);
  do {
   if (FUNC_7(VAR_2))
    goto remove_clamps;
   FUNC_12(10);
  } while (FUNC_11(VAR_0, VAR_5));
 }







 VAR_4 = FUNC_8(VAR_2);
 if (VAR_4)
  return VAR_4;

remove_clamps:

 FUNC_6(VAR_2);
 FUNC_12(10);


 VAR_4 = FUNC_9(VAR_2);
 if (VAR_4)
  return VAR_4;

 FUNC_12(10);

 FUNC_2(VAR_2, 0);
 FUNC_5(VAR_2);
 return 0;
}
