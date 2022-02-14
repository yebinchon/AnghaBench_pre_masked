
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecc_curve {int dummy; } ;
typedef enum OID { ____Placeholder_OID } OID ;
 struct ecc_curve const VAR_0 ;
 struct ecc_curve const VAR_1 ;
 struct ecc_curve const VAR_2 ;
 struct ecc_curve const VAR_3 ;
 struct ecc_curve const VAR_4 ;

__attribute__((used)) static const struct ecc_curve *FUNC_0(enum OID VAR_5)
{
 switch (VAR_5) {
 case 137:
 case 133:
  return &VAR_0;
 case 136:
 case 132:
  return &VAR_1;
 case 135:
 case 131:
  return &VAR_2;
 case 130:
  return &VAR_3;
 case 129:
  return &VAR_4;

 case 134:
 case 128:
 default:
  return ((void*)0);
 }
}
