
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef unsigned long dma_addr_t ;
struct TYPE_6__ {TYPE_3__* put_ptr; TYPE_1__* chan_ptr; } ;
typedef TYPE_2__ chan_tab_t ;
struct TYPE_7__ {int dscr_cmd0; unsigned long dscr_source0; int dscr_cmd1; int dscr_nxtptr; } ;
typedef TYPE_3__ au1x_ddma_desc_t ;
struct TYPE_5__ {scalar_t__ ddma_dbell; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 () ;

u32 FUNC_4(u32 VAR_4, dma_addr_t VAR_5, int VAR_6, u32 VAR_7)
{
 chan_tab_t *VAR_8;
 au1x_ddma_desc_t *VAR_9;





 VAR_8 = *(chan_tab_t **)VAR_4;






 VAR_9 = VAR_8->put_ptr;





 if (VAR_9->dscr_cmd0 & VAR_3)
  return 0;


 VAR_9->dscr_source0 = VAR_5 & ~0UL;
 VAR_9->dscr_cmd1 = VAR_6;

 if (VAR_7 & VAR_0)
  VAR_9->dscr_cmd0 |= VAR_2;
 if (VAR_7 & VAR_1)
  VAR_9->dscr_cmd0 &= ~VAR_2;
 FUNC_1((unsigned long)VAR_5, VAR_6);
 VAR_9->dscr_cmd0 |= VAR_3;
 FUNC_3();
 FUNC_1((unsigned long)VAR_9, sizeof(*VAR_9));
 VAR_8->chan_ptr->ddma_dbell = 0;


 VAR_8->put_ptr = FUNC_2(FUNC_0(VAR_9->dscr_nxtptr));


 return VAR_6;
}
