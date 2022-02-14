
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int priority; } ;
struct TYPE_6__ {int target_id; int timeout; int status; TYPE_2__ pinfo; scalar_t__ target_lun; int func_code; int path_id; } ;
struct TYPE_4__ {int flags; } ;
union ccb {TYPE_3__ ccb_h; TYPE_1__ crcn; } ;
typedef int path_id_t ;
typedef int ccb ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (union ccb*,int) ;
 int VAR_11 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,union ccb*) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 () ;
 int VAR_12 ;

int
FUNC_5(int VAR_13, int VAR_14)
{
 union ccb VAR_15;
 path_id_t VAR_16;
 int VAR_17;


 if (VAR_13 != -1 && VAR_13 != 0)
  return (VAR_6);

 if (FUNC_4() < 0)
  return (VAR_8);

 VAR_17 = FUNC_1(&VAR_16);
 if (VAR_17)
  return (VAR_17);


 FUNC_0(&VAR_15, sizeof(VAR_15));
 VAR_15.ccb_h.path_id = VAR_16;
 if (VAR_14 == -1) {
  VAR_15.ccb_h.func_code = VAR_9;
  VAR_15.ccb_h.target_id = VAR_5;
  VAR_15.ccb_h.target_lun = VAR_2;
  VAR_15.ccb_h.timeout = 5000;
 } else {
  VAR_15.ccb_h.func_code = VAR_10;
  VAR_15.ccb_h.target_id = VAR_14;
  VAR_15.ccb_h.target_lun = 0;
 }
 VAR_15.crcn.flags = VAR_1;


 VAR_15.ccb_h.pinfo.priority = 5;

 if (FUNC_2(VAR_12, VAR_0, &VAR_15) == -1)
  return (VAR_11);

 if ((VAR_15.ccb_h.status & VAR_4) != VAR_3) {
  FUNC_3("mpt_rescan_bus rescan got CAM error %#x\n",
      VAR_15.ccb_h.status & VAR_4);
  return (VAR_7);
 }

 return (0);
}
