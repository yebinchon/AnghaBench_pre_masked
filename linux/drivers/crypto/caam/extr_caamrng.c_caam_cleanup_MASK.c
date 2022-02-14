
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hwrng {int dummy; } ;
struct buf_data {int filled; int empty; } ;
struct TYPE_3__ {struct buf_data* bufs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct hwrng *VAR_2)
{
 int VAR_3;
 struct buf_data *VAR_4;

 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  VAR_4 = &VAR_1->bufs[VAR_3];
  if (FUNC_0(&VAR_4->empty) == VAR_0)
   FUNC_2(&VAR_4->filled);
 }

 FUNC_1(VAR_1);
}
