
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct fsl_sata_channel {int path; int dev; int r_mem; } ;
struct cam_path {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,struct cam_path*,int *) ;
 scalar_t__ FUNC_3 (struct cam_path**,int *,int ,int,int ) ;
 int FUNC_4 (struct cam_path*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct fsl_sata_channel *VAR_4, u_int32_t VAR_5)
{
 struct cam_path *VAR_6;
 int VAR_7;

 FUNC_0(VAR_4->r_mem, VAR_2, VAR_5);
 if (VAR_3)
  FUNC_1(VAR_4->dev, "SNTF 0x%04x\n", VAR_5);
 for (VAR_7 = 0; VAR_7 < 16; VAR_7++) {
  if ((VAR_5 & (1 << VAR_7)) == 0)
   continue;
  if (FUNC_3(&VAR_6, ((void*)0),
      FUNC_5(VAR_4->path), VAR_7, 0) == VAR_1) {
   FUNC_2(VAR_0, VAR_6, ((void*)0));
   FUNC_4(VAR_6);
  }
 }
}
