
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct btmrvl_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct btmrvl_private*,int ,int *,int) ;

int FUNC_2(struct btmrvl_private *VAR_1, u8 VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0, &VAR_2, 1);
 if (VAR_3)
  FUNC_0("module_cfg_cmd(%x) failed", VAR_2);

 return VAR_3;
}
