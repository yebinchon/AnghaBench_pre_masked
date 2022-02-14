
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dss_device {struct dispc_device* dispc; } ;
struct dispc_device {int dummy; } ;



struct dispc_device *FUNC_0(struct dss_device *VAR_0)
{
 return VAR_0->dispc;
}
