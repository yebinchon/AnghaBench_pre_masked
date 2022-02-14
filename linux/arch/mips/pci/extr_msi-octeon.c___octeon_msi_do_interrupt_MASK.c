
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,unsigned long long) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int * VAR_3 ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, u64 VAR_5)
{
 int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7) {
  VAR_7--;

  FUNC_0(VAR_3[VAR_4], 1ull << VAR_7);

  VAR_6 = VAR_7 + VAR_2 + 64 * VAR_4;
  FUNC_1(VAR_6);
  return VAR_0;
 }
 return VAR_1;
}
