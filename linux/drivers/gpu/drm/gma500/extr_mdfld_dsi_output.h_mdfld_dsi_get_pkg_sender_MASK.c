
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdfld_dsi_connector {void* pkg_sender; } ;
struct mdfld_dsi_config {struct mdfld_dsi_connector* connector; } ;



__attribute__((used)) static inline void *FUNC_0(struct mdfld_dsi_config *VAR_0)
{
 struct mdfld_dsi_connector *VAR_1;

 if (!VAR_0)
  return ((void*)0);

 VAR_1 = VAR_0->connector;

 if (!VAR_1)
  return ((void*)0);

 return VAR_1->pkg_sender;
}
