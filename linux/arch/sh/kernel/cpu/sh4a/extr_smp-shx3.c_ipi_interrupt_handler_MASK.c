
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (unsigned int,int) ;
 unsigned int FUNC_2 () ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 unsigned int VAR_3 = (unsigned int)(long)VAR_2;
 unsigned int VAR_4 = FUNC_2();
 unsigned int VAR_5 = 4 * VAR_4;
 unsigned int VAR_6;

 VAR_6 = FUNC_0(0xfe410070 + VAR_5);
 VAR_6 &= (1 << (VAR_3 << 2));
 FUNC_1(VAR_6, 0xfe410080 + VAR_5);

 FUNC_3(VAR_3);

 return VAR_0;
}
