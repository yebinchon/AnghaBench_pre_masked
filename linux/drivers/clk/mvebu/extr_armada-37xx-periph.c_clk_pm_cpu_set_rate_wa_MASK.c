
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct regmap*,int ,unsigned int*) ;
 int FUNC_2 (struct regmap*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_3, struct regmap *VAR_4)
{
 unsigned int VAR_5;

 if (VAR_3 != 1200 * 1000 * 1000)
  return;

 FUNC_1(VAR_4, VAR_1, &VAR_5);
 VAR_5 &= VAR_2;
 if (VAR_5 <= VAR_0)
  return;

 FUNC_2(VAR_4, VAR_1,
      VAR_2,
      VAR_0);
 FUNC_0(20);
}
