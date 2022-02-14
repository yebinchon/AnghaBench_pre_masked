
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chcr_dev {scalar_t__ state; int inflight; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct chcr_dev *VAR_1)
{
 if (VAR_1->state == VAR_0)
  return 1;
 FUNC_0(&VAR_1->inflight);
 return 0;
}
