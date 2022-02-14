
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smi_info {scalar_t__ si_state; scalar_t__ thread; int * curr_msg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct smi_info*,int ) ;
 int FUNC_1 (struct smi_info*,scalar_t__) ;
 int FUNC_2 (struct smi_info*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct smi_info *VAR_3)
{
 if (VAR_3->si_state == VAR_0 && VAR_3->curr_msg == ((void*)0)) {
  FUNC_1(VAR_3, VAR_2 + VAR_1);

  if (VAR_3->thread)
   FUNC_3(VAR_3->thread);

  FUNC_2(VAR_3);
  FUNC_0(VAR_3, 0);
 }
}
