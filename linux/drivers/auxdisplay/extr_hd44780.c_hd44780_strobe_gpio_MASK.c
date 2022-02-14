
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hd44780 {int * pins; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct hd44780 *VAR_1)
{

 FUNC_1(20);

 FUNC_0(VAR_1->pins[VAR_0], 1);


 FUNC_1(40);

 FUNC_0(VAR_1->pins[VAR_0], 0);
}
