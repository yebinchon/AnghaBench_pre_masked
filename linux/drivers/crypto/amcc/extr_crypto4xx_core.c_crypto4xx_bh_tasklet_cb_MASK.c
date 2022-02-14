
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct pd_uinfo {int state; } ;
struct device {int dummy; } ;
struct crypto4xx_core_device {TYPE_2__* dev; } ;
struct TYPE_4__ {int w; } ;
struct ce_pd {TYPE_1__ pd_ctl; } ;
struct TYPE_5__ {size_t pdr_tail; size_t pdr_head; struct ce_pd* pdr; struct pd_uinfo* pdr_uinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,size_t) ;
 size_t FUNC_2 (TYPE_2__*,size_t) ;
 struct crypto4xx_core_device* FUNC_3 (struct device*) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_3)
{
 struct device *VAR_4 = (struct device *)VAR_3;
 struct crypto4xx_core_device *VAR_5 = FUNC_3(VAR_4);
 struct pd_uinfo *VAR_6;
 struct ce_pd *VAR_7;
 u32 VAR_8 = VAR_5->dev->pdr_tail;
 u32 VAR_9 = VAR_5->dev->pdr_head;

 do {
  VAR_6 = &VAR_5->dev->pdr_uinfo[VAR_8];
  VAR_7 = &VAR_5->dev->pdr[VAR_8];
  if ((VAR_6->state & VAR_2) &&
       ((FUNC_0(VAR_7->pd_ctl.w) &
         (VAR_1 | VAR_0)) ==
         VAR_1)) {
   FUNC_1(VAR_5->dev, VAR_8);
   VAR_8 = FUNC_2(VAR_5->dev, VAR_8);
  } else {

   break;
  }
 } while (VAR_9 != VAR_8);
}
