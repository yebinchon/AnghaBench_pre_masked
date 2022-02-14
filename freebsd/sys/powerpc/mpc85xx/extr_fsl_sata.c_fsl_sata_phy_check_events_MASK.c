
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef int u_int32_t ;
struct fsl_sata_channel {scalar_t__ pm_level; int sim; int path; int dev; int r_mem; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 union ccb* FUNC_3 () ;
 int FUNC_4 (int ,int ,int *) ;
 scalar_t__ FUNC_5 (int *,int *,int ,int ,int ) ;
 int FUNC_6 (union ccb*) ;
 int FUNC_7 (union ccb*) ;

__attribute__((used)) static int
FUNC_8(struct fsl_sata_channel *VAR_10, u_int32_t VAR_11)
{

 if (((VAR_10->pm_level == 0) && (VAR_11 & VAR_2)) ||
     ((VAR_10->pm_level != 0) && (VAR_11 & VAR_1))) {
  u_int32_t VAR_12 = FUNC_0(VAR_10->r_mem, VAR_8);
  union ccb *VAR_13;

  if (VAR_9) {
   if ((VAR_12 & VAR_3) != VAR_4)
    FUNC_2(VAR_10->dev, "CONNECT requested\n");
   else
    FUNC_2(VAR_10->dev, "DISCONNECT requested\n");
  }

  FUNC_4(VAR_0, VAR_10->path, ((void*)0));
  if ((VAR_13 = FUNC_3()) == ((void*)0))
   return (0);
  if (FUNC_5(&VAR_13->ccb_h.path, ((void*)0),
      FUNC_1(VAR_10->sim),
      VAR_7, VAR_5) != VAR_6) {
   FUNC_6(VAR_13);
   return (0);
  }
  FUNC_7(VAR_13);
  return (1);
 }
 return (0);
}
