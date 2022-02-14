
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {TYPE_2__* chan_desc_base; TYPE_2__* cur_ptr; TYPE_2__* put_ptr; TYPE_2__* get_ptr; } ;
typedef TYPE_1__ chan_tab_t ;
struct TYPE_5__ {int dscr_nxtptr; scalar_t__ sw_status; int dscr_cmd0; } ;
typedef TYPE_2__ au1x_ddma_desc_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_2__* FUNC_2 (int ) ;

void FUNC_3(u32 VAR_1)
{
 chan_tab_t *VAR_2;
 au1x_ddma_desc_t *VAR_3;

 FUNC_1(VAR_1);

 VAR_2 = *((chan_tab_t **)VAR_1);
 VAR_2->get_ptr = VAR_2->put_ptr = VAR_2->cur_ptr = VAR_2->chan_desc_base;


 VAR_3 = VAR_2->chan_desc_base;

 do {
  VAR_3->dscr_cmd0 &= ~VAR_0;





  VAR_3->sw_status = 0;
  VAR_3 = FUNC_2(FUNC_0(VAR_3->dscr_nxtptr));
 } while (VAR_3 != VAR_2->chan_desc_base);
}
