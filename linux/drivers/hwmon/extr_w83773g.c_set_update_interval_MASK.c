
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (long) ;
 int FUNC_1 (long,int,int) ;
 int FUNC_2 (struct regmap*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct regmap *VAR_1, long VAR_2)
{
 int VAR_3;
 VAR_2 = FUNC_1(VAR_2, 62, 16000) * 10;
 VAR_3 = 8 - FUNC_0((VAR_2 * 8 / (625 * 7)));
 return FUNC_2(VAR_1, VAR_0, VAR_3);
}
