
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct microcode {scalar_t__ num_cores; scalar_t__ group; void* core_mask; int version; scalar_t__ is_ae; } ;
struct device {int dummy; } ;
struct cpt_device {scalar_t__ max_ae_cores; scalar_t__ next_group; scalar_t__ max_se_cores; int flags; TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (scalar_t__,int ) ;
 int VAR_5 ;
 int FUNC_1 (struct cpt_device*,scalar_t__,void*,int ) ;
 int FUNC_2 (struct cpt_device*) ;
 int FUNC_3 (struct cpt_device*,void*,int ,scalar_t__) ;
 int FUNC_4 (struct cpt_device*,void*,int ) ;
 int FUNC_5 (struct cpt_device*) ;
 int FUNC_6 (struct cpt_device*,struct microcode*) ;
 int FUNC_7 (struct device*,char*,...) ;

__attribute__((used)) static int FUNC_8(struct cpt_device *VAR_6, struct microcode *VAR_7)
{
 int VAR_8 = 0;
 struct device *VAR_9 = &VAR_6->pdev->dev;


 VAR_6->flags &= ~VAR_1;

 FUNC_2(VAR_6);

 if (VAR_7->is_ae) {
  if (VAR_7->num_cores > VAR_6->max_ae_cores) {
   FUNC_7(VAR_9, "Requested for more cores than available AE cores\n");
   VAR_8 = -VAR_3;
   goto cpt_init_fail;
  }

  if (VAR_6->next_group >= VAR_2) {
   FUNC_7(VAR_9, "Can't load, all eight microcode groups in use");
   return -VAR_4;
  }

  VAR_7->group = VAR_6->next_group;

  VAR_7->core_mask = FUNC_0(VAR_7->num_cores, 0);
  FUNC_3(VAR_6, VAR_7->core_mask, VAR_0,
      VAR_7->group);

  VAR_8 = FUNC_6(VAR_6, VAR_7);
  if (VAR_8) {
   FUNC_7(VAR_9, "Microcode load Failed for %s\n",
    VAR_7->version);
   goto cpt_init_fail;
  }
  VAR_6->next_group++;

  FUNC_1(VAR_6, VAR_7->group, VAR_7->core_mask,
        VAR_0);

  FUNC_4(VAR_6, VAR_7->core_mask, VAR_0);
 } else {
  if (VAR_7->num_cores > VAR_6->max_se_cores) {
   FUNC_7(VAR_9, "Requested for more cores than available SE cores\n");
   VAR_8 = -VAR_3;
   goto cpt_init_fail;
  }
  if (VAR_6->next_group >= VAR_2) {
   FUNC_7(VAR_9, "Can't load, all eight microcode groups in use");
   return -VAR_4;
  }

  VAR_7->group = VAR_6->next_group;

  VAR_7->core_mask = FUNC_0(VAR_7->num_cores, 0);
  FUNC_3(VAR_6, VAR_7->core_mask, VAR_5,
      VAR_7->group);

  VAR_8 = FUNC_6(VAR_6, VAR_7);
  if (VAR_8) {
   FUNC_7(VAR_9, "Microcode load Failed for %s\n",
    VAR_7->version);
   goto cpt_init_fail;
  }
  VAR_6->next_group++;

  FUNC_1(VAR_6, VAR_7->group, VAR_7->core_mask,
        VAR_5);

  FUNC_4(VAR_6, VAR_7->core_mask, VAR_5);
 }


 FUNC_5(VAR_6);
 VAR_6->flags |= VAR_1;

 return VAR_8;

cpt_init_fail:

 FUNC_5(VAR_6);

 return VAR_8;
}
