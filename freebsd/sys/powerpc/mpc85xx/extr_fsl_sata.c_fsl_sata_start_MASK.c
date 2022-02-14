
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct fsl_sata_channel {int r_mem; scalar_t__ pm_present; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct fsl_sata_channel*,int ,int,int,int) ;

__attribute__((used)) static void
FUNC_3(struct fsl_sata_channel *VAR_10)
{
 u_int32_t VAR_11;


 FUNC_1(VAR_10->r_mem, VAR_9, 0xFFFFFFFF);

 FUNC_1(VAR_10->r_mem, VAR_7, 0x3F);
 FUNC_1(VAR_10->r_mem, VAR_0, 0xFFFF);
 FUNC_1(VAR_10->r_mem, VAR_1, 0xFFFF);

 VAR_11 = FUNC_0(VAR_10->r_mem, VAR_2);
 VAR_11 |= VAR_4 | VAR_6;
 VAR_11 &= ~VAR_3;
 FUNC_1(VAR_10->r_mem, VAR_2, VAR_11 |
     (VAR_10->pm_present ? VAR_5 : 0));
 FUNC_2(VAR_10, VAR_7,
     VAR_8, VAR_8, 500);
 FUNC_1(VAR_10->r_mem, VAR_7,
     FUNC_0(VAR_10->r_mem, VAR_7) & VAR_8);
}
