
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi {scalar_t__ external_bridge; scalar_t__ panel; } ;



__attribute__((used)) static inline bool FUNC_0(struct msm_dsi *VAR_0)
{
 return VAR_0->panel || VAR_0->external_bridge;
}
