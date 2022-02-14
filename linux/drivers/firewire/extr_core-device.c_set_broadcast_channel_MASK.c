
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_device {int max_rec; scalar_t__ bc_implemented; int max_speed; int node_id; int irmc; struct fw_card* card; } ;
struct fw_card {int broadcast_channel_allocated; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;


 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct fw_card*,int ,int ,int,int ,scalar_t__,int*,int) ;

__attribute__((used)) static void FUNC_2(struct fw_device *VAR_9, int VAR_10)
{
 struct fw_card *VAR_11 = VAR_9->card;
 __be32 VAR_12;
 int VAR_13;

 if (!VAR_11->broadcast_channel_allocated)
  return;
 if (!VAR_9->irmc || VAR_9->max_rec < 8)
  return;





 if (VAR_9->bc_implemented == VAR_2) {
  VAR_13 = FUNC_1(VAR_11, VAR_7,
    VAR_9->node_id, VAR_10, VAR_9->max_speed,
    VAR_6 + VAR_5,
    &VAR_12, 4);
  switch (VAR_13) {
  case 128:
   if (VAR_12 & FUNC_0(1 << 31)) {
    VAR_9->bc_implemented = VAR_0;
    break;
   }

  case 129:
   VAR_9->bc_implemented = VAR_1;
  }
 }

 if (VAR_9->bc_implemented == VAR_0) {
  VAR_12 = FUNC_0(VAR_3 |
       VAR_4);
  FUNC_1(VAR_11, VAR_8,
    VAR_9->node_id, VAR_10, VAR_9->max_speed,
    VAR_6 + VAR_5,
    &VAR_12, 4);
 }
}
