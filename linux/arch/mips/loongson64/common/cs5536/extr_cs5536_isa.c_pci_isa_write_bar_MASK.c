
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
 int* VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int* VAR_6 ;

void FUNC_3(int VAR_7, u32 VAR_8)
{
 u32 VAR_9 = 0, VAR_10 = VAR_8;

 if (VAR_8 == VAR_1) {
  FUNC_1(FUNC_0(VAR_0), &VAR_9, &VAR_10);
  VAR_10 |= VAR_6[VAR_7];
  FUNC_2(FUNC_0(VAR_0), VAR_9, VAR_10);
 } else if (VAR_8 & 0x01) {

  VAR_9 = 0x0000f001;
  VAR_10 &= VAR_3[VAR_7];
  FUNC_2(VAR_4[VAR_7], VAR_9, VAR_10);


  VAR_9 = ((VAR_8 & 0x000ffffc) << 12) |
      ((VAR_2[VAR_7] - 4) << 12) | 0x01;
  VAR_10 = ((VAR_8 & 0x000ffffc) << 12) | 0x01;
  FUNC_2(VAR_5[VAR_7], VAR_9, VAR_10);
 }
}
