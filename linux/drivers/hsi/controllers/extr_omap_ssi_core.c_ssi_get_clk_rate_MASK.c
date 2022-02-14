
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_ssi_controller {int fck; } ;
struct hsi_controller {int dummy; } ;


 unsigned long FUNC_0 (int ) ;
 struct omap_ssi_controller* FUNC_1 (struct hsi_controller*) ;

__attribute__((used)) static unsigned long FUNC_2(struct hsi_controller *VAR_0)
{
 struct omap_ssi_controller *VAR_1 = FUNC_1(VAR_0);
 unsigned long VAR_2 = FUNC_0(VAR_1->fck);
 return VAR_2;
}
