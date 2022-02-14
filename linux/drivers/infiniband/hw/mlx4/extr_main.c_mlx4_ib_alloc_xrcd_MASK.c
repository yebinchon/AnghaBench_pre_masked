
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ib_xrcd {int dummy; } ;
struct mlx4_ib_xrcd {int xrcdn; int pd; struct ib_xrcd ibxrcd; int cq; } ;
struct ib_udata {int dummy; } ;
struct ib_device {int dummy; } ;
struct ib_cq_init_attr {int cqe; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_7__ {TYPE_1__ caps; } ;
struct TYPE_6__ {TYPE_3__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_xrcd* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ib_device*,int ) ;
 int FUNC_4 (struct ib_device*,int *,int *,struct mlx4_ib_xrcd*,struct ib_cq_init_attr*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mlx4_ib_xrcd*) ;
 struct mlx4_ib_xrcd* FUNC_7 (int,int ) ;
 int FUNC_8 (TYPE_3__*,int *) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 TYPE_2__* FUNC_10 (struct ib_device*) ;

__attribute__((used)) static struct ib_xrcd *FUNC_11(struct ib_device *VAR_4,
       struct ib_udata *VAR_5)
{
 struct mlx4_ib_xrcd *VAR_6;
 struct ib_cq_init_attr VAR_7 = {};
 int VAR_8;

 if (!(FUNC_10(VAR_4)->dev->caps.flags & VAR_3))
  return FUNC_0(-VAR_1);

 VAR_6 = FUNC_7(sizeof *VAR_6, VAR_2);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_8 = FUNC_8(FUNC_10(VAR_4)->dev, &VAR_6->xrcdn);
 if (VAR_8)
  goto err1;

 VAR_6->pd = FUNC_3(VAR_4, 0);
 if (FUNC_1(VAR_6->pd)) {
  VAR_8 = FUNC_2(VAR_6->pd);
  goto err2;
 }

 VAR_7.cqe = 1;
 VAR_6->cq = FUNC_4(VAR_4, ((void*)0), ((void*)0), VAR_6, &VAR_7);
 if (FUNC_1(VAR_6->cq)) {
  VAR_8 = FUNC_2(VAR_6->cq);
  goto err3;
 }

 return &VAR_6->ibxrcd;

err3:
 FUNC_5(VAR_6->pd);
err2:
 FUNC_9(FUNC_10(VAR_4)->dev, VAR_6->xrcdn);
err1:
 FUNC_6(VAR_6);
 return FUNC_0(VAR_8);
}
