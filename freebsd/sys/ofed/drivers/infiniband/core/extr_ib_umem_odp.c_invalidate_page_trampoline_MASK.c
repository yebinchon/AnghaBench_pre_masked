
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ib_umem {TYPE_1__* context; } ;
struct TYPE_2__ {int (* invalidate_range ) (struct ib_umem*,scalar_t__,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ib_umem*) ;
 int FUNC_1 (struct ib_umem*) ;
 int FUNC_2 (struct ib_umem*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct ib_umem *VAR_1, u64 VAR_2,
          u64 VAR_3, void *VAR_4)
{
 FUNC_1(VAR_1);
 VAR_1->context->invalidate_range(VAR_1, VAR_2, VAR_2 + VAR_0);
 FUNC_0(VAR_1);
 return 0;
}
