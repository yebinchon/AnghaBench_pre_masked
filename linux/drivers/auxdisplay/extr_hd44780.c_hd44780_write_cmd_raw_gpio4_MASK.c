
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hd44780 {scalar_t__* pins; } ;
struct charlcd {struct hd44780* drvdata; } ;


 int FUNC_0 (int*,int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (unsigned int,scalar_t__*,int *,int*) ;
 int FUNC_2 (struct hd44780*) ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_3(struct charlcd *VAR_3, int VAR_4)
{
 FUNC_0(VAR_2, 6);
 struct hd44780 *VAR_5 = VAR_3->drvdata;
 unsigned int VAR_6;


 VAR_2[0] = VAR_4 & 0x0f;
 VAR_6 = VAR_5->pins[VAR_0] ? 6 : 5;


 FUNC_1(VAR_6, &VAR_5->pins[VAR_1], ((void*)0), VAR_2);

 FUNC_2(VAR_5);
}
