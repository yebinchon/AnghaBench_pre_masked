
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int status; } ;
struct sti_gdp {int * vtg; TYPE_4__ plane; scalar_t__ clk_pix; int vtg_field_nb; TYPE_3__* node_list; } ;
struct TYPE_7__ {TYPE_2__* btm_field; TYPE_1__* top_field; } ;
struct TYPE_6__ {int gam_gdp_ppt; } ;
struct TYPE_5__ {int gam_gdp_ppt; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(struct sti_gdp *VAR_3)
{
 unsigned int VAR_4;

 FUNC_0("%s\n", FUNC_2(&VAR_3->plane));


 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3->node_list[VAR_4].top_field->gam_gdp_ppt |= VAR_0;
  VAR_3->node_list[VAR_4].btm_field->gam_gdp_ppt |= VAR_0;
 }

 if (FUNC_3(VAR_3->vtg, &VAR_3->vtg_field_nb))
  FUNC_0("Warning: cannot unregister VTG notifier\n");

 if (VAR_3->clk_pix)
  FUNC_1(VAR_3->clk_pix);

 VAR_3->plane.status = VAR_2;
 VAR_3->vtg = ((void*)0);
}
