
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct stv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct stv*,int,int*) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct stv *VAR_1, u8 VAR_2)
{
 int VAR_3 = 0;
 u32 VAR_4 = 10;

 while (VAR_4 > 0) {
  u8 VAR_5;

  VAR_3 = FUNC_0(VAR_1, 9, &VAR_5);
  if (VAR_3 < 0)
   return VAR_3;

  if ((VAR_5 & VAR_2) == 0)
   break;
  FUNC_1(4000, 6000);
  VAR_4 -= 1;

  VAR_3 = -VAR_0;
 }
 return VAR_3;
}
