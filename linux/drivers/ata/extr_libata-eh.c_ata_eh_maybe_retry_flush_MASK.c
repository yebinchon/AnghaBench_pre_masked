
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ata_taskfile {scalar_t__ command; int protocol; int flags; } ;
struct TYPE_3__ {scalar_t__ command; } ;
struct ata_queued_cmd {int err_mask; struct ata_taskfile result_tf; TYPE_2__* scsicmd; TYPE_1__ tf; struct ata_device* dev; } ;
struct ata_port {int pflags; } ;
struct ata_link {int active_tag; struct ata_port* ap; } ;
struct ata_device {struct ata_link* link; } ;
struct TYPE_4__ {int allowed; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct ata_queued_cmd* FUNC_0 (struct ata_port*,int ) ;
 int FUNC_1 (struct ata_device*,char*,unsigned int,...) ;
 unsigned int FUNC_2 (struct ata_device*,struct ata_taskfile*,int *,int ,int *,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ata_device*,struct ata_taskfile*) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct ata_device *VAR_8)
{
 struct ata_link *VAR_9 = VAR_8->link;
 struct ata_port *VAR_10 = VAR_9->ap;
 struct ata_queued_cmd *VAR_11;
 struct ata_taskfile VAR_12;
 unsigned int VAR_13;
 int VAR_14 = 0;


 if (!FUNC_3(VAR_9->active_tag))
  return 0;

 VAR_11 = FUNC_0(VAR_10, VAR_9->active_tag);
 if (VAR_11->dev != VAR_8 || (VAR_11->tf.command != VAR_2 &&
          VAR_11->tf.command != VAR_1))
  return 0;


 if (VAR_11->err_mask & VAR_0)
  return 0;


 FUNC_4(VAR_8, &VAR_12);

 VAR_12.command = VAR_11->tf.command;
 VAR_12.flags |= VAR_5;
 VAR_12.protocol = VAR_4;

 FUNC_1(VAR_8, "retrying FLUSH 0x%x Emask 0x%x\n",
         VAR_12.command, VAR_11->err_mask);

 VAR_13 = FUNC_2(VAR_8, &VAR_12, ((void*)0), VAR_6, ((void*)0), 0, 0);
 if (!VAR_13) {
  VAR_11->scsicmd->allowed = FUNC_5(VAR_11->scsicmd->allowed, 1);
 } else {
  FUNC_1(VAR_8, "FLUSH failed Emask 0x%x\n",
          VAR_13);
  VAR_14 = -VAR_7;


  if (VAR_13 & VAR_0) {
   VAR_11->err_mask |= VAR_0;
   VAR_11->result_tf = VAR_12;
   if (!(VAR_10->pflags & VAR_3))
    VAR_14 = 0;
  }
 }
 return VAR_14;
}
