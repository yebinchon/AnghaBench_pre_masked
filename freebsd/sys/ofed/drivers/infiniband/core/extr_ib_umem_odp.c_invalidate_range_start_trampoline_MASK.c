
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ib_umem {TYPE_1__* context; } ;
struct TYPE_2__ {int (* invalidate_range ) (struct ib_umem*,int ,int ) ;} ;


 int FUNC_0 (struct ib_umem*) ;
 int FUNC_1 (struct ib_umem*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ib_umem *VAR_0, u64 VAR_1,
          u64 VAR_2, void *VAR_3)
{
 FUNC_0(VAR_0);
 VAR_0->context->invalidate_range(VAR_0, VAR_1, VAR_2);
 return 0;
}
