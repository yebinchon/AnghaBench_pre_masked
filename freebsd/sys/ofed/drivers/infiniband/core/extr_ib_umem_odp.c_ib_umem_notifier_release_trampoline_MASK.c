
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct ib_umem {TYPE_2__* context; TYPE_1__* odp_data; } ;
struct TYPE_4__ {int (* invalidate_range ) (struct ib_umem*,int ,int ) ;} ;
struct TYPE_3__ {int dying; int notifier_completion; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ib_umem*) ;
 int FUNC_2 (struct ib_umem*) ;
 int FUNC_3 (struct ib_umem*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct ib_umem*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct ib_umem *VAR_0, u64 VAR_1,
            u64 VAR_2, void *VAR_3) {




 FUNC_2(VAR_0);
 VAR_0->odp_data->dying = 1;


 FUNC_4();
 FUNC_0(&VAR_0->odp_data->notifier_completion);
 VAR_0->context->invalidate_range(VAR_0, FUNC_3(VAR_0),
     FUNC_1(VAR_0));
 return 0;
}
