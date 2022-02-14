
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdfld_dsi_connector {scalar_t__ private; } ;
struct mdfld_dsi_config {int dummy; } ;



__attribute__((used)) static inline struct mdfld_dsi_config *
 FUNC_0(struct mdfld_dsi_connector *VAR_0)
{
 if (!VAR_0)
  return ((void*)0);
 return (struct mdfld_dsi_config *)VAR_0->private;
}
