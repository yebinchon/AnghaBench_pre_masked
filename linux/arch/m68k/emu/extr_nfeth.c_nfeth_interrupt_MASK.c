
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,int) ;
 scalar_t__* VAR_4 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_5, void *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;

 VAR_9 = FUNC_0(VAR_3 + VAR_2, 0);
 for (VAR_7 = 0, VAR_8 = 1; VAR_7 < VAR_1; VAR_8 <<= 1, VAR_7++) {
  if (VAR_9 & VAR_8 && VAR_4[VAR_7]) {
   FUNC_1(VAR_4[VAR_7]);
   FUNC_0(VAR_3 + VAR_2, VAR_8);
  }
 }
 return VAR_0;
}
