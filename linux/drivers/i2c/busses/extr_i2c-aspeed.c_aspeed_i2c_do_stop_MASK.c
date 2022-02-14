
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aspeed_i2c_bus {scalar_t__ base; int master_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct aspeed_i2c_bus *VAR_3)
{
 VAR_3->master_state = VAR_2;
 FUNC_0(VAR_0, VAR_3->base + VAR_1);
}
