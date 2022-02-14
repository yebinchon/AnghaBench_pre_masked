
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mxc_gpio_port {int both_edges; int domain; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct mxc_gpio_port*,int) ;

__attribute__((used)) static void FUNC_4(struct mxc_gpio_port *VAR_0, u32 VAR_1)
{
 while (VAR_1 != 0) {
  int VAR_2 = FUNC_0(VAR_1) - 1;

  if (VAR_0->both_edges & (1 << VAR_2))
   FUNC_3(VAR_0, VAR_2);

  FUNC_1(FUNC_2(VAR_0->domain, VAR_2));

  VAR_1 &= ~(1 << VAR_2);
 }
}
