
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct omap3_vp {int tranxdone_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct omap3_vp* VAR_2 ;

__attribute__((used)) static u32 FUNC_1(u8 VAR_3)
{
 struct omap3_vp *VAR_4 = &VAR_2[VAR_3];
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_0,
        VAR_1);
 return VAR_5 & VAR_4->tranxdone_status;
}
