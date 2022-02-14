
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct edac_device_instance {unsigned int nr_blocks; int name; struct edac_device_block* blocks; struct edac_device_ctl_info* ctl; } ;
struct edac_device_ctl_info {int dev_idx; unsigned int nr_instances; int log_ce; int log_ue; int op_state; int name; void* pvt_info; struct edac_device_instance* instances; } ;
struct edac_device_block {unsigned int nr_attribs; struct edac_dev_sysfs_block_attribute* block_attributes; int name; struct edac_device_instance* instance; } ;
struct TYPE_2__ {int name; } ;
struct edac_dev_sysfs_block_attribute {TYPE_1__ attr; struct edac_device_block* block; int store; int show; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void**,unsigned int,int) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (struct edac_device_ctl_info*) ;
 int FUNC_3 (struct edac_device_ctl_info*) ;
 struct edac_device_ctl_info* FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (int ,int,char*,char*,...) ;

struct edac_device_ctl_info *FUNC_6(
 unsigned VAR_2,
 char *VAR_3, unsigned VAR_4,
 char *VAR_5, unsigned VAR_6,
 unsigned VAR_7,
 struct edac_dev_sysfs_block_attribute *VAR_8, unsigned VAR_9,
 int VAR_10)
{
 struct edac_device_ctl_info *VAR_11;
 struct edac_device_instance *VAR_12, *VAR_13;
 struct edac_device_block *VAR_14, *VAR_15, *VAR_16;
 struct edac_dev_sysfs_block_attribute *VAR_17, *VAR_18, *VAR_19;
 unsigned VAR_20;
 unsigned VAR_21;
 unsigned VAR_22, VAR_23, VAR_24;
 void *VAR_25, *VAR_26;
 int VAR_27;

 FUNC_1(4, "instances=%d blocks=%d\n", VAR_4, VAR_6);
 VAR_26 = ((void*)0);
 VAR_11 = FUNC_0(&VAR_26, sizeof(*VAR_11), 1);




 VAR_12 = FUNC_0(&VAR_26, sizeof(*VAR_12), VAR_4);




 VAR_21 = VAR_4 * VAR_6;
 VAR_14 = FUNC_0(&VAR_26, sizeof(*VAR_14), VAR_21);





 if (VAR_9 > 0)
  VAR_21 *= VAR_9;
 VAR_17 = FUNC_0(&VAR_26, sizeof(*VAR_17), VAR_21);


 VAR_25 = FUNC_0(&VAR_26, VAR_2, 1);





 VAR_20 = ((unsigned long)VAR_25) + VAR_2;


 VAR_11 = FUNC_4(VAR_20, VAR_0);
 if (VAR_11 == ((void*)0))
  return ((void*)0);
 VAR_12 = (struct edac_device_instance *)
  (((char *)VAR_11) + ((unsigned long)VAR_12));
 VAR_14 = (struct edac_device_block *)
  (((char *)VAR_11) + ((unsigned long)VAR_14));
 VAR_17 = (struct edac_dev_sysfs_block_attribute *)
  (((char *)VAR_11) + ((unsigned long)VAR_17));
 VAR_25 = VAR_2 ? (((char *)VAR_11) + ((unsigned long)VAR_25)) : ((void*)0);


 VAR_11->dev_idx = VAR_10;
 VAR_11->nr_instances = VAR_4;
 VAR_11->instances = VAR_12;
 VAR_11->pvt_info = VAR_25;


 VAR_11->log_ce = 1;
 VAR_11->log_ue = 1;


 FUNC_5(VAR_11->name,sizeof(VAR_11->name),"%s",VAR_3);

 FUNC_1(4, "edac_dev=%p next after end=%p\n",
   VAR_11, VAR_25 + VAR_2);


 for (VAR_22 = 0; VAR_22 < VAR_4; VAR_22++) {
  VAR_13 = &VAR_12[VAR_22];
  VAR_13->ctl = VAR_11;
  VAR_13->nr_blocks = VAR_6;
  VAR_15 = &VAR_14[VAR_22 * VAR_6];
  VAR_13->blocks = VAR_15;


  FUNC_5(VAR_13->name, sizeof(VAR_13->name),
    "%s%u", VAR_3, VAR_22);


  for (VAR_23 = 0; VAR_23 < VAR_6; VAR_23++) {
   VAR_16 = &VAR_15[VAR_23];
   VAR_16->instance = VAR_13;
   FUNC_5(VAR_16->name, sizeof(VAR_16->name),
     "%s%d", VAR_5, VAR_23+VAR_7);

   FUNC_1(4, "instance=%d inst_p=%p block=#%d block_p=%p name='%s'\n",
     VAR_22, VAR_13, VAR_23, VAR_16, VAR_16->name);




   if ((VAR_9 == 0) || (VAR_8 == ((void*)0)))
    continue;


   VAR_16->nr_attribs = VAR_9;
   VAR_18 = &VAR_17[VAR_23*VAR_4*VAR_9];
   VAR_16->block_attributes = VAR_18;

   FUNC_1(4, "THIS BLOCK_ATTRIB=%p\n",
     VAR_16->block_attributes);






   for (VAR_24 = 0; VAR_24 < VAR_9; VAR_24++) {
    VAR_19 = &VAR_18[VAR_24];




    VAR_19->attr = VAR_8[VAR_24].attr;
    VAR_19->show = VAR_8[VAR_24].show;
    VAR_19->store = VAR_8[VAR_24].store;

    VAR_19->block = VAR_16;

    FUNC_1(4, "alloc-attrib=%p attrib_name='%s' attrib-spec=%p spec-name=%s\n",
      VAR_19, VAR_19->attr.name,
      &VAR_8[VAR_24],
      VAR_8[VAR_24].attr.name
     );
   }
  }
 }


 VAR_11->op_state = VAR_1;




 VAR_27 = FUNC_2(VAR_11);
 if (VAR_27) {
  FUNC_3(VAR_11);
  return ((void*)0);
 }
 return VAR_11;
}
