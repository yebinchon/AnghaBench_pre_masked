
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_engine {int progress_mask; int dd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sdma_engine*,int ) ;
 int FUNC_1 (int ,scalar_t__,int ) ;

void FUNC_2(
 struct sdma_engine *VAR_2)
{
 FUNC_0(VAR_2, VAR_2->progress_mask);

 FUNC_1(VAR_2->dd,
    VAR_0 + (8 * (VAR_1 / 64)),
    VAR_2->progress_mask);
}
