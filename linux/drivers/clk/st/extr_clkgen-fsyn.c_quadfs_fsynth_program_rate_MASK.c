
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_clk_quadfs_fsynth {size_t chan; scalar_t__ lock; int nsdiv; TYPE_1__* data; int sdiv; int pe; int md; } ;
struct TYPE_2__ {scalar_t__ nsdiv_present; } ;


 int FUNC_0 (struct st_clk_quadfs_fsynth*,int ,int ) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (scalar_t__,unsigned long) ;
 int FUNC_2 (scalar_t__,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct st_clk_quadfs_fsynth *VAR_5)
{
 unsigned long VAR_6 = 0;






 FUNC_0(VAR_5, VAR_0[VAR_5->chan], 0);

 FUNC_0(VAR_5, VAR_1[VAR_5->chan], VAR_5->md);
 FUNC_0(VAR_5, VAR_3[VAR_5->chan], VAR_5->pe);
 FUNC_0(VAR_5, VAR_4[VAR_5->chan], VAR_5->sdiv);

 if (VAR_5->lock)
  FUNC_1(VAR_5->lock, VAR_6);

 if (VAR_5->data->nsdiv_present)
  FUNC_0(VAR_5, VAR_2[VAR_5->chan], VAR_5->nsdiv);

 if (VAR_5->lock)
  FUNC_2(VAR_5->lock, VAR_6);
}
