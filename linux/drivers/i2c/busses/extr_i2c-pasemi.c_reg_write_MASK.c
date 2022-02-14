
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pasemi_smbus {scalar_t__ base; TYPE_1__* dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,scalar_t__,int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct pasemi_smbus *VAR_0, int VAR_1, int VAR_2)
{
 FUNC_0(&VAR_0->dev->dev, "smbus write reg %lx val %08x\n",
  VAR_0->base + VAR_1, VAR_2);
 FUNC_1(VAR_2, VAR_0->base + VAR_1);
}
