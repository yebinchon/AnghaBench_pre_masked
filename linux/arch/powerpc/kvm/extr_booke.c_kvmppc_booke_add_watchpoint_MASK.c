
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint64_t ;
struct debug_reg {int dbcr0; void* dac2; void* dac1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_0(struct debug_reg *VAR_8, uint64_t VAR_9,
           int VAR_10, int VAR_11)
{
 switch (VAR_11) {
 case 0:
  if (VAR_10 & VAR_6)
   VAR_8->dbcr0 |= VAR_0;
  if (VAR_10 & VAR_7)
   VAR_8->dbcr0 |= VAR_1;
  VAR_8->dac1 = VAR_9;
  break;
 case 1:
  if (VAR_10 & VAR_6)
   VAR_8->dbcr0 |= VAR_2;
  if (VAR_10 & VAR_7)
   VAR_8->dbcr0 |= VAR_3;
  VAR_8->dac2 = VAR_9;
  break;
 default:
  return -VAR_5;
 }

 VAR_8->dbcr0 |= VAR_4;
 return 0;
}
