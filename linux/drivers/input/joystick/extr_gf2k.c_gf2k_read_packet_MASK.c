
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gameport {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char FUNC_0 (struct gameport*) ;
 unsigned int FUNC_1 (struct gameport*,int ) ;
 int FUNC_2 (struct gameport*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;

__attribute__((used)) static int FUNC_5(struct gameport *VAR_2, int VAR_3, char *VAR_4)
{
 unsigned char VAR_5, VAR_6;
 int VAR_7;
 unsigned int VAR_8, VAR_9;
 unsigned long VAR_10;

 VAR_8 = FUNC_1(VAR_2, VAR_0);
 VAR_9 = FUNC_1(VAR_2, VAR_1);

 VAR_7 = 0;

 FUNC_4(VAR_10);

 FUNC_2(VAR_2);
 VAR_6 = FUNC_0(VAR_2);

 while (VAR_8 > 0 && VAR_7 < VAR_3) {
  VAR_8--; VAR_5 = VAR_6;
  VAR_6 = FUNC_0(VAR_2);
  if (VAR_6 & ~VAR_5 & 0x10) {
   VAR_4[VAR_7++] = VAR_6 >> 5;
   VAR_8 = VAR_9;
  }
 }

 FUNC_3(VAR_10);

 return VAR_7;
}
