
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int*,int*) ;
 int FUNC_2 (int ,int,int) ;
 int* VAR_2 ;
 int * VAR_3 ;
 int* VAR_4 ;

u32 FUNC_3(int VAR_5)
{
 u32 VAR_6 = 0;
 u32 VAR_7, VAR_8;

 FUNC_1(FUNC_0(VAR_0), &VAR_7, &VAR_8);
 if (VAR_8 & VAR_4[VAR_5]) {
  VAR_6 = VAR_2[VAR_5] | VAR_1;
  VAR_8 &= ~VAR_4[VAR_5];
  FUNC_2(FUNC_0(VAR_0), VAR_7, VAR_8);
 } else {
  FUNC_1(VAR_3[VAR_5], &VAR_7, &VAR_8);
  VAR_6 = VAR_8 & VAR_2[VAR_5];
  VAR_6 |= 0x01;
  VAR_6 &= ~0x02;
 }
 return VAR_6;
}
