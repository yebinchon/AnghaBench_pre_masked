
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int ext_data_filled; int sense_data; int scsi_status; int residual; int sense_len; int * cdb; int cdb_len; void* ext_data_len; void* ext_data_ptr; void* ext_sg_entries; int tag_type; void* tag_num; } ;
struct TYPE_5__ {int targ_lun; int initid; } ;
struct TYPE_6__ {int flags; int io_type; TYPE_1__ nexus; } ;
union ctl_io {TYPE_4__ scsiio; TYPE_2__ io_hdr; } ;
typedef void* uint32_t ;
struct sbuf {int dummy; } ;
struct TYPE_7__ {int sense_size; int cdb_size; } ;
struct pci_vtscsi_softc {TYPE_3__ vss_config; int vss_ctl_fd; int vss_iid; } ;
struct pci_vtscsi_req_cmd_wr {int task_attr; int sense_len; int sense; int response; int status; int residual; int * cdb; scalar_t__ id; int lun; } ;
struct pci_vtscsi_req_cmd_rd {int task_attr; int sense_len; int sense; int response; int status; int residual; int * cdb; scalar_t__ id; int lun; } ;
struct pci_vtscsi_queue {struct pci_vtscsi_softc* vsq_sc; } ;
struct iovec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;

 int VAR_8 ;

 int VAR_9 ;


 int FUNC_2 (struct pci_vtscsi_softc*) ;
 int VAR_10 ;
 int FUNC_3 (struct pci_vtscsi_softc*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct pci_vtscsi_req_cmd_wr*,int,struct iovec*,int,int ) ;
 void* FUNC_6 (struct iovec*,int) ;
 int FUNC_7 (union ctl_io*,struct sbuf*) ;
 union ctl_io* FUNC_8 (int ) ;
 int FUNC_9 (union ctl_io*) ;
 int FUNC_10 (union ctl_io*) ;
 int VAR_11 ;
 int FUNC_11 (struct pci_vtscsi_req_cmd_wr*) ;
 int FUNC_12 (int ,int ,union ctl_io*) ;
 int FUNC_13 (struct iovec*,int,void**) ;
 struct pci_vtscsi_req_cmd_wr* FUNC_14 (int) ;
 int FUNC_15 (int *,int *,int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct sbuf*) ;
 int FUNC_18 (struct sbuf*) ;
 int FUNC_19 (struct sbuf*) ;
 struct sbuf* FUNC_20 () ;
 int FUNC_21 (struct iovec*,int,struct iovec*,int*,int) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (struct iovec*,int*,int) ;

__attribute__((used)) static int
FUNC_24(struct pci_vtscsi_queue *VAR_13, struct iovec *VAR_14,
    int VAR_15, struct iovec *VAR_16, int VAR_17)
{
 struct pci_vtscsi_softc *VAR_18 = VAR_13->vsq_sc;
 struct pci_vtscsi_req_cmd_rd *VAR_19 = ((void*)0);
 struct pci_vtscsi_req_cmd_wr *VAR_20;
 struct iovec VAR_21[VAR_10], VAR_22[VAR_10];
 union ctl_io *VAR_23;
 int VAR_24, VAR_25;
 void *VAR_26 = ((void*)0);
 uint32_t VAR_27 = 0, VAR_28 = 0;
 int VAR_29, VAR_30;

 FUNC_21(VAR_14, VAR_15, VAR_21, &VAR_24,
     FUNC_2(VAR_18));
 FUNC_21(VAR_16, VAR_17, VAR_22, &VAR_25,
     FUNC_3(VAR_18));

 FUNC_23(VAR_14, &VAR_15, FUNC_2(VAR_18));
 FUNC_23(VAR_16, &VAR_17, FUNC_3(VAR_18));
 FUNC_13(VAR_14, VAR_15, (void **)&VAR_19);

 VAR_20 = FUNC_14(FUNC_3(VAR_18));
 VAR_23 = FUNC_8(VAR_18->vss_iid);
 FUNC_10(VAR_23);

 VAR_23->io_hdr.nexus.initid = VAR_18->vss_iid;
 VAR_23->io_hdr.nexus.targ_lun = FUNC_16(VAR_19->lun);

 VAR_23->io_hdr.io_type = VAR_3;

 if (VAR_24 > 0) {
  VAR_26 = (void *)VAR_21;
  VAR_28 = VAR_24;
  VAR_27 = FUNC_6(VAR_21, VAR_24);
  VAR_23->io_hdr.flags |= VAR_1;
 } else if (VAR_25 > 0) {
  VAR_26 = (void *)VAR_22;
  VAR_28 = VAR_25;
  VAR_27 = FUNC_6(VAR_22, VAR_25);
  VAR_23->io_hdr.flags |= VAR_0;
 }

 VAR_23->scsiio.sense_len = VAR_18->vss_config.sense_size;
 VAR_23->scsiio.tag_num = (uint32_t)VAR_19->id;
 switch (VAR_19->task_attr) {
 case 129:
  VAR_23->scsiio.tag_type = VAR_6;
  break;
 case 130:
  VAR_23->scsiio.tag_type = VAR_5;
  break;
 case 131:
  VAR_23->scsiio.tag_type = VAR_4;
  break;
 case 128:
 default:
  VAR_23->scsiio.tag_type = VAR_7;
  break;
 }
 VAR_23->scsiio.ext_sg_entries = VAR_28;
 VAR_23->scsiio.ext_data_ptr = VAR_26;
 VAR_23->scsiio.ext_data_len = VAR_27;
 VAR_23->scsiio.ext_data_filled = 0;
 VAR_23->scsiio.cdb_len = VAR_18->vss_config.cdb_size;
 FUNC_15(VAR_23->scsiio.cdb, VAR_19->cdb, VAR_18->vss_config.cdb_size);

 if (VAR_12) {
  struct sbuf *VAR_31 = FUNC_20();
  FUNC_7(VAR_23, VAR_31);
  FUNC_19(VAR_31);
  FUNC_0(("pci_virtio_scsi: %s", FUNC_17(VAR_31)));
  FUNC_18(VAR_31);
 }

 VAR_29 = FUNC_12(VAR_18->vss_ctl_fd, VAR_2, VAR_23);
 if (VAR_29 != 0) {
  FUNC_4(("CTL_IO: err=%d (%s)\n", VAR_11, FUNC_22(VAR_11)));
  VAR_20->response = VAR_8;
 } else {
  VAR_20->sense_len = FUNC_1(VAR_23->scsiio.sense_len,
      VAR_18->vss_config.sense_size);
  VAR_20->residual = VAR_23->scsiio.residual;
  VAR_20->status = VAR_23->scsiio.scsi_status;
  VAR_20->response = VAR_9;
  FUNC_15(&VAR_20->sense, &VAR_23->scsiio.sense_data,
      VAR_20->sense_len);
 }

 FUNC_5(VAR_20, FUNC_3(VAR_18), VAR_16, VAR_17, 0);
 VAR_30 = FUNC_3(VAR_18) + VAR_23->scsiio.ext_data_filled;
 FUNC_11(VAR_19);
 FUNC_11(VAR_20);
 FUNC_9(VAR_23);
 return (VAR_30);
}
