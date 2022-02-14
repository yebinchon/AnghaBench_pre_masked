
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gma_encoder {struct cdv_intel_dp* dev_priv; } ;
struct cdv_intel_dp {int link_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gma_encoder*,int ,int ,int ) ;

__attribute__((used)) static bool
FUNC_1(struct gma_encoder *VAR_2)
{
 struct cdv_intel_dp *VAR_3 = VAR_2->dev_priv;
 return FUNC_0(VAR_2,
           VAR_0,
           VAR_3->link_status,
           VAR_1);
}
