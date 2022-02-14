
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hts221_hw {int regmap; } ;
typedef int s16 ;
typedef int data ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (struct hts221_hw*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_4(struct hts221_hw *VAR_1, u8 VAR_2, int *VAR_3)
{
 __le16 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, 1);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_2(50);

 VAR_5 = FUNC_3(VAR_1->regmap, VAR_2, &VAR_4, sizeof(VAR_4));
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_0(VAR_1, 0);

 *VAR_3 = (s16)FUNC_1(VAR_4);

 return VAR_0;
}
