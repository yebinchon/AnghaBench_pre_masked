
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cs2000_priv {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int,unsigned int) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct cs2000_priv*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct cs2000_priv *VAR_2,
       int VAR_3, u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 if (FUNC_0(VAR_3))
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_4, VAR_5);
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_8 = FUNC_4(VAR_2,
       FUNC_1(VAR_3, VAR_7),
       FUNC_2(VAR_6, VAR_7));
  if (VAR_8 < 0)
   return VAR_8;
 }

 return 0;
}
