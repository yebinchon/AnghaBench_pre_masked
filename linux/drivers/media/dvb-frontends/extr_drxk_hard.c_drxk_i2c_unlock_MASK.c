
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drxk_state {int drxk_i2c_exclusive_lock; int i2c; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct drxk_state *VAR_1)
{
 if (!VAR_1->drxk_i2c_exclusive_lock)
  return;

 FUNC_0(VAR_1->i2c, VAR_0);
 VAR_1->drxk_i2c_exclusive_lock = 0;
}
