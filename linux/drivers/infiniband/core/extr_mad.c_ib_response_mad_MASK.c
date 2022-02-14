
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_mad_hdr {int method; scalar_t__ mgmt_class; int attr_mod; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_0(const struct ib_mad_hdr *VAR_4)
{
 return ((VAR_4->method & VAR_2) ||
  (VAR_4->method == VAR_3) ||
  ((VAR_4->mgmt_class == VAR_1) &&
   (VAR_4->attr_mod & VAR_0)));
}
