
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct grip_mp {TYPE_1__** port; } ;
struct gameport {int dummy; } ;
struct TYPE_2__ {scalar_t__ dirty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct grip_mp* FUNC_0 (struct gameport*) ;
 int FUNC_1 (struct grip_mp*,int) ;
 int FUNC_2 (struct grip_mp*,int) ;

__attribute__((used)) static void FUNC_3(struct gameport *VAR_3)
{
 struct grip_mp *VAR_4 = FUNC_0(VAR_3);
 int VAR_5, VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
  VAR_7 = VAR_2;
  for (VAR_5 = 0; VAR_5 < 32; VAR_5++) {
   VAR_7 = FUNC_1(VAR_4, VAR_7);
   if ((VAR_7 & VAR_1) || !(VAR_7 & VAR_2))
    break;
  }
  if (VAR_7 & VAR_0)
   break;
 }

 for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
  if (VAR_4->port[VAR_5]->dirty)
   FUNC_2(VAR_4, VAR_5);
}
