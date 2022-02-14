
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vc4_dsi {int port; } ;
typedef int irqreturn_t ;


 int FUNC_0 (char*,int ,char const*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct vc4_dsi *VAR_1,
        irqreturn_t *VAR_2, u32 VAR_3, u32 VAR_4,
        const char *VAR_5)
{
 if (!(VAR_3 & VAR_4))
  return;

 FUNC_0("DSI%d: %s error\n", VAR_1->port, VAR_5);
 *VAR_2 = VAR_0;
}
