
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct switch_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct switch_dev*,int,int) ;

__attribute__((used)) static int
FUNC_1(struct switch_dev *VAR_1, int VAR_2,
  int VAR_3, u16 VAR_4, u16 VAR_5)
{
 int VAR_6 = 100;
 u16 VAR_7;

 do {
  VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3) & VAR_4;
  if (VAR_7 == VAR_5)
   return 0;
 } while (--VAR_6 > 0);

 return -VAR_0;
}
