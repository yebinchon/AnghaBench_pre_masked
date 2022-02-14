
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 int VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_8, void *VAR_9)
{
 int VAR_10 = FUNC_0(VAR_7);
 int VAR_11 = FUNC_0(VAR_7 + 2);

 FUNC_4(VAR_11 | 1, VAR_7 + 2);
 FUNC_5(2);
 FUNC_4(VAR_11 & ~1, VAR_7 + 2);
 FUNC_5(2);
 FUNC_0(0x64);

 VAR_5[VAR_4++] = VAR_10;

 if (VAR_4 < 3)
  return VAR_3;

 FUNC_2(VAR_6, VAR_2,
  VAR_5[0] & 0x01);
 FUNC_1(VAR_6, VAR_0,
  VAR_5[1] | ((VAR_5[0] << 3) & 0x80) | ((VAR_5[0] << 1) & 0x100));
 FUNC_1(VAR_6, VAR_1,
  VAR_5[2] | ((VAR_5[0] << 4) & 0x80));
 FUNC_3(VAR_6);

 VAR_4 = 0;
 return VAR_3;
}
