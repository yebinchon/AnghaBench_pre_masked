
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; int flags; } ;
union ccb {TYPE_1__ ccb_h; int csio; } ;
typedef int uint8_t ;
struct scsi_read_capacity_data_long {int addr; } ;
struct scsi_read_capacity_data {int addr; } ;
struct mpt_standalone_disk {int maxlba; } ;
struct cam_device {int dummy; } ;
typedef int rcaplong ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (union ccb*) ;
 union ccb* FUNC_2 (struct cam_device*) ;
 scalar_t__ FUNC_3 (struct cam_device*,union ccb*) ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int,int *,int ,struct scsi_read_capacity_data*,int ,int) ;
 int FUNC_7 (int *,int,int *,int ,int ,int ,int ,int *,int,int ,int) ;

__attribute__((used)) static int
FUNC_8(struct cam_device *VAR_8, struct mpt_standalone_disk *VAR_9)
{
 struct scsi_read_capacity_data VAR_10;
 struct scsi_read_capacity_data_long VAR_11;
 union ccb *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_2(VAR_8);
 if (VAR_12 == ((void*)0))
  return (VAR_4);


 FUNC_0(&VAR_12->csio);

 FUNC_6(&VAR_12->csio, 1, ((void*)0), VAR_5, &VAR_10,
     VAR_6, 5000);


 VAR_12->ccb_h.flags |= VAR_0;

 if (FUNC_3(VAR_8, VAR_12) < 0) {
  VAR_13 = VAR_7;
  FUNC_1(VAR_12);
  return (VAR_13);
 }

 if ((VAR_12->ccb_h.status & VAR_2) != VAR_1) {
  FUNC_1(VAR_12);
  return (VAR_3);
 }






 if (FUNC_4(VAR_10.addr) != 0xffffffff) {
  VAR_9->maxlba = FUNC_4(VAR_10.addr);
  FUNC_1(VAR_12);
  return (0);
 }


 FUNC_0(&VAR_12->csio);

 FUNC_7(&VAR_12->csio, 1, ((void*)0), VAR_5, 0, 0, 0,
     (uint8_t *)&VAR_11, sizeof(VAR_11), VAR_6, 5000);


 VAR_12->ccb_h.flags |= VAR_0;

 if (FUNC_3(VAR_8, VAR_12) < 0) {
  VAR_13 = VAR_7;
  FUNC_1(VAR_12);
  return (VAR_13);
 }

 if ((VAR_12->ccb_h.status & VAR_2) != VAR_1) {
  FUNC_1(VAR_12);
  return (VAR_3);
 }
 FUNC_1(VAR_12);

 VAR_9->maxlba = FUNC_5(VAR_11.addr);
 return (0);
}
