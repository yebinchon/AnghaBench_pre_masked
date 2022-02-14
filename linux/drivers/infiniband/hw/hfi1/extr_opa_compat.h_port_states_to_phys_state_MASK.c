
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct opa_port_states {int portphysstate_portstate; } ;


 int VAR_0 ;

__attribute__((used)) static inline u8 FUNC_0(struct opa_port_states *VAR_1)
{
 return ((VAR_1->portphysstate_portstate &
    VAR_0) >> 4) & 0xf;
}
