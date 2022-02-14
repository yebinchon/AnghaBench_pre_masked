
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcpu {TYPE_1__* lowcore; } ;
struct TYPE_3__ {unsigned long nodat_stack; unsigned long async_stack; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long,int ) ;
 int ** VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 struct pcpu* VAR_5 ;
 int FUNC_2 (struct pcpu*,int ,int ) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(struct pcpu *VAR_6)
{
 unsigned long VAR_7, VAR_8, VAR_9;

 VAR_8 = VAR_6->lowcore->nodat_stack - VAR_2;
 VAR_7 = VAR_6->lowcore->async_stack - VAR_2;
 VAR_9 = (unsigned long) VAR_6->lowcore;

 FUNC_2(VAR_6, VAR_1, 0);
 VAR_4[VAR_6 - VAR_5] = ((void*)0);
 FUNC_4(VAR_6->lowcore);
 FUNC_1(VAR_6->lowcore);
 FUNC_3(VAR_7);
 if (VAR_6 == &VAR_5[0])
  return;
 FUNC_0(VAR_8, VAR_3);
 FUNC_0(VAR_9, VAR_0);
}
