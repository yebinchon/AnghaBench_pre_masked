
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int u8 ;
struct bt_bmc {scalar_t__ offset; int map; } ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__*) ;

__attribute__((used)) static u8 FUNC_2(struct bt_bmc *VAR_0, int VAR_1)
{
 uint32_t VAR_2 = 0;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0->map, VAR_0->offset + VAR_1, &VAR_2);
 FUNC_0(VAR_3 != 0, "regmap_read() failed: %d\n", VAR_3);

 return VAR_3 == 0 ? (u8) VAR_2 : 0;
}
