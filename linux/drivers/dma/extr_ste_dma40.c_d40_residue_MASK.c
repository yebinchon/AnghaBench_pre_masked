
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int data_width; } ;
struct TYPE_6__ {TYPE_2__ dst_info; } ;
struct d40_chan {TYPE_3__ dma_cfg; TYPE_1__* lcpa; } ;
struct TYPE_4__ {int lcsp2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (struct d40_chan*) ;
 scalar_t__ FUNC_1 (struct d40_chan*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static u32 FUNC_3(struct d40_chan *VAR_5)
{
 u32 VAR_6;

 if (FUNC_1(VAR_5))
  VAR_6 = (FUNC_2(&VAR_5->lcpa->lcsp2) & VAR_1)
   >> VAR_2;
 else {
  u32 VAR_7 = FUNC_2(FUNC_0(VAR_5) + VAR_0);
  VAR_6 = (VAR_7 & VAR_3)
     >> VAR_4;
 }

 return VAR_6 * VAR_5->dma_cfg.dst_info.data_width;
}
