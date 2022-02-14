
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_6, void *VAR_7)
{
 u32 VAR_8 = FUNC_0(VAR_3 + VAR_1);


 VAR_2 = VAR_8 + VAR_4 + VAR_5;

 if (VAR_2 < VAR_5) {
  VAR_2 = VAR_5;
 } else {
  if (VAR_4 == 0)
   VAR_4 = FUNC_0(VAR_3 + VAR_1) - VAR_8;
 }
 FUNC_2(VAR_2, VAR_3 + VAR_1);

 FUNC_1();

 return VAR_0;
}
