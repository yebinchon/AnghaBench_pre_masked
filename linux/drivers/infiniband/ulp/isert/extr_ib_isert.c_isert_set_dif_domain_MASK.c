
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct se_cmd {scalar_t__ prot_type; int reftag_seed; TYPE_2__* se_dev; } ;
struct TYPE_7__ {int apptag_check_mask; int app_escape; int ref_escape; int ref_remap; int ref_tag; int pi_interval; int bg_type; } ;
struct TYPE_8__ {TYPE_3__ dif; } ;
struct ib_sig_domain {TYPE_4__ sig; int sig_type; } ;
struct TYPE_5__ {int block_size; } ;
struct TYPE_6__ {TYPE_1__ dev_attrib; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static inline void
FUNC_0(struct se_cmd *VAR_4, struct ib_sig_domain *VAR_5)
{
 VAR_5->sig_type = VAR_0;
 VAR_5->sig.dif.bg_type = VAR_1;
 VAR_5->sig.dif.pi_interval = VAR_4->se_dev->dev_attrib.block_size;
 VAR_5->sig.dif.ref_tag = VAR_4->reftag_seed;





 VAR_5->sig.dif.apptag_check_mask = 0xffff;
 VAR_5->sig.dif.app_escape = 1;
 VAR_5->sig.dif.ref_escape = 1;
 if (VAR_4->prot_type == VAR_2 ||
     VAR_4->prot_type == VAR_3)
  VAR_5->sig.dif.ref_remap = 1;
}
