
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mem_ctl_info {struct i5100_priv* pvt_info; } ;
struct i5100_priv {int mc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,int,int,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(const struct mem_ctl_info *VAR_4,
          u8 VAR_5, u8 VAR_6, u8 VAR_7, u8 *VAR_8)
{
 struct i5100_priv *VAR_9 = VAR_4->pvt_info;
 u16 VAR_10;
 unsigned long VAR_11;

 FUNC_5(VAR_9->mc, VAR_2, &VAR_10);
 if (FUNC_1(VAR_10))
  return -1;

 FUNC_6(VAR_9->mc, VAR_1,
          FUNC_0(0xa, 1, VAR_5 * 4 + VAR_6, VAR_7,
         0, 0));


 VAR_11 = VAR_3 + VAR_0 / 10;
 FUNC_7(100);
 while (1) {
  FUNC_5(VAR_9->mc, VAR_2, &VAR_10);
  if (!FUNC_1(VAR_10))
   break;
  FUNC_7(100);
 }

 if (!FUNC_3(VAR_10) || FUNC_4(VAR_10))
  return -1;

 *VAR_8 = FUNC_2(VAR_10);

 return 0;
}
