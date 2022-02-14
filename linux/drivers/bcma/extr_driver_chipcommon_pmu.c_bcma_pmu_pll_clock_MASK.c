
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct bcma_drv_cc {TYPE_1__* core; } ;
struct TYPE_4__ {scalar_t__ id; } ;
struct bcma_bus {TYPE_2__ chipinfo; } ;
struct TYPE_3__ {struct bcma_bus* bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bcma_drv_cc*,int ) ;
 int FUNC_2 (struct bcma_drv_cc*,scalar_t__) ;
 int FUNC_3 (struct bcma_drv_cc*) ;

__attribute__((used)) static u32 FUNC_4(struct bcma_drv_cc *VAR_15, u32 VAR_16, u32 VAR_17)
{
 u32 VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
 struct bcma_bus *VAR_24 = VAR_15->core->bus;

 FUNC_0((VAR_16 & 3) || (VAR_16 > VAR_1));

 FUNC_0(!VAR_17 || VAR_17 > 4);

 if (VAR_24->chipinfo.id == VAR_14 ||
     VAR_24->chipinfo.id == VAR_13) {

  VAR_18 = FUNC_1(VAR_15, VAR_0);
  if (VAR_18 & 0x40000)
   return 133 * 1000000;
 }

 VAR_18 = FUNC_2(VAR_15, VAR_16 + VAR_8);
 VAR_21 = (VAR_18 & VAR_9) >> VAR_10;
 VAR_22 = (VAR_18 & VAR_11) >> VAR_12;

 VAR_18 = FUNC_2(VAR_15, VAR_16 + VAR_2);
 VAR_19 = (VAR_18 >> ((VAR_17 - 1) * VAR_4)) &
  VAR_3;

 VAR_18 = FUNC_2(VAR_15, VAR_16 + VAR_7);
 VAR_20 = (VAR_18 & VAR_5) >> VAR_6;


 VAR_23 = FUNC_3(VAR_15) / 1000000;
 VAR_23 = (VAR_21 * VAR_20 * VAR_23) / VAR_22;


 return (VAR_23 / VAR_19) * 1000000;
}
