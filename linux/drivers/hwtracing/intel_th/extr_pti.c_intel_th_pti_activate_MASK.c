
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pti_device {int patgen; int mode; int clkdiv; int lpp_dest; scalar_t__ base; scalar_t__ freeclk; } ;
struct intel_th_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 struct pti_device* FUNC_1 (int *) ;
 int FUNC_2 (struct intel_th_device*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct intel_th_device *VAR_7)
{
 struct pti_device *VAR_8 = FUNC_1(&VAR_7->dev);
 u32 VAR_9 = VAR_2;

 if (VAR_8->patgen)
  VAR_9 |= VAR_8->patgen << FUNC_0(VAR_5);
 if (VAR_8->freeclk)
  VAR_9 |= VAR_3;
 VAR_9 |= VAR_8->mode << FUNC_0(VAR_4);
 VAR_9 |= VAR_8->clkdiv << FUNC_0(VAR_1);
 VAR_9 |= VAR_8->lpp_dest << FUNC_0(VAR_0);

 FUNC_3(VAR_9, VAR_8->base + VAR_6);

 FUNC_2(VAR_7);

 return 0;
}
