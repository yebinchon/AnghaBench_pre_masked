
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct bcma_drv_cc {TYPE_2__* core; } ;
struct TYPE_3__ {scalar_t__ id; } ;
struct bcma_bus {TYPE_1__ chipinfo; } ;
struct TYPE_4__ {struct bcma_bus* bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bcma_drv_cc*,int ,int) ;
 int FUNC_1 (struct bcma_drv_cc*) ;
 scalar_t__ FUNC_2 (struct bcma_drv_cc*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (struct bcma_drv_cc*,int ,int) ;

u32 FUNC_5(struct bcma_drv_cc *VAR_7, u32 VAR_8)
{
 u32 VAR_9;

 VAR_9 = FUNC_1(VAR_7);
 if (FUNC_2(VAR_7)) {
  if (VAR_8 == 1)
   VAR_8 = 2;
  else if (VAR_8 > VAR_9)
   VAR_8 = VAR_9;
  FUNC_4(VAR_7, VAR_0, VAR_8);
 } else {
  struct bcma_bus *VAR_10 = VAR_7->core->bus;

  if (VAR_10->chipinfo.id != VAR_2 &&
      VAR_10->chipinfo.id != VAR_3 &&
      VAR_10->chipinfo.id != VAR_4)
   FUNC_3(VAR_7->core,
      VAR_8 ? VAR_6 : VAR_5);

  if (VAR_8 > VAR_9)
   VAR_8 = VAR_9;

  FUNC_0(VAR_7, VAR_1, VAR_8);
 }
 return VAR_8;
}
