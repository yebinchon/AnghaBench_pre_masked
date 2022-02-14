
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ib_port_attr {int port_cap_flags; scalar_t__ ip_gids; } ;


 int VAR_0 ;

__attribute__((used)) static inline u32 FUNC_0(const struct ib_port_attr *VAR_1)
{
 u32 VAR_2;






 VAR_2 = VAR_1->port_cap_flags & ~(u32)VAR_0;

 if (VAR_1->ip_gids)
  VAR_2 |= VAR_0;

 return VAR_2;
}
