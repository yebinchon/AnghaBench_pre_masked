
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct aead_alg {int dummy; } ;
struct TYPE_4__ {TYPE_1__* viodev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (struct aead_alg*) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static int FUNC_2(struct aead_alg *VAR_1, u32 VAR_2, u32 VAR_3)
{
 return FUNC_1(&VAR_0.viodev->dev, VAR_2, VAR_3) ?
        FUNC_0(VAR_1) : 0;
}
