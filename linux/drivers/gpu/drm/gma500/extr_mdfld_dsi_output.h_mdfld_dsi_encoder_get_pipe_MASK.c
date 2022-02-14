
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdfld_dsi_encoder {int dummy; } ;
struct mdfld_dsi_connector {int pipe; } ;


 struct mdfld_dsi_connector* FUNC_0 (struct mdfld_dsi_encoder*) ;

__attribute__((used)) static inline int FUNC_1(struct mdfld_dsi_encoder *VAR_0)
{
 struct mdfld_dsi_connector *VAR_1;

 if (!VAR_0)
  return -1;

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  return -1;
 return VAR_1->pipe;
}
