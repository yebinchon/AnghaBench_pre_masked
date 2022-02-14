
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clocksource {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__* VAR_5 ;
 int* VAR_6 ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct clocksource *VAR_7)
{
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_3 - 2; VAR_8++)
  FUNC_2(VAR_6[VAR_8], VAR_4 + VAR_5[VAR_8]);

 FUNC_2(VAR_6[VAR_3 - 2],
  VAR_4 + VAR_2);
 FUNC_2(VAR_6[VAR_3 - 1],
  VAR_4 + VAR_1);

 FUNC_2(FUNC_1(VAR_4 + VAR_0) |
  FUNC_0(1) | FUNC_0(0), VAR_4 + VAR_0);
}
