
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct coproc_reg {int Op1; int CRn; int Op2; int CRm; scalar_t__ is_64bit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static u64 FUNC_0(const struct coproc_reg *VAR_8)
{
 u64 VAR_9 = VAR_0 | (15 << VAR_3);
 if (VAR_8->is_64bit) {
  VAR_9 |= VAR_7;
  VAR_9 |= (VAR_8->Op1 << VAR_5);







  VAR_9 |= (VAR_8->CRn << VAR_4);
 } else {
  VAR_9 |= VAR_6;
  VAR_9 |= (VAR_8->Op1 << VAR_5);
  VAR_9 |= (VAR_8->Op2 << VAR_2);
  VAR_9 |= (VAR_8->CRm << VAR_4);
  VAR_9 |= (VAR_8->CRn << VAR_1);
 }
 return VAR_9;
}
