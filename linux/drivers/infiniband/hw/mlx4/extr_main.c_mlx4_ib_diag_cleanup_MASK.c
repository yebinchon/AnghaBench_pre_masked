
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_ib_dev {TYPE_1__* diag_counters; } ;
struct TYPE_2__ {int name; int offset; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct mlx4_ib_dev *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_0(VAR_1->diag_counters[VAR_2].offset);
  FUNC_0(VAR_1->diag_counters[VAR_2].name);
 }
}
