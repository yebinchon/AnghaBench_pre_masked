
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gameport {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char FUNC_0 (struct gameport*) ;
 unsigned int FUNC_1 (struct gameport*,int ) ;
 int FUNC_2 (struct gameport*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;

__attribute__((used)) static int FUNC_5(struct gameport *VAR_2, int VAR_3, u32 *VAR_4)
{
 unsigned long VAR_5;
 unsigned char VAR_6, VAR_7;
 unsigned int VAR_8, VAR_9;
 int VAR_10;

 VAR_10 = 0;
 VAR_4[0] = VAR_4[1] = VAR_4[2] = 0;
 VAR_8 = FUNC_1(VAR_2, VAR_0);
 VAR_9 = FUNC_1(VAR_2, VAR_1);

 FUNC_4(VAR_5);
 FUNC_2(VAR_2);
 VAR_7 = FUNC_0(VAR_2);

 while (VAR_8 > 0 && VAR_10 < VAR_3) {
  VAR_8--;
  VAR_6 = VAR_7; VAR_7 = FUNC_0(VAR_2);
  if (VAR_7 & ~VAR_6 & 0x40) {
   VAR_4[0] = (VAR_4[0] << 1) | ((VAR_7 >> 4) & 1);
   VAR_4[1] = (VAR_4[1] << 1) | ((VAR_7 >> 5) & 1);
   VAR_4[2] = (VAR_4[2] << 1) | ((VAR_7 >> 7) & 1);
   VAR_10++;
   VAR_8 = VAR_9;
  }
 }

 FUNC_3(VAR_5);

 return VAR_10;
}
