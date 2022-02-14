
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (int,int ) ;
 int * VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = FUNC_0(VAR_2, 0);
 if (!(VAR_4 % 2000))
  FUNC_1(VAR_1[VAR_4 % 16000 / 2000]);
 return VAR_0;
}
