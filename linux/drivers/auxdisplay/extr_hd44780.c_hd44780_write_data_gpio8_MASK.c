
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hd44780 {int dummy; } ;
struct charlcd {struct hd44780* drvdata; } ;


 int FUNC_0 (struct hd44780*,int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct charlcd *VAR_0, int VAR_1)
{
 struct hd44780 *VAR_2 = VAR_0->drvdata;

 FUNC_0(VAR_2, VAR_1, 1);


 FUNC_1(45);
}
