
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct omap4_vp {int tranxdone_status; int irqstatus_mpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 struct omap4_vp* VAR_2 ;

__attribute__((used)) static u32 FUNC_1(u8 VAR_3)
{
 struct omap4_vp *VAR_4 = &VAR_2[VAR_3];
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_1,
      VAR_0,
      VAR_4->irqstatus_mpu);
 return VAR_5 & VAR_4->tranxdone_status;
}
