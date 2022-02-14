
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_dsi {int dummy; } ;
struct TYPE_2__ {struct msm_dsi** dsi; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static inline struct msm_dsi *FUNC_0(int VAR_2)
{
 return VAR_1.dsi[(VAR_2 + 1) % VAR_0];
}
