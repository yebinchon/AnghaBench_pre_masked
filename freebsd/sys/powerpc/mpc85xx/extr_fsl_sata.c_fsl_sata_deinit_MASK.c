
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fsl_sata_channel {int r_mem; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct fsl_sata_channel* FUNC_3 (int ) ;
 int FUNC_4 (struct fsl_sata_channel*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_5)
{
 struct fsl_sata_channel *VAR_6 = FUNC_3(VAR_5);
 uint32_t VAR_7;


 VAR_7 = FUNC_0(VAR_6->r_mem, VAR_1);
 FUNC_1(VAR_6->r_mem, VAR_1, VAR_7 & ~VAR_3);

 FUNC_4(VAR_6);

 FUNC_1(VAR_6->r_mem, VAR_4, 0);
 FUNC_2(100);

 FUNC_1(VAR_6->r_mem, VAR_4, VAR_0);
 VAR_7 = FUNC_0(VAR_6->r_mem, VAR_1);

 FUNC_1(VAR_6->r_mem, VAR_1, VAR_7 & ~VAR_2);
 return (0);
}
