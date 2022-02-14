
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cs2000_priv {int dummy; } ;
typedef scalar_t__ s32 ;


 unsigned int VAR_0 ;
 int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (scalar_t__,unsigned int) ;
 scalar_t__ FUNC_2 (struct cs2000_priv*,int ) ;

__attribute__((used)) static u32 FUNC_3(struct cs2000_priv *VAR_1, int VAR_2)
{
 s32 VAR_3;
 u32 VAR_4;
 unsigned int VAR_5;

 VAR_4 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_3 = FUNC_2(VAR_1, FUNC_0(VAR_2, VAR_5));
  if (VAR_3 < 0)
   return 0;

  VAR_4 |= FUNC_1(VAR_3, VAR_5);
 }

 return VAR_4;
}
