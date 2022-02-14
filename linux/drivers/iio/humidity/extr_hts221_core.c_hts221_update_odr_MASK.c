
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct hts221_hw {scalar_t__ odr; int regmap; } ;
struct TYPE_3__ {scalar_t__ hz; int val; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct hts221_hw *VAR_4, u8 VAR_5)
{
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3); VAR_6++)
  if (VAR_3[VAR_6].hz == VAR_5)
   break;

 if (VAR_6 == FUNC_0(VAR_3))
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_4->regmap, VAR_2,
     VAR_1,
     FUNC_1(VAR_1,
         VAR_3[VAR_6].val));
 if (VAR_7 < 0)
  return VAR_7;

 VAR_4->odr = VAR_5;

 return 0;
}
