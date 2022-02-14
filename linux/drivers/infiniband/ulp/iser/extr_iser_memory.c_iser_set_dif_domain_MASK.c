
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int prot_flags; int request; } ;
struct TYPE_4__ {int apptag_check_mask; int app_escape; int ref_escape; int ref_remap; int ref_tag; int pi_interval; } ;
struct TYPE_3__ {TYPE_2__ dif; } ;
struct ib_sig_domain {TYPE_1__ sig; int sig_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct scsi_cmnd *VAR_2, struct ib_sig_domain *VAR_3)
{
 VAR_3->sig_type = VAR_0;
 VAR_3->sig.dif.pi_interval = FUNC_0(VAR_2);
 VAR_3->sig.dif.ref_tag = FUNC_1(VAR_2->request);




 VAR_3->sig.dif.apptag_check_mask = 0xffff;
 VAR_3->sig.dif.app_escape = 1;
 VAR_3->sig.dif.ref_escape = 1;
 if (VAR_2->prot_flags & VAR_1)
  VAR_3->sig.dif.ref_remap = 1;
}
