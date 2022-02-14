
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct thread_info {int vfpstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 unsigned int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (unsigned int,struct thread_info*) ;

void FUNC_6(struct thread_info *VAR_2)
{
 unsigned int VAR_3 = FUNC_2();

 if (FUNC_5(VAR_3, VAR_2)) {
  u32 VAR_4 = FUNC_0(VAR_0);




  FUNC_1(VAR_0, VAR_4 | VAR_1);
  FUNC_4(&VAR_2->vfpstate, VAR_4 | VAR_1);
  FUNC_1(VAR_0, VAR_4);
 }

 FUNC_3();
}
