
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct zpci_dev {int lock; TYPE_5__* fmb; int fmb_update; } ;
struct seq_file {struct zpci_dev* private; } ;
struct TYPE_9__ {int tx_bytes; } ;
struct TYPE_8__ {int consumed_work_units; } ;
struct TYPE_7__ {int rx_bytes; } ;
struct TYPE_6__ {int dma_rbytes; } ;
struct TYPE_10__ {int format; int fmt_ind; TYPE_4__ fmt3; TYPE_3__ fmt2; TYPE_2__ fmt1; TYPE_1__ fmt0; int ld_ops; int last_update; int samples; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (struct seq_file*,int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct seq_file*) ;
 int FUNC_5 (struct seq_file*,char*,int ) ;
 int FUNC_6 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_7(struct seq_file *VAR_6, void *VAR_7)
{
 struct zpci_dev *VAR_8 = VAR_6->private;

 if (!VAR_8)
  return 0;

 FUNC_1(&VAR_8->lock);
 if (!VAR_8->fmb) {
  FUNC_2(&VAR_8->lock);
  FUNC_6(VAR_6, "FMB statistics disabled\n");
  return 0;
 }


 FUNC_5(VAR_6, "Update interval: %u ms\n", VAR_8->fmb_update);
 FUNC_5(VAR_6, "Samples: %u\n", VAR_8->fmb->samples);
 FUNC_5(VAR_6, "Last update TOD: %Lx\n", VAR_8->fmb->last_update);

 FUNC_3(VAR_6, VAR_1, FUNC_0(VAR_1),
       &VAR_8->fmb->ld_ops);

 switch (VAR_8->fmb->format) {
 case 0:
  if (!(VAR_8->fmb->fmt_ind & VAR_0))
   break;
  FUNC_3(VAR_6, VAR_2, FUNC_0(VAR_2),
        &VAR_8->fmb->fmt0.dma_rbytes);
  break;
 case 1:
  FUNC_3(VAR_6, VAR_3, FUNC_0(VAR_3),
        &VAR_8->fmb->fmt1.rx_bytes);
  break;
 case 2:
  FUNC_3(VAR_6, VAR_4, FUNC_0(VAR_4),
        &VAR_8->fmb->fmt2.consumed_work_units);
  break;
 case 3:
  FUNC_3(VAR_6, VAR_5, FUNC_0(VAR_5),
        &VAR_8->fmb->fmt3.tx_bytes);
  break;
 default:
  FUNC_6(VAR_6, "Unknown format\n");
 }

 FUNC_4(VAR_6);
 FUNC_2(&VAR_8->lock);
 return 0;
}
