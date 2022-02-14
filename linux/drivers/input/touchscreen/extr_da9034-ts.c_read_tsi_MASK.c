
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct da9034_touch {int last_x; int last_y; int da9034_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct da9034_touch *VAR_3)
{
 uint8_t VAR_4, VAR_5, VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_3->da9034_dev, VAR_1, &VAR_4);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_3->da9034_dev, VAR_2, &VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_3->da9034_dev, VAR_0, &VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_3->last_x = ((VAR_4 << 2) & 0x3fc) | (VAR_6 & 0x3);
 VAR_3->last_y = ((VAR_5 << 2) & 0x3fc) | ((VAR_6 & 0xc) >> 2);

 return 0;
}
