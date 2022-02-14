
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pg_state {int dummy; } ;
struct TYPE_2__ {int shift; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct pg_state*,unsigned long,size_t) ;
 unsigned long FUNC_1 () ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_2(struct pg_state *VAR_3)
{
 unsigned long VAR_4;





 unsigned long VAR_5 = 1 << VAR_2[VAR_1].shift;

 for (VAR_4 = VAR_0; VAR_4 < VAR_0 +
   FUNC_1(); VAR_4 += VAR_5)
  FUNC_0(VAR_3, VAR_4, VAR_1);
}
