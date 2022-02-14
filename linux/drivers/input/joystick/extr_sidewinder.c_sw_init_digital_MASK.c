
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gameport {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gameport*) ;
 int FUNC_1 (struct gameport*,int) ;
 int FUNC_2 (struct gameport*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int const) ;

__attribute__((used)) static void FUNC_6(struct gameport *VAR_1)
{
 static const int VAR_2[] = { 140, 140+725, 140+300, 0 };
 unsigned long VAR_3;
 int VAR_4, VAR_5;

        FUNC_4(VAR_3);

 VAR_4 = 0;
        do {
                FUNC_2(VAR_1);
  VAR_5 = FUNC_1(VAR_1, VAR_0 * 1000);
  while ((FUNC_0(VAR_1) & 1) && VAR_5) VAR_5--;
                FUNC_5(VAR_2[VAR_4]);
        } while (VAR_2[++VAR_4]);

 FUNC_2(VAR_1);

 FUNC_3(VAR_3);
}
