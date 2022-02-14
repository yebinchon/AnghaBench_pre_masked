
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_controller_dev {int dummy; } ;
struct ccu_reset_map {int bit; scalar_t__ reg; } ;
struct ccu_reset {scalar_t__ base; struct ccu_reset_map* reset_map; } ;


 struct ccu_reset* FUNC_0 (struct reset_controller_dev*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct reset_controller_dev *VAR_0,
       unsigned long VAR_1)
{
 struct ccu_reset *VAR_2 = FUNC_0(VAR_0);
 const struct ccu_reset_map *VAR_3 = &VAR_2->reset_map[VAR_1];





 return !(VAR_3->bit & FUNC_1(VAR_2->base + VAR_3->reg));
}
