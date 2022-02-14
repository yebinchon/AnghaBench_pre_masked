
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_7__ {TYPE_3__* put_ptr; TYPE_1__* chan_ptr; } ;
typedef TYPE_2__ chan_tab_t ;
struct TYPE_8__ {int dscr_cmd0; int dscr_nxtptr; scalar_t__ dscr_cmd1; int dscr_source1; int dscr_dest1; int dscr_source0; int dscr_dest0; } ;
typedef TYPE_3__ au1x_ddma_desc_t ;
struct TYPE_6__ {scalar_t__ ddma_dbell; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ) ;

u32 FUNC_2(u32 VAR_2, au1x_ddma_desc_t *VAR_3)
{
 chan_tab_t *VAR_4;
 au1x_ddma_desc_t *VAR_5;
 u32 VAR_6 = 0;





 VAR_4 = *((chan_tab_t **)VAR_2);






 VAR_5 = VAR_4->put_ptr;





 if (VAR_5->dscr_cmd0 & VAR_1)
  return 0;


 VAR_5->dscr_dest0 = VAR_3->dscr_dest0;
 VAR_5->dscr_source0 = VAR_3->dscr_source0;
 VAR_5->dscr_dest1 = VAR_3->dscr_dest1;
 VAR_5->dscr_source1 = VAR_3->dscr_source1;
 VAR_5->dscr_cmd1 = VAR_3->dscr_cmd1;
 VAR_6 = VAR_3->dscr_cmd1;

 VAR_5->dscr_cmd0 &= ~VAR_0;
 VAR_5->dscr_cmd0 |= VAR_3->dscr_cmd0 | VAR_1;
 VAR_4->chan_ptr->ddma_dbell = 0;


 VAR_4->put_ptr = FUNC_1(FUNC_0(VAR_5->dscr_nxtptr));


 return VAR_6;
}
