
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct regmap {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct regmap*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct regmap *VAR_1, int VAR_2, bool VAR_3)
{
 u32 VAR_4, VAR_5;

 VAR_5 = FUNC_1(VAR_2);

 if (VAR_3)
  VAR_4 = VAR_5;
 else
  VAR_4 = 0;

 FUNC_2(VAR_1, FUNC_0(VAR_0),
      VAR_5, VAR_4);
}
