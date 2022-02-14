
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mem_ctl_info {struct i5100_priv* pvt_info; } ;
struct i5100_priv {int mc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mem_ctl_info*,int ,scalar_t__,int ) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct mem_ctl_info *VAR_2)
{
 struct i5100_priv *VAR_3 = VAR_2->pvt_info;
 u32 VAR_4, VAR_5;

 FUNC_4(VAR_3->mc, VAR_0, &VAR_4);
 if (FUNC_0(VAR_4)) {

  FUNC_4(VAR_3->mc, VAR_1, &VAR_5);

  FUNC_3(VAR_2, FUNC_1(VAR_4),
          FUNC_0(VAR_4),
          FUNC_2(VAR_5));

  FUNC_5(VAR_3->mc, VAR_1, VAR_5);
 }
 FUNC_5(VAR_3->mc, VAR_0, VAR_4);
}
