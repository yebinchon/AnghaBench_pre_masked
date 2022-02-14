
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mic_dma_chan {scalar_t__ issued; scalar_t__ submitted; int issue_lock; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mic_dma_chan*,int ,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct mic_dma_chan* FUNC_3 (struct dma_chan*) ;
 int FUNC_4 () ;

__attribute__((used)) static inline void FUNC_5(struct dma_chan *VAR_1)
{
 struct mic_dma_chan *VAR_2 = FUNC_3(VAR_1);

 FUNC_1(&VAR_2->issue_lock);






 if (VAR_2->issued == VAR_2->submitted)
  goto out;
 VAR_2->issued = VAR_2->submitted;





 FUNC_4();
 FUNC_0(VAR_2, VAR_0, VAR_2->issued);
out:
 FUNC_2(&VAR_2->issue_lock);
}
