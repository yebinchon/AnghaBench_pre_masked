
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct fw_card {int lock; TYPE_1__* irm_node; } ;
struct TYPE_2__ {int node_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fw_card*,int,int,int) ;
 int FUNC_1 (struct fw_card*,int,int,int,int) ;
 int FUNC_2 (struct fw_card*,int,int,int,scalar_t__,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct fw_card *VAR_4, int VAR_5,
       u64 VAR_6, int *VAR_7, int *VAR_8,
       bool VAR_9)
{
 u32 VAR_10 = VAR_6;
 u32 VAR_11 = VAR_6 >> 32;
 int VAR_12, VAR_13, VAR_14 = -VAR_3;

 FUNC_3(&VAR_4->lock);
 VAR_12 = VAR_4->irm_node->node_id;
 FUNC_4(&VAR_4->lock);

 if (VAR_10)
  VAR_14 = FUNC_2(VAR_4, VAR_12, VAR_5, VAR_10,
    VAR_2 + VAR_0,
    VAR_9);
 if (VAR_11 && VAR_14 < 0) {
  VAR_14 = FUNC_2(VAR_4, VAR_12, VAR_5, VAR_11,
    VAR_2 + VAR_1,
    VAR_9);
  if (VAR_14 >= 0)
   VAR_14 += 32;
 }
 *VAR_7 = VAR_14;

 if (VAR_9 && VAR_6 != 0 && VAR_14 < 0)
  *VAR_8 = 0;

 if (*VAR_8 == 0)
  return;

 VAR_13 = FUNC_1(VAR_4, VAR_12, VAR_5, *VAR_8, VAR_9);
 if (VAR_13 < 0)
  *VAR_8 = 0;

 if (VAR_9 && VAR_13 < 0) {
  if (VAR_14 >= 0)
   FUNC_0(VAR_4, VAR_12, VAR_5, VAR_14);
  *VAR_7 = VAR_13;
 }
}
