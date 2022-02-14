
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clocksource {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__* VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_1(struct clocksource *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  VAR_3[VAR_5] = FUNC_0(VAR_1 + VAR_2[VAR_5]);
}
