
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct fsl_sata_channel {int r_mem; } ;
struct cam_sim {int dummy; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct cam_sim*) ;
 int FUNC_2 (struct fsl_sata_channel*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct cam_sim *VAR_1)
{
 struct fsl_sata_channel *VAR_2 = (struct fsl_sata_channel *)FUNC_1(VAR_1);
 uint32_t VAR_3;


 VAR_3 = FUNC_0(VAR_2->r_mem, VAR_0);
 if (VAR_3 != 0)
  FUNC_2(VAR_2, VAR_3);
}
