
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcar_du_device {TYPE_1__* info; } ;
struct TYPE_2__ {unsigned int features; } ;



__attribute__((used)) static inline bool FUNC_0(struct rcar_du_device *VAR_0,
          unsigned int VAR_1)
{
 return VAR_0->info->features & VAR_1;
}
