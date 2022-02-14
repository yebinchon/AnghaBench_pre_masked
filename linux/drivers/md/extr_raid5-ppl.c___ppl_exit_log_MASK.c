
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ppl_conf {int io_kc; int io_pool; int flush_bs; int bs; struct ppl_conf* child_logs; TYPE_1__* mddev; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct ppl_conf*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ppl_conf *VAR_2)
{
 FUNC_1(VAR_1, &VAR_2->mddev->flags);
 FUNC_1(VAR_0, &VAR_2->mddev->flags);

 FUNC_2(VAR_2->child_logs);

 FUNC_0(&VAR_2->bs);
 FUNC_0(&VAR_2->flush_bs);
 FUNC_4(&VAR_2->io_pool);
 FUNC_3(VAR_2->io_kc);

 FUNC_2(VAR_2);
}
