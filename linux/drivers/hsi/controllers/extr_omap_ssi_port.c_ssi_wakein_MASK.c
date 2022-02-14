
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_ssi_port {int wake_gpio; } ;
struct hsi_port {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 struct omap_ssi_port* FUNC_1 (struct hsi_port*) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct hsi_port *VAR_0)
{
 struct omap_ssi_port *VAR_1 = FUNC_1(VAR_0);
 return FUNC_0(VAR_1->wake_gpio);
}
