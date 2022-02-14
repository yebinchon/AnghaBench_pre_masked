
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fw_node {int dummy; } ;
struct fw_card {int generation; int node_id; int bm_node_id; int bm_abdicate; int lock; struct fw_node* local_node; int color; int reset_jiffies; int broadcast_channel_auto_allocated; int broadcast_channel_allocated; scalar_t__ bm_retries; } ;


 struct fw_node* FUNC_0 (struct fw_card*,int *,int) ;
 int FUNC_1 (struct fw_card*,struct fw_node*,int ) ;
 int FUNC_2 (struct fw_card*) ;
 int FUNC_3 (struct fw_card*,char*) ;
 int FUNC_4 (struct fw_card*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int,int) ;
 int VAR_0 ;
 int FUNC_7 () ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct fw_card*,int *,int) ;
 int FUNC_11 (struct fw_card*,struct fw_node*) ;

void FUNC_12(struct fw_card *VAR_1, int VAR_2, int VAR_3,
         int VAR_4, u32 *VAR_5, bool VAR_6)
{
 struct fw_node *VAR_7;
 unsigned long VAR_8;






 if (!FUNC_6(VAR_3, VAR_1->generation) &&
     VAR_1->local_node != ((void*)0)) {
  FUNC_2(VAR_1);
  VAR_1->bm_retries = 0;
 }

 FUNC_8(&VAR_1->lock, VAR_8);

 VAR_1->broadcast_channel_allocated = VAR_1->broadcast_channel_auto_allocated;
 VAR_1->node_id = VAR_2;




 FUNC_7();
 VAR_1->generation = VAR_3;
 VAR_1->reset_jiffies = FUNC_5();
 VAR_1->bm_node_id = 0xffff;
 VAR_1->bm_abdicate = VAR_6;
 FUNC_4(VAR_1, 0);

 VAR_7 = FUNC_0(VAR_1, VAR_5, VAR_4);

 FUNC_10(VAR_1, VAR_5, VAR_4);

 VAR_1->color++;

 if (VAR_7 == ((void*)0)) {
  FUNC_3(VAR_1, "topology build failed\n");

 } else if (VAR_1->local_node == ((void*)0)) {
  VAR_1->local_node = VAR_7;
  FUNC_1(VAR_1, VAR_7, VAR_0);
 } else {
  FUNC_11(VAR_1, VAR_7);
 }

 FUNC_9(&VAR_1->lock, VAR_8);
}
