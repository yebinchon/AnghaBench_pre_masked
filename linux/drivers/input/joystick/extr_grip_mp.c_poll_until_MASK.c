
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gameport {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct gameport*) ;
 int FUNC_2 (struct gameport*,int) ;

__attribute__((used)) static inline int FUNC_3(u8 VAR_0, u8 VAR_1, int VAR_2, struct gameport* VAR_3, u8 *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = FUNC_2(VAR_3, VAR_2);
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  *VAR_4 = FUNC_1(VAR_3);
  if ((*VAR_4 & VAR_0) == VAR_0 &&
      (~(*VAR_4) & VAR_1) == VAR_1)
   return 1;
 }
 FUNC_0("gameport timed out after %d microseconds.\n", VAR_2);
 return 0;
}
