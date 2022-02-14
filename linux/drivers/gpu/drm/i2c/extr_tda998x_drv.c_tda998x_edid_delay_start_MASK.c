
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda998x_priv {int edid_delay_active; int edid_delay_timer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct tda998x_priv *VAR_2)
{
 VAR_2->edid_delay_active = 1;
 FUNC_0(&VAR_2->edid_delay_timer, VAR_1 + VAR_0/10);
}
