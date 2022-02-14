
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {TYPE_2__* ibdev; } ;
struct ib_umem_odp {TYPE_3__ umem; } ;
struct TYPE_4__ {int (* invalidate_range ) (struct ib_umem_odp*,int ,int ) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;


 int FUNC_0 (struct ib_umem_odp*) ;
 int FUNC_1 (struct ib_umem_odp*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ib_umem_odp *VAR_0,
          u64 VAR_1, u64 VAR_2, void *VAR_3)
{
 FUNC_0(VAR_0);
 VAR_0->umem.ibdev->ops.invalidate_range(VAR_0, VAR_1, VAR_2);
 return 0;
}
