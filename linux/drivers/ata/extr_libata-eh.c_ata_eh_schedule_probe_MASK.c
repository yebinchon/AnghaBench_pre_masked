
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ata_link {scalar_t__ lpm_policy; TYPE_4__* ap; } ;
struct TYPE_6__ {int probe_mask; int action; } ;
struct ata_eh_context {int did_probe_mask; int saved_ncq_enabled; scalar_t__* saved_xfer_mode; TYPE_2__ i; } ;
struct ata_device {int devno; int ering; TYPE_1__* link; } ;
struct TYPE_8__ {TYPE_3__* ops; } ;
struct TYPE_7__ {int (* set_lpm ) (struct ata_link*,scalar_t__,int ) ;} ;
struct TYPE_5__ {struct ata_eh_context eh_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ata_device*) ;
 struct ata_link* FUNC_1 (struct ata_device*) ;
 int FUNC_2 (struct ata_device*) ;
 int FUNC_3 (int *,int ,int*) ;
 int FUNC_4 (int *,int ,int ) ;
 scalar_t__ FUNC_5 (struct ata_link*) ;
 int FUNC_6 (struct ata_link*,int) ;
 int FUNC_7 (struct ata_link*,scalar_t__,int ) ;
 int FUNC_8 (struct ata_link*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_9(struct ata_device *VAR_6)
{
 struct ata_eh_context *VAR_7 = &VAR_6->link->eh_context;
 struct ata_link *VAR_8 = FUNC_1(VAR_6);
 int VAR_9 = 0;

 if (!(VAR_7->i.probe_mask & (1 << VAR_6->devno)) ||
     (VAR_7->did_probe_mask & (1 << VAR_6->devno)))
  return 0;

 FUNC_2(VAR_6);
 FUNC_0(VAR_6);
 VAR_7->did_probe_mask |= (1 << VAR_6->devno);
 VAR_7->i.action |= VAR_2;
 VAR_7->saved_xfer_mode[VAR_6->devno] = 0;
 VAR_7->saved_ncq_enabled &= ~(1 << VAR_6->devno);


 if (VAR_8->lpm_policy > VAR_4) {
  if (FUNC_5(VAR_8))
   VAR_8->ap->ops->set_lpm(VAR_8, VAR_4,
            VAR_3);
  else
   FUNC_7(VAR_8, VAR_4,
      VAR_3);
 }
 FUNC_4(&VAR_6->ering, 0, VAR_0);
 FUNC_3(&VAR_6->ering, VAR_5, &VAR_9);

 if (VAR_9 > VAR_1)
  FUNC_6(VAR_8, 1);

 return 1;
}
