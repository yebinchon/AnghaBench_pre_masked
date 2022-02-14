
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_mad_hdr {scalar_t__ mgmt_class; int method; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;




__attribute__((used)) static int FUNC_0(struct ib_mad_hdr *VAR_3)
{
 if (VAR_3->mgmt_class == VAR_0) {
  switch (VAR_3->method) {
  case 129:
  case 128:
  case 130:
   return 1;
  default:
   break;
  }
 } else if ((VAR_3->mgmt_class >= VAR_2) &&
     (VAR_3->mgmt_class <= VAR_1))
  return 1;

 return 0;
}
