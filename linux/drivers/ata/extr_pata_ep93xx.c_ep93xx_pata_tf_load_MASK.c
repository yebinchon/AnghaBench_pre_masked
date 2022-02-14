
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ep93xx_pata_data {int dummy; } ;
struct ata_taskfile {unsigned int flags; scalar_t__ ctl; scalar_t__ hob_feature; scalar_t__ hob_nsect; scalar_t__ hob_lbal; scalar_t__ hob_lbam; scalar_t__ hob_lbah; scalar_t__ feature; scalar_t__ nsect; scalar_t__ lbal; scalar_t__ lbam; scalar_t__ lbah; scalar_t__ device; } ;
struct ata_port {scalar_t__ last_ctl; TYPE_1__* host; } ;
struct TYPE_2__ {struct ep93xx_pata_data* private_data; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ata_port*) ;
 int FUNC_1 (struct ep93xx_pata_data*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct ata_port *VAR_10,
    const struct ata_taskfile *VAR_11)
{
 struct ep93xx_pata_data *VAR_12 = VAR_10->host->private_data;
 unsigned int VAR_13 = VAR_11->flags & VAR_1;

 if (VAR_11->ctl != VAR_10->last_ctl) {
  FUNC_1(VAR_12, VAR_11->ctl, VAR_3);
  VAR_10->last_ctl = VAR_11->ctl;
  FUNC_0(VAR_10);
 }

 if (VAR_13 && (VAR_11->flags & VAR_2)) {
  FUNC_1(VAR_12, VAR_11->hob_feature,
   VAR_5);
  FUNC_1(VAR_12, VAR_11->hob_nsect,
   VAR_9);
  FUNC_1(VAR_12, VAR_11->hob_lbal,
   VAR_7);
  FUNC_1(VAR_12, VAR_11->hob_lbam,
   VAR_8);
  FUNC_1(VAR_12, VAR_11->hob_lbah,
   VAR_6);
 }

 if (VAR_13) {
  FUNC_1(VAR_12, VAR_11->feature,
   VAR_5);
  FUNC_1(VAR_12, VAR_11->nsect, VAR_9);
  FUNC_1(VAR_12, VAR_11->lbal, VAR_7);
  FUNC_1(VAR_12, VAR_11->lbam, VAR_8);
  FUNC_1(VAR_12, VAR_11->lbah, VAR_6);
 }

 if (VAR_11->flags & VAR_0)
  FUNC_1(VAR_12, VAR_11->device,
   VAR_4);

 FUNC_0(VAR_10);
}
