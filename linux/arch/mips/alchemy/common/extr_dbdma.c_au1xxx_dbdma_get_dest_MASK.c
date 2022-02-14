
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {TYPE_2__* get_ptr; } ;
typedef TYPE_1__ chan_tab_t ;
struct TYPE_5__ {int dscr_cmd0; int dscr_cmd1; int dscr_nxtptr; scalar_t__ dscr_stat; int dscr_dest0; } ;
typedef TYPE_2__ au1x_ddma_desc_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;

u32 FUNC_2(u32 VAR_1, void **VAR_2, int *VAR_3)
{
 chan_tab_t *VAR_4;
 au1x_ddma_desc_t *VAR_5;
 u32 VAR_6;





 VAR_4 = *((chan_tab_t **)VAR_1);






 VAR_5 = VAR_4->get_ptr;





 if (VAR_5->dscr_cmd0 & VAR_0)
  return 0;


 *VAR_2 = (void *)(FUNC_1(VAR_5->dscr_dest0));
 *VAR_3 = VAR_5->dscr_cmd1;
 VAR_6 = VAR_5->dscr_stat;


 VAR_4->get_ptr = FUNC_1(FUNC_0(VAR_5->dscr_nxtptr));


 return VAR_6;
}
