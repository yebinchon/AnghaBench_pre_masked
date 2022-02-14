
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gameport {int dummy; } ;
struct TYPE_2__ {int loops_per_jiffy; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 unsigned int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (struct gameport*) ;
 scalar_t__ FUNC_3 (struct gameport*,int *,int ) ;
 int FUNC_4 (struct gameport*) ;
 unsigned int VAR_3 ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 unsigned long FUNC_7 () ;
 unsigned long FUNC_8 (int ) ;
 int FUNC_9 (unsigned int) ;

__attribute__((used)) static int FUNC_10(struct gameport *VAR_4)
{
 unsigned int VAR_5, VAR_6;
 unsigned long VAR_7, VAR_8, VAR_9, VAR_10;

 if (FUNC_3(VAR_4, ((void*)0), VAR_0))
  return 0;

 VAR_7 = 1 << 30;

 for(VAR_5 = 0; VAR_5 < 50; VAR_5++) {
  FUNC_6(VAR_10);
  VAR_8 = FUNC_7();
  for (VAR_6 = 0; VAR_6 < 50; VAR_6++) FUNC_4(VAR_4);
  VAR_9 = FUNC_7();
  FUNC_5(VAR_10);
  FUNC_9(VAR_5 * 10);
  if (VAR_9 - VAR_8 < VAR_7) VAR_7 = VAR_9 - VAR_8;
 }

 FUNC_2(VAR_4);
 return (FUNC_8(VAR_2.loops_per_jiffy) *
  (unsigned long)VAR_1 / (1000 / 50)) / (VAR_7 < 1 ? 1 : VAR_7);
}
