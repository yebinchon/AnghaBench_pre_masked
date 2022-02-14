
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlbiel_pid {scalar_t__ ric; int pid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(void *VAR_3)
{
 struct tlbiel_pid *VAR_4 = VAR_3;

 if (VAR_4->ric == VAR_2)
  FUNC_0(VAR_4->pid, VAR_2);
 else if (VAR_4->ric == VAR_1)
  FUNC_0(VAR_4->pid, VAR_1);
 else
  FUNC_0(VAR_4->pid, VAR_0);
}
