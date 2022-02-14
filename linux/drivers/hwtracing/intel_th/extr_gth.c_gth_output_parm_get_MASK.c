
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gth_device {int dummy; } ;
struct TYPE_2__ {unsigned int (* get ) (struct gth_device*,int) ;unsigned int mask; } ;


 unsigned int FUNC_0 (unsigned int) ;
 TYPE_1__* VAR_0 ;
 unsigned int FUNC_1 (struct gth_device*,int) ;

__attribute__((used)) static unsigned int
FUNC_2(struct gth_device *VAR_1, int VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4 = VAR_0[VAR_3].get(VAR_1, VAR_2);
 unsigned int VAR_5 = VAR_0[VAR_3].mask;
 unsigned int VAR_6 = FUNC_0(VAR_5);

 VAR_4 &= VAR_5;
 VAR_4 >>= VAR_6;
 return VAR_4;
}
