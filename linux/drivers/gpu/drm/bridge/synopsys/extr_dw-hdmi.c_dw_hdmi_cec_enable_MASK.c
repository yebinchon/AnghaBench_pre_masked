
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_hdmi {int mutex; int mc_clkdis; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dw_hdmi*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct dw_hdmi *VAR_2)
{
 FUNC_1(&VAR_2->mutex);
 VAR_2->mc_clkdis &= ~VAR_1;
 FUNC_0(VAR_2, VAR_2->mc_clkdis, VAR_0);
 FUNC_2(&VAR_2->mutex);
}
