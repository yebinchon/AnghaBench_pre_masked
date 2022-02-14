
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char u32 ;
struct voltagedomain {char (* read ) (int ) ;int (* write ) (char,int ) ;TYPE_1__* pmic; struct omap_vp_instance* vp; } ;
struct omap_vp_instance {int vpconfig; TYPE_2__* common; } ;
struct TYPE_4__ {char vpconfig_initvoltage_mask; char vpconfig_forceupdate; char vpconfig_initvdd; } ;
struct TYPE_3__ {char (* uv_to_vsel ) (char) ;} ;


 char FUNC_0 (char) ;
 char FUNC_1 (char) ;
 char FUNC_2 (int ) ;
 int FUNC_3 (char,int ) ;
 int FUNC_4 (char,int ) ;
 int FUNC_5 (char,int ) ;

__attribute__((used)) static u32 FUNC_6(struct voltagedomain *VAR_0, u32 VAR_1)
{
 struct omap_vp_instance *VAR_2 = VAR_0->vp;
 u32 VAR_3;
 char VAR_4;

 VAR_4 = VAR_0->pmic->uv_to_vsel(VAR_1);

 VAR_3 = VAR_0->read(VAR_2->vpconfig);
 VAR_3 &= ~(VAR_2->common->vpconfig_initvoltage_mask |
        VAR_2->common->vpconfig_forceupdate |
        VAR_2->common->vpconfig_initvdd);
 VAR_3 |= VAR_4 << FUNC_0(VAR_2->common->vpconfig_initvoltage_mask);
 VAR_0->write(VAR_3, VAR_2->vpconfig);


 VAR_0->write((VAR_3 | VAR_2->common->vpconfig_initvdd),
         VAR_2->vpconfig);


 VAR_0->write(VAR_3, VAR_2->vpconfig);

 return VAR_3;
}
