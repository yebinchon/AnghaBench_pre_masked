
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int task_status; int task_action; scalar_t__ tag_num; int tag_type; } ;
struct TYPE_4__ {int targ_lun; int initid; } ;
struct TYPE_5__ {TYPE_1__ nexus; int io_type; } ;
union ctl_io {TYPE_3__ taskio; TYPE_2__ io_hdr; } ;
typedef scalar_t__ uint32_t ;
struct sbuf {int dummy; } ;
struct pci_vtscsi_softc {int vss_ctl_fd; int vss_iid; } ;
struct pci_vtscsi_ctrl_tmf {int subtype; int response; scalar_t__ id; int lun; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (union ctl_io*,struct sbuf*) ;
 union ctl_io* FUNC_3 (int ) ;
 int FUNC_4 (union ctl_io*) ;
 int FUNC_5 (union ctl_io*) ;
 int VAR_11 ;
 int FUNC_6 (int ,int ,union ctl_io*) ;
 scalar_t__ VAR_12 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct sbuf*) ;
 int FUNC_9 (struct sbuf*) ;
 int FUNC_10 (struct sbuf*) ;
 struct sbuf* FUNC_11 () ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int
FUNC_13(struct pci_vtscsi_softc *VAR_13,
    struct pci_vtscsi_ctrl_tmf *VAR_14)
{
 union ctl_io *VAR_15;
 int VAR_16;

 VAR_15 = FUNC_3(VAR_13->vss_iid);
 FUNC_5(VAR_15);

 VAR_15->io_hdr.io_type = VAR_1;
 VAR_15->io_hdr.nexus.initid = VAR_13->vss_iid;
 VAR_15->io_hdr.nexus.targ_lun = FUNC_7(VAR_14->lun);
 VAR_15->taskio.tag_type = VAR_2;
 VAR_15->taskio.tag_num = (uint32_t)VAR_14->id;

 switch (VAR_14->subtype) {
 case 135:
  VAR_15->taskio.task_action = VAR_3;
  break;

 case 134:
  VAR_15->taskio.task_action = VAR_4;
  break;

 case 133:
  VAR_15->taskio.task_action = VAR_5;
  break;

 case 132:
  VAR_15->taskio.task_action = VAR_6;
  break;

 case 131:
  VAR_15->taskio.task_action = VAR_7;
  break;

 case 130:
  VAR_15->taskio.task_action = VAR_8;
  break;

 case 129:
  VAR_15->taskio.task_action = VAR_9;
  break;

 case 128:
  VAR_15->taskio.task_action = VAR_10;
  break;
 }

 if (VAR_12) {
  struct sbuf *VAR_17 = FUNC_11();
  FUNC_2(VAR_15, VAR_17);
  FUNC_10(VAR_17);
  FUNC_0(("pci_virtio_scsi: %s", FUNC_8(VAR_17)));
  FUNC_9(VAR_17);
 }

 VAR_16 = FUNC_6(VAR_13->vss_ctl_fd, VAR_0, VAR_15);
 if (VAR_16 != 0)
  FUNC_1(("CTL_IO: err=%d (%s)\n", VAR_11, FUNC_12(VAR_11)));

 VAR_14->response = VAR_15->taskio.task_status;
 FUNC_4(VAR_15);
 return (1);
}
