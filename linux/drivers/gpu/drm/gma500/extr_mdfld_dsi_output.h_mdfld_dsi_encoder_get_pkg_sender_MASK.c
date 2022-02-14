
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdfld_dsi_encoder {int dummy; } ;
struct mdfld_dsi_config {int dummy; } ;


 struct mdfld_dsi_config* FUNC_0 (struct mdfld_dsi_encoder*) ;
 void* FUNC_1 (struct mdfld_dsi_config*) ;

__attribute__((used)) static inline void *FUNC_2(
    struct mdfld_dsi_encoder *VAR_0)
{
 struct mdfld_dsi_config *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  return ((void*)0);

 return FUNC_1(VAR_1);
}
