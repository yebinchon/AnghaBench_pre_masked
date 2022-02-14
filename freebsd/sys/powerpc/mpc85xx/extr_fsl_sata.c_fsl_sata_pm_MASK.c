
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fsl_sata_channel {scalar_t__ numrslots; int pm_level; int r_mem; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(void *VAR_4)
{
 struct fsl_sata_channel *VAR_5 = (struct fsl_sata_channel *)VAR_4;
 uint32_t VAR_6;

 if (VAR_5->numrslots != 0)
  return;
 VAR_6 = FUNC_0(VAR_5->r_mem, VAR_1) & ~VAR_0;
 if (VAR_5->pm_level == 4)
  VAR_6 |= VAR_2;
 else
  VAR_6 |= VAR_3;
 FUNC_1(VAR_5->r_mem, VAR_1, VAR_6);
}
