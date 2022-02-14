
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct fpga_manager_ops {int groups; scalar_t__ write_sg; scalar_t__ write; int write_init; int state; int write_complete; } ;
struct TYPE_3__ {int id; int of_node; struct device* parent; int groups; int class; } ;
struct fpga_manager {char const* name; TYPE_1__ dev; void* priv; struct fpga_manager_ops const* mops; int ref_mutex; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct fpga_manager*) ;
 struct fpga_manager* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char const*) ;

struct fpga_manager *FUNC_9(struct device *VAR_3, const char *VAR_4,
         const struct fpga_manager_ops *VAR_5,
         void *VAR_6)
{
 struct fpga_manager *VAR_7;
 int VAR_8, VAR_9;

 if (!VAR_5 || !VAR_5->write_complete || !VAR_5->state ||
     !VAR_5->write_init || (!VAR_5->write && !VAR_5->write_sg) ||
     (VAR_5->write && VAR_5->write_sg)) {
  FUNC_0(VAR_3, "Attempt to register without fpga_manager_ops\n");
  return ((void*)0);
 }

 if (!VAR_4 || !FUNC_8(VAR_4)) {
  FUNC_0(VAR_3, "Attempt to register with no name!\n");
  return ((void*)0);
 }

 VAR_7 = FUNC_6(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return ((void*)0);

 VAR_8 = FUNC_3(&VAR_2, 0, 0, VAR_0);
 if (VAR_8 < 0) {
  VAR_9 = VAR_8;
  goto error_kfree;
 }

 FUNC_7(&VAR_7->ref_mutex);

 VAR_7->name = VAR_4;
 VAR_7->mops = VAR_5;
 VAR_7->priv = VAR_6;

 FUNC_2(&VAR_7->dev);
 VAR_7->dev.class = VAR_1;
 VAR_7->dev.groups = VAR_5->groups;
 VAR_7->dev.parent = VAR_3;
 VAR_7->dev.of_node = VAR_3->of_node;
 VAR_7->dev.id = VAR_8;

 VAR_9 = FUNC_1(&VAR_7->dev, "fpga%d", VAR_8);
 if (VAR_9)
  goto error_device;

 return VAR_7;

error_device:
 FUNC_4(&VAR_2, VAR_8);
error_kfree:
 FUNC_5(VAR_7);

 return ((void*)0);
}
