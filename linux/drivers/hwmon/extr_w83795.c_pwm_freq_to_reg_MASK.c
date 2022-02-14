
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;


 int FUNC_0 (unsigned long*) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 size_t FUNC_3 (int ,int,int) ;
 size_t FUNC_4 (unsigned long,unsigned long*,int ) ;
 unsigned long* VAR_0 ;

__attribute__((used)) static u8 FUNC_5(unsigned long VAR_1, u16 VAR_2)
{
 unsigned long VAR_3;
 u8 VAR_4, VAR_5;
 unsigned long VAR_6, VAR_7;


 VAR_4 = FUNC_4(VAR_1, VAR_0,
           FUNC_0(VAR_0));
 if (VAR_1 < 375)
  return VAR_4;
 VAR_6 = VAR_0[VAR_4];


 VAR_3 = VAR_2 * 1000 / ((VAR_2 == 48000) ? 384 : 256);
 VAR_5 = FUNC_3(FUNC_1(VAR_3, VAR_1), 1, 128);
 VAR_7 = VAR_3 / VAR_5;
 VAR_5 = 0x80 | (VAR_5 - 1);


 if (FUNC_2(VAR_1 - VAR_6) > FUNC_2(VAR_1 - VAR_7))
  return VAR_5;
 else
  return VAR_4;
}
