
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ rev_id; scalar_t__ dev_id; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;

int FUNC_2(u32 *VAR_3, u32 *VAR_4)
{
 if (FUNC_0("marvell,armada380") &&
  VAR_2) {
  *VAR_3 = FUNC_1(VAR_2 + VAR_1->dev_id) >> 16;
  *VAR_4 = (FUNC_1(VAR_2 + VAR_1->rev_id) >> 8)
   & 0xF;
  return 0;
 } else
  return -VAR_0;
}
