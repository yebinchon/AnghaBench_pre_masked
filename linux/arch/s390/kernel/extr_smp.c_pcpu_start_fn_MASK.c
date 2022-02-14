
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcpu {struct lowcore* lowcore; } ;
struct lowcore {unsigned long restart_fn; unsigned long restart_data; unsigned long restart_source; int nodat_stack; int restart_stack; } ;


 int VAR_0 ;
 int FUNC_0 (struct pcpu*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct pcpu *VAR_1, void (*VAR_2)(void *), void *VAR_3)
{
 struct lowcore *VAR_4 = VAR_1->lowcore;

 VAR_4->restart_stack = VAR_4->nodat_stack;
 VAR_4->restart_fn = (unsigned long) VAR_2;
 VAR_4->restart_data = (unsigned long) VAR_3;
 VAR_4->restart_source = -1UL;
 FUNC_0(VAR_1, VAR_0, 0);
}
