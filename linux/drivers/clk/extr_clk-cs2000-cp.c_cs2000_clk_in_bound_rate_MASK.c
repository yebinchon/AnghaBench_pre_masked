
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cs2000_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct cs2000_priv*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct cs2000_priv *VAR_3,
        u32 VAR_4)
{
 u32 VAR_5;

 if (VAR_4 >= 32000000 && VAR_4 < 56000000)
  VAR_5 = 0x0;
 else if (VAR_4 >= 16000000 && VAR_4 < 28000000)
  VAR_5 = 0x1;
 else if (VAR_4 >= 8000000 && VAR_4 < 14000000)
  VAR_5 = 0x2;
 else
  return -VAR_0;

 return FUNC_1(VAR_3, VAR_1,
      VAR_2,
      FUNC_0(VAR_5));
}
