
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mem_ctl_info {int nr_csrows; int tot_dimms; scalar_t__ mod_name; int op_state; int dev_name; int ctl_name; int work; scalar_t__ edac_check; int bus; int start_time; TYPE_2__** dimms; struct csrow_info** csrows; } ;
struct csrow_info {int nr_channels; TYPE_3__** channels; } ;
struct attribute_group {int dummy; } ;
struct TYPE_6__ {TYPE_1__* dimm; } ;
struct TYPE_5__ {scalar_t__ nr_pages; } ;
struct TYPE_4__ {scalar_t__ nr_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct mem_ctl_info*) ;
 int FUNC_2 (struct mem_ctl_info*) ;
 scalar_t__ FUNC_3 (struct mem_ctl_info*,struct attribute_group const**) ;
 int FUNC_4 (int ,char*) ;
 int VAR_6 ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (struct csrow_info*) ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (struct mem_ctl_info*) ;
 int FUNC_10 () ;
 scalar_t__ VAR_7 ;
 int FUNC_11 (struct mem_ctl_info*,int ,char*,...) ;
 int VAR_8 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

int FUNC_17(struct mem_ctl_info *VAR_11,
          const struct attribute_group **VAR_12)
{
 int VAR_13 = -VAR_0;
 FUNC_4(0, "\n");
 FUNC_15(&VAR_10);

 if (VAR_7 && VAR_7 != VAR_11->mod_name) {
  VAR_13 = -VAR_1;
  goto fail0;
 }

 if (FUNC_1(VAR_11))
  goto fail0;


 VAR_11->start_time = VAR_9;

 VAR_11->bus = FUNC_5();

 if (FUNC_3(VAR_11, VAR_12)) {
  FUNC_11(VAR_11, VAR_3,
   "failed to create sysfs device\n");
  goto fail1;
 }

 if (VAR_11->edac_check) {
  VAR_11->op_state = VAR_5;

  FUNC_0(&VAR_11->work, VAR_8);
  FUNC_13(&VAR_11->work, FUNC_14(FUNC_10()));

 } else {
  VAR_11->op_state = VAR_4;
 }


 FUNC_11(VAR_11, VAR_2,
  "Giving out device to module %s controller %s: DEV %s (%s)\n",
  VAR_11->mod_name, VAR_11->ctl_name, VAR_11->dev_name,
  FUNC_12(VAR_11->op_state));

 VAR_7 = VAR_11->mod_name;

 FUNC_16(&VAR_10);
 return 0;

fail1:
 FUNC_2(VAR_11);

fail0:
 FUNC_16(&VAR_10);
 return VAR_13;
}
