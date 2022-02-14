
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct btmrvl_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct btmrvl_private*,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct btmrvl_private *VAR_1)
{
 int VAR_2;
 u8 VAR_3 = 0;

 VAR_2 = FUNC_1(VAR_1, VAR_0, &VAR_3, 1);
 if (VAR_2)
  FUNC_0("BT_CMD_ROUTE_SCO_TO_HOST command failed: %#x", VAR_2);

 return VAR_2;
}
