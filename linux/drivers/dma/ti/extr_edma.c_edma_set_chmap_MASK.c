
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edma_chan {int ch_num; struct edma_cc* ecc; } ;
struct edma_cc {scalar_t__ chmap_exist; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct edma_cc*,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct edma_chan *VAR_1, int VAR_2)
{
 struct edma_cc *VAR_3 = VAR_1->ecc;
 int VAR_4 = FUNC_0(VAR_1->ch_num);

 if (VAR_3->chmap_exist) {
  VAR_2 = FUNC_0(VAR_2);
  FUNC_1(VAR_3, VAR_0, VAR_4, (VAR_2 << 5));
 }
}
