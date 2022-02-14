
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int target_id; scalar_t__ target_lun; int status; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct fsl_sata_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fsl_sata_channel*,union ccb*) ;

__attribute__((used)) static int
FUNC_1(struct fsl_sata_channel *VAR_2, union ccb *VAR_3)
{

 if (VAR_3->ccb_h.target_id > 15) {
  VAR_3->ccb_h.status = VAR_1;
  FUNC_0(VAR_2, VAR_3);
  return (-1);
 }
 if (VAR_3->ccb_h.target_lun != 0) {
  VAR_3->ccb_h.status = VAR_0;
  FUNC_0(VAR_2, VAR_3);
  return (-1);
 }
 return (0);
}
