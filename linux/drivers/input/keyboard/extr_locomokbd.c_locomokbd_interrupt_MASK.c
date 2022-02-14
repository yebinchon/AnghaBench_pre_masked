
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct locomokbd {scalar_t__ base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct locomokbd*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct locomokbd *VAR_4 = VAR_3;
 u16 VAR_5;

 VAR_5 = FUNC_0(VAR_4->base + VAR_1);
 if ((VAR_5 & 0x0001) == 0)
  return VAR_0;

 FUNC_1(VAR_5 & ~0x0100, VAR_4->base + VAR_1);


 FUNC_3(100);

 FUNC_2(VAR_4);
 return VAR_0;
}
