
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hix5hd2_i2c_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hix5hd2_i2c_priv*) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct hix5hd2_i2c_priv *VAR_3)
{
 unsigned long VAR_4;
 u32 VAR_5;


 VAR_4 = VAR_2 + FUNC_1(100);
 do {
  VAR_5 = FUNC_0(VAR_3);
  if (!(VAR_5 & VAR_1))
   return 0;

  FUNC_3(50, 200);
 } while (FUNC_2(VAR_2, VAR_4));

 return -VAR_0;
}
