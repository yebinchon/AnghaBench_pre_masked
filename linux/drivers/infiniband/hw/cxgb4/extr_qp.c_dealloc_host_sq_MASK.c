
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct t4_sq {int queue; int memsize; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct c4iw_rdev {TYPE_2__ lldi; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (struct t4_sq*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct c4iw_rdev *VAR_1, struct t4_sq *VAR_2)
{
 FUNC_0(&(VAR_1->lldi.pdev->dev), VAR_2->memsize, VAR_2->queue,
     FUNC_1(VAR_2, VAR_0));
}
