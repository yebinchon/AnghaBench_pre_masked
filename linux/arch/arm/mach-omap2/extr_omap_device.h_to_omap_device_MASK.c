
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct omap_device* od; } ;
struct platform_device {TYPE_1__ archdata; } ;
struct omap_device {int dummy; } ;



__attribute__((used)) static inline struct omap_device *FUNC_0(struct platform_device *VAR_0)
{
 return VAR_0 ? VAR_0->archdata.od : ((void*)0);
}
