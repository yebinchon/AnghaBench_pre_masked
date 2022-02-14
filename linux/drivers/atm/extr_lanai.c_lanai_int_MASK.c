
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lanai_dev {int conf1; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lanai_dev*) ;
 int FUNC_1 (struct lanai_dev*,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct lanai_dev *VAR_5 = VAR_4;
 u32 VAR_6;
 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6 == 0)
  return VAR_2;

 do {
  if (FUNC_2(VAR_6 == 0xFFFFFFFF))
   break;
  FUNC_1(VAR_5, VAR_6);
  VAR_6 = FUNC_0(VAR_5);
 } while (VAR_6 != 0);

 return VAR_1;
}
