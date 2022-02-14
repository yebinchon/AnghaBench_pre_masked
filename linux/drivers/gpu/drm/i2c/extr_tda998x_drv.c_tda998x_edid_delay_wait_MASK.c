
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda998x_priv {int edid_delay_active; int edid_delay_waitq; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct tda998x_priv *VAR_0)
{
 return FUNC_0(VAR_0->edid_delay_waitq, !VAR_0->edid_delay_active);
}
