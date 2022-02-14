
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ count; } ;
struct dsi_data {TYPE_1__ bus_lock; } ;



__attribute__((used)) static bool FUNC_0(struct dsi_data *VAR_0)
{
 return VAR_0->bus_lock.count == 0;
}
