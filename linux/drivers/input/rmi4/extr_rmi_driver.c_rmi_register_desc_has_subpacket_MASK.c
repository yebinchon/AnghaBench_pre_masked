
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rmi_register_desc_item {int subpacket_map; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

bool FUNC_1(const struct rmi_register_desc_item *VAR_1,
 u8 VAR_2)
{
 return FUNC_0(VAR_1->subpacket_map, VAR_0,
    VAR_2) == VAR_2;
}
