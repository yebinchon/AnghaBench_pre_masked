
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bt_bmc {scalar_t__ offset; int map; } ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct bt_bmc *VAR_0, u8 VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0->map, VAR_0->offset + VAR_2, VAR_1);
 FUNC_0(VAR_3 != 0, "regmap_write() failed: %d\n", VAR_3);
}
