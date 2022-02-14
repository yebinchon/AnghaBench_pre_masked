
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int attr_mod; } ;
struct opa_vnic_vema_mad {TYPE_1__ mad_hdr; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline u8 FUNC_1(struct opa_vnic_vema_mad *VAR_0)
{
 return FUNC_0(VAR_0->mad_hdr.attr_mod) & 0xff;
}
