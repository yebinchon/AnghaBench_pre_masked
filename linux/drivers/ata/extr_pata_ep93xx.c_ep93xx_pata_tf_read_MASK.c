
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ep93xx_pata_data {int dummy; } ;
struct ata_taskfile {int flags; int ctl; void* hob_lbah; void* hob_lbam; void* hob_lbal; void* hob_nsect; void* hob_feature; void* device; void* lbah; void* lbam; void* lbal; void* nsect; void* feature; int command; } ;
struct ata_port {int last_ctl; TYPE_1__* host; } ;
struct TYPE_2__ {struct ep93xx_pata_data* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ata_port*) ;
 void* FUNC_1 (struct ep93xx_pata_data*,int ) ;
 int FUNC_2 (struct ep93xx_pata_data*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct ata_port *VAR_9, struct ata_taskfile *VAR_10)
{
 struct ep93xx_pata_data *VAR_11 = VAR_9->host->private_data;

 VAR_10->command = FUNC_0(VAR_9);
 VAR_10->feature = FUNC_1(VAR_11, VAR_4);
 VAR_10->nsect = FUNC_1(VAR_11, VAR_8);
 VAR_10->lbal = FUNC_1(VAR_11, VAR_6);
 VAR_10->lbam = FUNC_1(VAR_11, VAR_7);
 VAR_10->lbah = FUNC_1(VAR_11, VAR_5);
 VAR_10->device = FUNC_1(VAR_11, VAR_3);

 if (VAR_10->flags & VAR_1) {
  FUNC_2(VAR_11, VAR_10->ctl | VAR_0,
   VAR_2);
  VAR_10->hob_feature = FUNC_1(VAR_11,
   VAR_4);
  VAR_10->hob_nsect = FUNC_1(VAR_11,
   VAR_8);
  VAR_10->hob_lbal = FUNC_1(VAR_11,
   VAR_6);
  VAR_10->hob_lbam = FUNC_1(VAR_11,
   VAR_7);
  VAR_10->hob_lbah = FUNC_1(VAR_11,
   VAR_5);
  FUNC_2(VAR_11, VAR_10->ctl, VAR_2);
  VAR_9->last_ctl = VAR_10->ctl;
 }
}
