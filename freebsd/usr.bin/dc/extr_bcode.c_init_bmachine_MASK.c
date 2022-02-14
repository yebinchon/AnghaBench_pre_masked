
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct source {int dummy; } ;
struct TYPE_4__ {int extended_regs; int reg_array_size; int readstack_sz; int obase; int ibase; int * readstack; int * reg; int stack; } ;
struct TYPE_3__ {size_t ch; int f; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 TYPE_2__ VAR_5 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (int,int *) ;
 int * VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_2 (int *) ;
 int VAR_8 ;

void
FUNC_3(bool VAR_9)
{
 unsigned int VAR_10;

 VAR_5.extended_regs = VAR_9;
 VAR_5.reg_array_size = VAR_5.extended_regs ?
     VAR_2 : VAR_3;

 VAR_5.reg = FUNC_0(VAR_5.reg_array_size,
     sizeof(VAR_5.reg[0]));
 if (VAR_5.reg == ((void*)0))
  FUNC_1(1, ((void*)0));

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
  VAR_6[VAR_10] = VAR_8;
 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
  VAR_6[VAR_7[VAR_10].ch] = VAR_7[VAR_10].f;

 FUNC_2(&VAR_5.stack);

 for (VAR_10 = 0; VAR_10 < VAR_5.reg_array_size; VAR_10++)
  FUNC_2(&VAR_5.reg[VAR_10]);

 VAR_5.readstack_sz = VAR_1;
 VAR_5.readstack = FUNC_0(sizeof(struct source),
     VAR_5.readstack_sz);
 if (VAR_5.readstack == ((void*)0))
  FUNC_1(1, ((void*)0));
 VAR_5.obase = VAR_5.ibase = 10;
}
