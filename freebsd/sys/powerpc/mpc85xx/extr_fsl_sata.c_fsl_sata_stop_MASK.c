
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fsl_sata_channel {scalar_t__ eslots; int dev; int r_mem; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (struct fsl_sata_channel*,int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct fsl_sata_channel *VAR_5)
{
 uint32_t VAR_6;
 int VAR_7;


 VAR_6 = FUNC_0(VAR_5->r_mem, VAR_0);
 VAR_6 &= ~VAR_2;

 for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
  FUNC_1(VAR_5->r_mem, VAR_0, VAR_6);
  if (FUNC_3(VAR_5, VAR_3,
      VAR_4, 0, 500)) {
   if (VAR_7 != 0)
    FUNC_2(VAR_5->dev,
        "stopping FSL SATA engine failed\n");
   VAR_6 |= VAR_1;
  } else
   break;
 }
 VAR_5->eslots = 0;
}
