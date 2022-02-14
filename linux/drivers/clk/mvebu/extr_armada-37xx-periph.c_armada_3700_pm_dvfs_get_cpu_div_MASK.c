
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (unsigned int,unsigned int*,unsigned int*) ;
 int FUNC_1 (struct regmap*,unsigned int,unsigned int*) ;

__attribute__((used)) static unsigned int FUNC_2(struct regmap *VAR_4)
{
 unsigned int VAR_5 = VAR_0;
 unsigned int VAR_6 = VAR_3;
 unsigned int VAR_7, VAR_8;






 FUNC_1(VAR_4, VAR_5, &VAR_7);





 VAR_7 &= VAR_1;
 FUNC_0(VAR_7, &VAR_5, &VAR_6);

 FUNC_1(VAR_4, VAR_5, &VAR_8);

 return (VAR_8 >> VAR_6) & VAR_2;
}
