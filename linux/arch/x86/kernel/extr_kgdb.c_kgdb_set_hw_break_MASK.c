
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum kgdb_bptype { ____Placeholder_kgdb_bptype } kgdb_bptype ;
struct TYPE_2__ {int enabled; unsigned long addr; int len; int type; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(unsigned long VAR_9, int VAR_10, enum kgdb_bptype VAR_11)
{
 int VAR_12;

 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++)
  if (!VAR_8[VAR_12].enabled)
   break;
 if (VAR_12 == VAR_0)
  return -1;

 switch (VAR_11) {
 case 129:
  VAR_10 = 1;
  VAR_8[VAR_12].type = VAR_1;
  break;
 case 128:
  VAR_8[VAR_12].type = VAR_7;
  break;
 case 130:
  VAR_8[VAR_12].type = VAR_6;
  break;
 default:
  return -1;
 }
 switch (VAR_10) {
 case 1:
  VAR_8[VAR_12].len = VAR_2;
  break;
 case 2:
  VAR_8[VAR_12].len = VAR_3;
  break;
 case 4:
  VAR_8[VAR_12].len = VAR_4;
  break;





 default:
  return -1;
 }
 VAR_8[VAR_12].addr = VAR_9;
 if (FUNC_0(VAR_12)) {
  VAR_8[VAR_12].addr = 0;
  return -1;
 }
 VAR_8[VAR_12].enabled = 1;

 return 0;
}
