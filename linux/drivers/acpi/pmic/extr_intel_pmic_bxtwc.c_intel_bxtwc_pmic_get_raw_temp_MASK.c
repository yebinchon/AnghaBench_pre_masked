
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct regmap {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (struct regmap*,int,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct regmap *VAR_1, int VAR_2)
{
 unsigned int VAR_3, VAR_4, VAR_5;
 u8 VAR_6, VAR_7, VAR_8;
 unsigned long VAR_9;
 static const unsigned long VAR_10[] = {
  0, 260420, 130210, 65100, 32550, 16280,
  8140, 4070, 2030, 0, 260420, 130210 };

 if (FUNC_2(VAR_1, VAR_2, &VAR_3))
  return -VAR_0;
 VAR_6 = (u8) VAR_3;

 if (FUNC_2(VAR_1, (VAR_2 - 1), &VAR_3))
  return -VAR_0;
 VAR_7 = (u8) VAR_3;

 VAR_5 = VAR_6 | FUNC_1(VAR_7);
 VAR_8 = FUNC_0(VAR_7);
 VAR_9 = VAR_10[VAR_8];
 VAR_4 = VAR_5 * VAR_9 / 1000;

 return VAR_4;
}
