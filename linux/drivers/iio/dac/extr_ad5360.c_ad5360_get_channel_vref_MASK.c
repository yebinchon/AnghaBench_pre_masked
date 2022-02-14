
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad5360_state {TYPE_1__* vref_reg; } ;
struct TYPE_2__ {int consumer; } ;


 unsigned int FUNC_0 (struct ad5360_state*,unsigned int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ad5360_state *VAR_0,
 unsigned int VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_0, VAR_1);

 return FUNC_1(VAR_0->vref_reg[VAR_2].consumer);
}
