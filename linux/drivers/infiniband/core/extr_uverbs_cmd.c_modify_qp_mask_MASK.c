
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(enum ib_qp_type VAR_5, int VAR_6)
{
 switch (VAR_5) {
 case 129:
  return VAR_6 & ~(VAR_0 | VAR_2);
 case 128:
  return VAR_6 & ~(VAR_1 | VAR_3 |
    VAR_4);
 default:
  return VAR_6;
 }
}
