
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_device {int dummy; } ;
struct cma_device {struct ib_device* device; } ;



struct ib_device *FUNC_0(struct cma_device *VAR_0)
{
 return VAR_0->device;
}
