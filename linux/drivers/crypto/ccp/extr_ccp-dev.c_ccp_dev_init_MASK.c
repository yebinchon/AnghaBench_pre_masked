
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sp_device {struct ccp_device* ccp_data; scalar_t__ io_map; int use_tasklet; TYPE_1__* dev_vdata; struct device* dev; } ;
struct device {int dummy; } ;
struct ccp_vdata {TYPE_2__* perform; int (* setup ) (struct ccp_device*) ;scalar_t__ offset; int version; } ;
struct ccp_device {struct ccp_vdata* vdata; scalar_t__ io_regs; int use_tasklet; scalar_t__ max_q_count; } ;
struct TYPE_4__ {int (* init ) (struct ccp_device*) ;} ;
struct TYPE_3__ {scalar_t__ ccp_vdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 struct ccp_device* FUNC_1 (struct sp_device*) ;
 int VAR_3 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct ccp_device*) ;
 int FUNC_5 (struct ccp_device*) ;

int FUNC_6(struct sp_device *VAR_6)
{
 struct device *VAR_7 = VAR_6->dev;
 struct ccp_device *VAR_8;
 int VAR_9;





 if (FUNC_0(&VAR_3) > VAR_4)
  return 0;

 VAR_9 = -VAR_1;
 VAR_8 = FUNC_1(VAR_6);
 if (!VAR_8)
  goto e_err;
 VAR_6->ccp_data = VAR_8;

 if (!VAR_5 || (VAR_5 > VAR_2))
  VAR_8->max_q_count = VAR_2;
 else
  VAR_8->max_q_count = VAR_5;

 VAR_8->vdata = (struct ccp_vdata *)VAR_6->dev_vdata->ccp_vdata;
 if (!VAR_8->vdata || !VAR_8->vdata->version) {
  VAR_9 = -VAR_0;
  FUNC_2(VAR_7, "missing driver data\n");
  goto e_err;
 }

 VAR_8->use_tasklet = VAR_6->use_tasklet;

 VAR_8->io_regs = VAR_6->io_map + VAR_8->vdata->offset;
 if (VAR_8->vdata->setup)
  VAR_8->vdata->setup(VAR_8);

 VAR_9 = VAR_8->vdata->perform->init(VAR_8);
 if (VAR_9)
  goto e_err;

 FUNC_3(VAR_7, "ccp enabled\n");

 return 0;

e_err:
 VAR_6->ccp_data = ((void*)0);

 FUNC_3(VAR_7, "ccp initialization failed\n");

 return VAR_9;
}
