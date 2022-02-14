
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct vmctx {int dummy; } ;
struct pirq {int reg; scalar_t__ active_count; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct pirq*) ;
 scalar_t__ FUNC_2 (int) ;
 struct pirq* VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct vmctx*,int,int) ;
 int FUNC_6 (struct vmctx*,int,int) ;

void
FUNC_7(struct vmctx *VAR_3, int VAR_4, uint8_t VAR_5)
{
 struct pirq *VAR_6;

 FUNC_0(VAR_4 > 0 && VAR_4 <= FUNC_1(VAR_2));
 VAR_6 = &VAR_2[VAR_4 - 1];
 FUNC_3(&VAR_6->lock);
 if (VAR_6->reg != (VAR_5 & (VAR_0 | VAR_1))) {
  if (VAR_6->active_count != 0 && FUNC_2(VAR_6->reg))
   FUNC_6(VAR_3, VAR_6->reg & VAR_1, -1);
  VAR_6->reg = VAR_5 & (VAR_0 | VAR_1);
  if (VAR_6->active_count != 0 && FUNC_2(VAR_6->reg))
   FUNC_5(VAR_3, VAR_6->reg & VAR_1, -1);
 }
 FUNC_4(&VAR_6->lock);
}
