
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gameport {int dummy; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct gameport*) ;
 scalar_t__* VAR_4 ;
 int FUNC_2 (struct gameport*,int ,int,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct gameport *VAR_5, u32 *VAR_6)
{
 int VAR_7;
 int VAR_8, VAR_9 = 0, VAR_10 = 0;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4); VAR_7++) {
  if (VAR_4[VAR_7])
   FUNC_1(VAR_5);
  FUNC_3(VAR_0);
 }

 for (VAR_7 = 0; VAR_7 < 16; VAR_7++)
  FUNC_3(VAR_0);

 while (VAR_9 < 64 && VAR_10 < 8) {

  VAR_8 = FUNC_2(VAR_5, VAR_2, 0x27, VAR_6);

  if (VAR_8 & VAR_1)
   return 1;

  if (VAR_8 & VAR_3)
   VAR_9++;
  else
   VAR_10++;
 }
 return 0;
}
