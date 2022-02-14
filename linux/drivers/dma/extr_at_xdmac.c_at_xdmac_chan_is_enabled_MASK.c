
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at_xdmac_chan {int mask; } ;


 int VAR_0 ;
 int FUNC_0 (struct at_xdmac_chan*,int ) ;

__attribute__((used)) static bool FUNC_1(struct at_xdmac_chan *VAR_1)
{
 return FUNC_0(VAR_1, VAR_0) & VAR_1->mask;
}
