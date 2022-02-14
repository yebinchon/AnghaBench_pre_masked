
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct pcb {scalar_t__ pcb_sp; } ;
typedef int db_addr_t ;


 int FUNC_0 (struct thread*,int ,int) ;
 struct pcb* FUNC_1 (struct thread*) ;

int
FUNC_2(struct thread *VAR_0, int VAR_1)
{
 struct pcb *VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 return (FUNC_0(VAR_0, (db_addr_t)VAR_2->pcb_sp, VAR_1));
}
