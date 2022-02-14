
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct request_queue {void* queuedata; } ;
struct nvm_tgt_type {int flags; int (* exit ) (void*,int) ;int owner; scalar_t__ (* sysfs_init ) (struct gendisk*) ;int (* capacity ) (void*) ;void* (* init ) (struct nvm_tgt_dev*,struct gendisk*,int ) ;int make_rq; } ;
struct nvm_tgt_dev {int dummy; } ;
struct nvm_target {int list; struct nvm_tgt_dev* dev; struct gendisk* disk; struct nvm_tgt_type* type; } ;
struct nvm_ioctl_create_extended {int lun_end; int lun_begin; int op; } ;
struct TYPE_8__ {int lun_end; int lun_begin; } ;
struct TYPE_5__ {int type; struct nvm_ioctl_create_extended e; TYPE_4__ s; } ;
struct nvm_ioctl_create {int flags; int tgtname; int tgttype; TYPE_1__ conf; } ;
struct TYPE_7__ {int dom; int csecs; scalar_t__ mdts; } ;
struct nvm_dev {int mlock; int targets; TYPE_3__ geo; TYPE_2__* q; } ;
struct gendisk {struct request_queue* queue; void* private_data; int * fops; scalar_t__ first_minor; scalar_t__ major; int flags; int disk_name; } ;
struct TYPE_6__ {int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nvm_dev*,struct nvm_ioctl_create_extended*) ;
 int FUNC_4 (struct nvm_dev*,TYPE_4__*) ;
 int FUNC_5 (struct gendisk*) ;
 struct gendisk* FUNC_6 (int ) ;
 struct request_queue* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct request_queue*) ;
 int FUNC_9 (struct request_queue*,int ) ;
 int FUNC_10 (struct request_queue*,unsigned int) ;
 int FUNC_11 (struct nvm_target*) ;
 struct nvm_target* FUNC_12 (int,int ) ;
 int FUNC_13 (int *,int *) ;
 unsigned int FUNC_14 (int ,scalar_t__,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 struct nvm_tgt_dev* FUNC_17 (struct nvm_dev*,int ,int ,int ) ;
 struct nvm_tgt_type* FUNC_18 (int ) ;
 int VAR_8 ;
 int FUNC_19 (struct nvm_dev*,int ,int ) ;
 int FUNC_20 (struct nvm_tgt_dev*,int ) ;
 int FUNC_21 (struct nvm_dev*,int ,int ) ;
 scalar_t__ FUNC_22 (int ) ;
 int FUNC_23 (char*,...) ;
 int FUNC_24 (struct gendisk*) ;
 int FUNC_25 (struct gendisk*,int ) ;
 int FUNC_26 (int ,int ,int) ;
 void* FUNC_27 (struct nvm_tgt_dev*,struct gendisk*,int ) ;
 int FUNC_28 (void*) ;
 scalar_t__ FUNC_29 (struct gendisk*) ;
 int FUNC_30 (void*,int) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_31(struct nvm_dev *VAR_10, struct nvm_ioctl_create *VAR_11)
{
 struct nvm_ioctl_create_extended VAR_12;
 struct request_queue *VAR_13;
 struct gendisk *VAR_14;
 struct nvm_tgt_type *VAR_15;
 struct nvm_target *VAR_16;
 struct nvm_tgt_dev *VAR_17;
 void *VAR_18;
 unsigned int VAR_19;
 int VAR_20;

 switch (VAR_11->conf.type) {
 case 128:
  VAR_20 = FUNC_4(VAR_10, &VAR_11->conf.s);
  if (VAR_20)
   return VAR_20;

  VAR_12.lun_begin = VAR_11->conf.s.lun_begin;
  VAR_12.lun_end = VAR_11->conf.s.lun_end;
  VAR_12.op = VAR_6;
  break;
 case 129:
  VAR_20 = FUNC_3(VAR_10, &VAR_11->conf.e);
  if (VAR_20)
   return VAR_20;

  VAR_12 = VAR_11->conf.e;
  break;
 default:
  FUNC_23("config type not valid\n");
  return -VAR_0;
 }

 VAR_15 = FUNC_18(VAR_11->tgttype);
 if (!VAR_15) {
  FUNC_23("target type %s not found\n", VAR_11->tgttype);
  return -VAR_0;
 }

 if ((VAR_15->flags & VAR_7) != (VAR_10->geo.dom & VAR_5)) {
  FUNC_23("device is incompatible with target L2P type.\n");
  return -VAR_0;
 }

 if (FUNC_22(VAR_11->tgtname)) {
  FUNC_23("target name already exists (%s)\n",
       VAR_11->tgtname);
  return -VAR_0;
 }

 VAR_20 = FUNC_21(VAR_10, VAR_12.lun_begin, VAR_12.lun_end);
 if (VAR_20)
  return VAR_20;

 VAR_16 = FUNC_12(sizeof(struct nvm_target), VAR_3);
 if (!VAR_16) {
  VAR_20 = -VAR_1;
  goto err_reserve;
 }

 VAR_17 = FUNC_17(VAR_10, VAR_12.lun_begin, VAR_12.lun_end, VAR_12.op);
 if (!VAR_17) {
  FUNC_23("could not create target device\n");
  VAR_20 = -VAR_1;
  goto err_t;
 }

 VAR_14 = FUNC_6(0);
 if (!VAR_14) {
  VAR_20 = -VAR_1;
  goto err_dev;
 }

 VAR_13 = FUNC_7(VAR_3, VAR_10->q->node);
 if (!VAR_13) {
  VAR_20 = -VAR_1;
  goto err_disk;
 }
 FUNC_9(VAR_13, VAR_15->make_rq);

 FUNC_26(VAR_14->disk_name, VAR_11->tgtname, sizeof(VAR_14->disk_name));
 VAR_14->flags = VAR_2;
 VAR_14->major = 0;
 VAR_14->first_minor = 0;
 VAR_14->fops = &VAR_8;
 VAR_14->queue = VAR_13;

 VAR_18 = VAR_15->init(VAR_17, VAR_14, VAR_11->flags);
 if (FUNC_0(VAR_18)) {
  VAR_20 = FUNC_1(VAR_18);
  goto err_init;
 }

 VAR_14->private_data = VAR_18;
 VAR_13->queuedata = VAR_18;

 VAR_19 = (VAR_10->geo.csecs >> 9) * VAR_4;
 if (VAR_10->geo.mdts) {
  VAR_19 = FUNC_14(VAR_9, VAR_10->geo.mdts,
    (VAR_10->geo.csecs >> 9) * VAR_4);
 }
 FUNC_10(VAR_13, VAR_19);

 FUNC_25(VAR_14, VAR_15->capacity(VAR_18));
 FUNC_5(VAR_14);

 if (VAR_15->sysfs_init && VAR_15->sysfs_init(VAR_14)) {
  VAR_20 = -VAR_1;
  goto err_sysfs;
 }

 VAR_16->type = VAR_15;
 VAR_16->disk = VAR_14;
 VAR_16->dev = VAR_17;

 FUNC_15(&VAR_10->mlock);
 FUNC_13(&VAR_16->list, &VAR_10->targets);
 FUNC_16(&VAR_10->mlock);

 FUNC_2(VAR_15->owner);

 return 0;
err_sysfs:
 if (VAR_15->exit)
  VAR_15->exit(VAR_18, 1);
err_init:
 FUNC_8(VAR_13);
 VAR_14->queue = ((void*)0);
err_disk:
 FUNC_24(VAR_14);
err_dev:
 FUNC_20(VAR_17, 0);
err_t:
 FUNC_11(VAR_16);
err_reserve:
 FUNC_19(VAR_10, VAR_12.lun_begin, VAR_12.lun_end);
 return VAR_20;
}
