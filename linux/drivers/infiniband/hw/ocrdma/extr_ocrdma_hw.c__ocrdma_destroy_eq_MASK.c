
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ created; } ;
struct ocrdma_eq {TYPE_1__ q; } ;
struct ocrdma_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ocrdma_dev*,TYPE_1__*) ;
 int FUNC_1 (struct ocrdma_dev*,TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_2(struct ocrdma_dev *VAR_1, struct ocrdma_eq *VAR_2)
{
 if (VAR_2->q.created) {
  FUNC_1(VAR_1, &VAR_2->q, VAR_0);
  FUNC_0(VAR_1, &VAR_2->q);
 }
}
