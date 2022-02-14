
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct gameport {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gameport*) ;
 scalar_t__ FUNC_1 (struct gameport*,int *,int ) ;
 int FUNC_2 (struct gameport*) ;
 unsigned int FUNC_3 () ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned int) ;

__attribute__((used)) static int FUNC_7(struct gameport *VAR_1)
{
 unsigned int VAR_2, VAR_3, VAR_4;
 u64 VAR_5, VAR_6, VAR_7;
 unsigned long VAR_8;

 if (FUNC_1(VAR_1, ((void*)0), VAR_0))
  return 0;

 VAR_4 = ~0;

 for (VAR_2 = 0; VAR_2 < 50; VAR_2++) {
  FUNC_5(VAR_8);
  VAR_5 = FUNC_3();
  for (VAR_3 = 0; VAR_3 < 50; VAR_3++)
   FUNC_2(VAR_1);
  VAR_6 = FUNC_3();
  VAR_7 = FUNC_3();
  FUNC_4(VAR_8);
  FUNC_6(VAR_2 * 10);
  VAR_3 = (VAR_6 - VAR_5) - (VAR_7 - VAR_6);
  if (VAR_3 < VAR_4)
   VAR_4 = VAR_3;
 }

 FUNC_0(VAR_1);
 VAR_3 = 1000000 * 50;
 if (VAR_4)
  VAR_3 /= VAR_4;
 return VAR_3;
}
