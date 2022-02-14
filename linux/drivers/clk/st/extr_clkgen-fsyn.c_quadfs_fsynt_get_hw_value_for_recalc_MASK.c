
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm_fs {int nsdiv; void* sdiv; void* pe; void* mdiv; } ;
struct st_clk_quadfs_fsynth {size_t chan; int nsdiv; void* sdiv; void* pe; void* md; TYPE_1__* data; } ;
struct TYPE_2__ {scalar_t__ nsdiv_present; } ;


 void* FUNC_0 (struct st_clk_quadfs_fsynth*,int ) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_1(struct st_clk_quadfs_fsynth *VAR_4,
  struct stm_fs *VAR_5)
{



 VAR_5->mdiv = FUNC_0(VAR_4, VAR_0[VAR_4->chan]);
 VAR_5->pe = FUNC_0(VAR_4, VAR_2[VAR_4->chan]);
 VAR_5->sdiv = FUNC_0(VAR_4, VAR_3[VAR_4->chan]);

 if (VAR_4->data->nsdiv_present)
  VAR_5->nsdiv = FUNC_0(VAR_4, VAR_1[VAR_4->chan]);
 else
  VAR_5->nsdiv = 1;




 if (!VAR_5->mdiv && !VAR_5->pe && !VAR_5->sdiv)
  return 1;

 VAR_4->md = VAR_5->mdiv;
 VAR_4->pe = VAR_5->pe;
 VAR_4->sdiv = VAR_5->sdiv;
 VAR_4->nsdiv = VAR_5->nsdiv;

 return 0;
}
