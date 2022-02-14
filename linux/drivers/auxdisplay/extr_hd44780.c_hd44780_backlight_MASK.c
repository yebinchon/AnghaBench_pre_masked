
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hd44780 {scalar_t__* pins; } ;
struct charlcd {struct hd44780* drvdata; } ;


 size_t VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct charlcd *VAR_1, int VAR_2)
{
 struct hd44780 *VAR_3 = VAR_1->drvdata;

 if (VAR_3->pins[VAR_0])
  FUNC_0(VAR_3->pins[VAR_0], VAR_2);
}
