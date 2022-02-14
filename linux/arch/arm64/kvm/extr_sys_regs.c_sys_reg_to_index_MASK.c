
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sys_reg_desc {int Op0; int Op1; int CRn; int CRm; int Op2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static u64 FUNC_0(const struct sys_reg_desc *VAR_8)
{
 return (VAR_0 | VAR_7 |
  VAR_1 |
  (VAR_8->Op0 << VAR_4) |
  (VAR_8->Op1 << VAR_5) |
  (VAR_8->CRn << VAR_3) |
  (VAR_8->CRm << VAR_2) |
  (VAR_8->Op2 << VAR_6));
}
