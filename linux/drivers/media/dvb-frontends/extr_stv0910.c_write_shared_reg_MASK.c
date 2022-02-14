
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct stv {TYPE_1__* base; } ;
struct TYPE_2__ {int reg_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct stv*,int ,int*) ;
 int FUNC_3 (struct stv*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct stv *VAR_0, u16 VAR_1, u8 VAR_2, u8 VAR_3)
{
 int VAR_4;
 u8 VAR_5;

 FUNC_0(&VAR_0->base->reg_lock);
 VAR_4 = FUNC_2(VAR_0, VAR_1, &VAR_5);
 if (!VAR_4)
  VAR_4 = FUNC_3(VAR_0, VAR_1, (VAR_5 & ~VAR_2) | (VAR_3 & VAR_2));
 FUNC_1(&VAR_0->base->reg_lock);
 return VAR_4;
}
