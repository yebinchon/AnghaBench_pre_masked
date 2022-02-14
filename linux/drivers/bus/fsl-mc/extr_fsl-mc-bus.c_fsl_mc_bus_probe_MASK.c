
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct resource {int start; } ;
struct TYPE_7__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mc_version {int revision; int minor; int major; } ;
struct fsl_mc_obj_desc {int id; int irq_count; scalar_t__ region_count; int type; int vendor; int ver_minor; int ver_major; } ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_device {int dummy; } ;
struct fsl_mc {struct fsl_mc_device* root_mc_bus_dev; int num_translation_ranges; int translation_ranges; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (TYPE_1__*,char*,int ,int ,int ) ;
 struct fsl_mc* FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (struct fsl_mc_io*,int ,int *,int *) ;
 int FUNC_4 (struct fsl_mc_io*,int ,int*) ;
 int FUNC_5 (TYPE_1__*,int ,int ,int *,int ,struct fsl_mc_io**) ;
 int FUNC_6 (struct fsl_mc_io*) ;
 int FUNC_7 (struct fsl_mc_obj_desc*,struct fsl_mc_io*,TYPE_1__*,struct fsl_mc_device**) ;
 int FUNC_8 (TYPE_1__*,int *,int *) ;
 int FUNC_9 (struct fsl_mc_io*,int ,struct mc_version*) ;
 int FUNC_10 (struct fsl_mc_obj_desc*,int ,int) ;
 int FUNC_11 (int,int ,struct resource*) ;
 int FUNC_12 (struct platform_device*,struct fsl_mc*) ;
 int FUNC_13 (struct resource*) ;
 int FUNC_14 (int ,char*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_4)
{
 struct fsl_mc_obj_desc VAR_5;
 int VAR_6;
 struct fsl_mc *VAR_7;
 struct fsl_mc_device *VAR_8 = ((void*)0);
 struct fsl_mc_io *VAR_9 = ((void*)0);
 int VAR_10;
 phys_addr_t VAR_11;
 u32 VAR_12;
 struct mc_version VAR_13;
 struct resource VAR_14;

 VAR_7 = FUNC_2(&VAR_4->dev, sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return -VAR_0;

 FUNC_12(VAR_4, VAR_7);




 VAR_6 = FUNC_11(VAR_4->dev.of_node, 0, &VAR_14);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_4->dev,
   "of_address_to_resource() failed for %pOF\n",
   VAR_4->dev.of_node);
  return VAR_6;
 }

 VAR_11 = VAR_14.start;
 VAR_12 = FUNC_13(&VAR_14);
 VAR_6 = FUNC_5(&VAR_4->dev, VAR_11,
     VAR_12, ((void*)0),
     VAR_1, &VAR_9);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_9(VAR_9, 0, &VAR_13);
 if (VAR_6 != 0) {
  FUNC_0(&VAR_4->dev,
   "mc_get_version() failed with error %d\n", VAR_6);
  goto error_cleanup_mc_io;
 }

 FUNC_1(&VAR_4->dev, "MC firmware version: %u.%u.%u\n",
   VAR_13.major, VAR_13.minor, VAR_13.revision);

 VAR_6 = FUNC_8(&VAR_4->dev,
            &VAR_7->translation_ranges,
            &VAR_7->num_translation_ranges);
 if (VAR_6 < 0)
  goto error_cleanup_mc_io;

 VAR_6 = FUNC_4(VAR_9, 0, &VAR_10);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_4->dev,
   "dprc_get_container_id() failed: %d\n", VAR_6);
  goto error_cleanup_mc_io;
 }

 FUNC_10(&VAR_5, 0, sizeof(struct fsl_mc_obj_desc));
 VAR_6 = FUNC_3(VAR_9, 0,
         &VAR_5.ver_major,
         &VAR_5.ver_minor);
 if (VAR_6 < 0)
  goto error_cleanup_mc_io;

 VAR_5.vendor = VAR_2;
 FUNC_14(VAR_5.type, "dprc");
 VAR_5.id = VAR_10;
 VAR_5.irq_count = 1;
 VAR_5.region_count = 0;

 VAR_6 = FUNC_7(&VAR_5, VAR_9, &VAR_4->dev, &VAR_8);
 if (VAR_6 < 0)
  goto error_cleanup_mc_io;

 VAR_7->root_mc_bus_dev = VAR_8;
 return 0;

error_cleanup_mc_io:
 FUNC_6(VAR_9);
 return VAR_6;
}
