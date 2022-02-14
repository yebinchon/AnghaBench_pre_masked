
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint64_t ;
struct debug_reg {int dbcr0; void* iac4; void* iac3; void* iac2; void* iac1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_0(struct debug_reg *VAR_6,
           uint64_t VAR_7, int VAR_8)
{
 switch (VAR_8) {
 case 0:
  VAR_6->dbcr0 |= VAR_0;
  VAR_6->iac1 = VAR_7;
  break;
 case 1:
  VAR_6->dbcr0 |= VAR_1;
  VAR_6->iac2 = VAR_7;
  break;
 default:
  return -VAR_5;
 }

 VAR_6->dbcr0 |= VAR_4;
 return 0;
}
