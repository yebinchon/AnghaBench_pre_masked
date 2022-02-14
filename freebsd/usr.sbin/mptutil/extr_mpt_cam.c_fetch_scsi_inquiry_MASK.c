
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; int flags; } ;
union ccb {TYPE_1__ ccb_h; int csio; } ;
struct scsi_inquiry_data {int dummy; } ;
struct mpt_standalone_disk {int dummy; } ;
struct cam_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct scsi_inquiry_data* FUNC_1 (int,int) ;
 int FUNC_2 (union ccb*) ;
 union ccb* FUNC_3 (struct cam_device*) ;
 scalar_t__ FUNC_4 (struct cam_device*,union ccb*) ;
 int VAR_8 ;
 int FUNC_5 (struct mpt_standalone_disk*,struct scsi_inquiry_data*) ;
 int FUNC_6 (struct scsi_inquiry_data*) ;
 int FUNC_7 (int *,int,int *,int ,void*,int ,int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_8(struct cam_device *VAR_9, struct mpt_standalone_disk *VAR_10)
{
 struct scsi_inquiry_data *VAR_11;
 union ccb *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_3(VAR_9);
 if (VAR_12 == ((void*)0))
  return (VAR_4);


 FUNC_0(&VAR_12->csio);

 VAR_11 = FUNC_1(1, sizeof(*VAR_11));
 if (VAR_11 == ((void*)0)) {
  FUNC_2(VAR_12);
  return (VAR_4);
 }
 FUNC_7(&VAR_12->csio, 1, ((void*)0), VAR_5, (void *)VAR_11,
     VAR_6, 0, 0, VAR_7, 5000);


 VAR_12->ccb_h.flags |= VAR_0;

 if (FUNC_4(VAR_9, VAR_12) < 0) {
  VAR_13 = VAR_8;
  FUNC_6(VAR_11);
  FUNC_2(VAR_12);
  return (VAR_13);
 }

 if ((VAR_12->ccb_h.status & VAR_2) != VAR_1) {
  FUNC_6(VAR_11);
  FUNC_2(VAR_12);
  return (VAR_3);
 }

 FUNC_2(VAR_12);
 FUNC_5(VAR_10, VAR_11);
 FUNC_6(VAR_11);
 return (0);
}
