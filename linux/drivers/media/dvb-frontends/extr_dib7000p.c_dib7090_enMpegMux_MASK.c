
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dib7000p_state {int dummy; } ;


 int FUNC_0 (struct dib7000p_state*,int) ;
 int FUNC_1 (struct dib7000p_state*,int,int) ;

__attribute__((used)) static void FUNC_2(struct dib7000p_state *VAR_0, int VAR_1)
{
 u16 VAR_2 = FUNC_0(VAR_0, 1287);

 switch (VAR_1) {
 case 1:
   VAR_2 &= ~(1<<7);
   break;
 case 0:
   VAR_2 |= (1<<7);
   break;
 }

 FUNC_1(VAR_0, 1287, VAR_2);
}
