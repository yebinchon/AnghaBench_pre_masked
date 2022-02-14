
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_mad_port_private {int port_num; int device; } ;


 size_t FUNC_0 (int ,int ) ;

__attribute__((used)) static size_t FUNC_1(const struct ib_mad_port_private *VAR_0)
{
 return FUNC_0(VAR_0->device, VAR_0->port_num);
}
