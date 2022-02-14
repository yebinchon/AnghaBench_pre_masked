
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct irq_domain {int dummy; } ;
struct device {struct device* parent; } ;
struct TYPE_3__ {scalar_t__ region_count; int id; } ;
struct fsl_mc_device {int * mc_io; struct device dev; int mc_handle; TYPE_1__ obj_desc; TYPE_2__* regions; } ;
struct fsl_mc_bus {int scan_mutex; int dprc_attr; } ;
struct TYPE_4__ {int start; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,scalar_t__,...) ;
 struct irq_domain* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*) ;
 scalar_t__ FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,struct irq_domain*) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_8 (int *,int ,int ,int *) ;
 int FUNC_9 (int *,int ,int ,int *) ;
 int FUNC_10 (struct fsl_mc_device*) ;
 int FUNC_11 (struct fsl_mc_device*) ;
 int FUNC_12 (struct device*,int ,size_t,int *,int ,int **) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct device*,struct irq_domain**) ;
 int FUNC_15 (struct fsl_mc_device*) ;
 int FUNC_16 (int *) ;
 size_t FUNC_17 (TYPE_2__*) ;
 struct fsl_mc_bus* FUNC_18 (struct fsl_mc_device*) ;

__attribute__((used)) static int FUNC_19(struct fsl_mc_device *VAR_5)
{
 int VAR_6;
 size_t VAR_7;
 struct device *VAR_8 = VAR_5->dev.parent;
 struct fsl_mc_bus *VAR_9 = FUNC_18(VAR_5);
 bool VAR_10 = 0;
 bool VAR_11 = 0;
 u16 VAR_12, VAR_13;

 if (!FUNC_15(VAR_5))
  return -VAR_2;

 if (FUNC_1(&VAR_5->dev))
  return -VAR_2;

 if (!VAR_5->mc_io) {



  if (!FUNC_3(VAR_8))
   return -VAR_2;

  if (VAR_5->obj_desc.region_count == 0)
   return -VAR_2;

  VAR_7 = FUNC_17(VAR_5->regions);

  VAR_6 = FUNC_12(&VAR_5->dev,
      VAR_5->regions[0].start,
      VAR_7,
      ((void*)0),
      VAR_4,
      &VAR_5->mc_io);
  if (VAR_6 < 0)
   return VAR_6;

  VAR_10 = 1;




  FUNC_4(&VAR_5->dev,
       FUNC_1(VAR_8));
  VAR_11 = 1;
 } else {



  struct irq_domain *VAR_14;

  if (FUNC_3(VAR_8))
   return -VAR_2;

  VAR_6 = FUNC_14(VAR_8,
            &VAR_14);
  if (VAR_6 < 0) {
   FUNC_5(&VAR_5->dev,
     "WARNING: MC bus without interrupt support\n");
  } else {
   FUNC_4(&VAR_5->dev, VAR_14);
   VAR_11 = 1;
  }
 }

 VAR_6 = FUNC_9(VAR_5->mc_io, 0, VAR_5->obj_desc.id,
     &VAR_5->mc_handle);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_5->dev, "dprc_open() failed: %d\n", VAR_6);
  goto error_cleanup_msi_domain;
 }

 VAR_6 = FUNC_8(VAR_5->mc_io, 0, VAR_5->mc_handle,
        &VAR_9->dprc_attr);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_5->dev, "dprc_get_attributes() failed: %d\n",
   VAR_6);
  goto error_cleanup_open;
 }

 VAR_6 = FUNC_7(VAR_5->mc_io, 0,
         &VAR_12,
         &VAR_13);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_5->dev, "dprc_get_api_version() failed: %d\n",
   VAR_6);
  goto error_cleanup_open;
 }

 if (VAR_12 < VAR_0 ||
     (VAR_12 == VAR_0 &&
      VAR_13 < VAR_1)) {
  FUNC_0(&VAR_5->dev,
   "ERROR: DPRC version %d.%d not supported\n",
   VAR_12, VAR_13);
  VAR_6 = -VAR_3;
  goto error_cleanup_open;
 }

 FUNC_16(&VAR_9->scan_mutex);




 VAR_6 = FUNC_10(VAR_5);
 if (VAR_6 < 0)
  goto error_cleanup_open;




 VAR_6 = FUNC_11(VAR_5);
 if (VAR_6 < 0)
  goto error_cleanup_open;

 FUNC_2(&VAR_5->dev, "DPRC device bound to driver");
 return 0;

error_cleanup_open:
 (void)FUNC_6(VAR_5->mc_io, 0, VAR_5->mc_handle);

error_cleanup_msi_domain:
 if (VAR_11)
  FUNC_4(&VAR_5->dev, ((void*)0));

 if (VAR_10) {
  FUNC_13(VAR_5->mc_io);
  VAR_5->mc_io = ((void*)0);
 }

 return VAR_6;
}
