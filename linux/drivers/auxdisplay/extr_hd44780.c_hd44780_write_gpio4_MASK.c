
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hd44780 {scalar_t__* pins; } ;


 int FUNC_0 (int*,int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int,int*,unsigned int) ;
 int FUNC_2 (unsigned int,scalar_t__*,int *,int*) ;
 int FUNC_3 (struct hd44780*) ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_4(struct hd44780 *VAR_3, u8 VAR_4, unsigned int VAR_5)
{
 FUNC_0(VAR_2, 6);
 unsigned int VAR_6;


 VAR_2[0] = VAR_4 >> 4;
 FUNC_1(4, VAR_2, VAR_5);
 VAR_6 = VAR_3->pins[VAR_0] ? 6 : 5;


 FUNC_2(VAR_6, &VAR_3->pins[VAR_1], ((void*)0), VAR_2);

 FUNC_3(VAR_3);


 VAR_2[0] &= ~0x0fUL;
 VAR_2[0] |= VAR_4 & 0x0f;


 FUNC_2(VAR_6, &VAR_3->pins[VAR_1], ((void*)0), VAR_2);

 FUNC_3(VAR_3);
}
