
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct dmx_section_filter {struct net_device* priv; } ;


 int FUNC_0 (struct net_device*,int const*,size_t) ;

__attribute__((used)) static int FUNC_1(const u8 *VAR_0, size_t VAR_1,
   const u8 *VAR_2, size_t VAR_3,
   struct dmx_section_filter *VAR_4, u32 *VAR_5)
{
 struct net_device *VAR_6 = VAR_4->priv;





 FUNC_0 (VAR_6, VAR_0, VAR_1);
 return 0;
}
