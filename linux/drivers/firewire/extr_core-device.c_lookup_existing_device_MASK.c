
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_node {int node_id; struct fw_device* data; } ;
struct fw_device {int workfn; scalar_t__ config_rom_retries; int generation; int node_id; int max_speed; struct fw_node* node; int state; int config_rom; struct fw_card* card; } ;
struct fw_card {int lock; struct fw_node* root_node; int generation; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 struct fw_device* FUNC_3 (struct device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct fw_card*,char*,int ) ;
 int FUNC_5 (struct fw_card*,int ) ;
 int FUNC_6 (struct fw_device*,int ) ;
 int FUNC_7 (struct device*) ;
 scalar_t__ FUNC_8 (int ,int ,int) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct device *VAR_4, void *VAR_5)
{
 struct fw_device *VAR_6 = FUNC_3(VAR_4);
 struct fw_device *VAR_7 = VAR_5;
 struct fw_card *VAR_8 = VAR_7->card;
 int VAR_9 = 0;

 if (!FUNC_7(VAR_4))
  return 0;

 FUNC_2(&VAR_2);
 FUNC_10(&VAR_8->lock);

 if (FUNC_8(VAR_6->config_rom, VAR_7->config_rom, 6 * 4) == 0 &&
     FUNC_0(&VAR_6->state,
      VAR_0,
      VAR_1) == VAR_0) {
  struct fw_node *VAR_10 = VAR_7->node;
  struct fw_node *VAR_11 = VAR_6->node;

  VAR_7->node = VAR_11;
  VAR_7->node->data = VAR_7;
  VAR_6->node = VAR_10;
  VAR_6->node->data = VAR_6;

  VAR_6->max_speed = VAR_7->max_speed;
  VAR_6->node_id = VAR_10->node_id;
  FUNC_9();
  VAR_6->generation = VAR_8->generation;
  VAR_6->config_rom_retries = 0;
  FUNC_4(VAR_8, "rediscovered device %s\n", FUNC_1(VAR_4));

  VAR_6->workfn = VAR_3;
  FUNC_6(VAR_6, 0);

  if (VAR_10 == VAR_8->root_node)
   FUNC_5(VAR_8, 0);

  VAR_9 = 1;
 }

 FUNC_11(&VAR_8->lock);
 FUNC_12(&VAR_2);

 return VAR_9;
}
