
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mem_ctl_info {struct i5100_priv* pvt_info; } ;
struct i5100_priv {int mc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct mem_ctl_info *VAR_1)
{
 struct i5100_priv *VAR_2 = VAR_1->pvt_info;
 u32 VAR_3;

 FUNC_1(VAR_2->mc, VAR_0, &VAR_3);

 return 5900000 * FUNC_0(VAR_3);
}
