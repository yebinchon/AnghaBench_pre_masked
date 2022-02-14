
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_5, void *VAR_6)
{
 unsigned long VAR_7;
 unsigned int VAR_8;

 VAR_7 = FUNC_1(VAR_0);
 FUNC_2(VAR_7 & ~0x00ff0003, VAR_0);
 VAR_7 &= VAR_7 >> 8;


 if (VAR_7 & 1)
  FUNC_3(VAR_2);
 if (VAR_7 & 2)
  FUNC_3(VAR_3);


 VAR_7 >>= 16;
 while (VAR_7) {
  VAR_8 = FUNC_0(VAR_7);
  VAR_7 &= VAR_7 - 1;
  FUNC_3(VAR_8 + VAR_1);
 }
 return VAR_4;
}
