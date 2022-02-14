
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pl08x_driver_data {scalar_t__ base; TYPE_1__* vd; } ;
struct TYPE_2__ {scalar_t__ ftdmac020; scalar_t__ nomadik; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct pl08x_driver_data *VAR_3)
{

 if (VAR_3->vd->nomadik)
  return;

 if (VAR_3->vd->ftdmac020) {
  FUNC_0(VAR_2, VAR_3->base + VAR_0);
  return;
 }
 FUNC_0(VAR_2, VAR_3->base + VAR_1);
}
