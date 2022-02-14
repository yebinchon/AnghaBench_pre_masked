
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mipi_dsi_host_ops {int dummy; } ;
struct mipi_dsi_device {TYPE_1__* host; } ;
struct TYPE_2__ {struct mipi_dsi_host_ops const* ops; } ;
struct intel_dsi_host {int port; struct mipi_dsi_device* device; TYPE_1__ base; struct intel_dsi* intel_dsi; } ;
struct intel_dsi {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 int VAR_0 ;
 int FUNC_0 (struct intel_dsi_host*) ;
 void* FUNC_1 (int,int ) ;

struct intel_dsi_host *FUNC_2(struct intel_dsi *VAR_1,
        const struct mipi_dsi_host_ops *VAR_2,
        enum port VAR_3)
{
 struct intel_dsi_host *VAR_4;
 struct mipi_dsi_device *VAR_5;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->base.ops = VAR_2;
 VAR_4->intel_dsi = VAR_1;
 VAR_4->port = VAR_3;
 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0);
 if (!VAR_5) {
  FUNC_0(VAR_4);
  return ((void*)0);
 }

 VAR_5->host = &VAR_4->base;
 VAR_4->device = VAR_5;

 return VAR_4;
}
