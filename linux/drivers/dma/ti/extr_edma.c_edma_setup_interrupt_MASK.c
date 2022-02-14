
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edma_chan {int ch_num; struct edma_cc* ecc; } ;
struct edma_cc {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct edma_cc*,int ,int,int) ;

__attribute__((used)) static void FUNC_4(struct edma_chan *VAR_3, bool VAR_4)
{
 struct edma_cc *VAR_5 = VAR_3->ecc;
 int VAR_6 = FUNC_1(VAR_3->ch_num);
 int VAR_7 = FUNC_2(VAR_6);
 int VAR_8 = FUNC_0(VAR_6);

 if (VAR_4) {
  FUNC_3(VAR_5, VAR_0, VAR_7, VAR_8);
  FUNC_3(VAR_5, VAR_2, VAR_7, VAR_8);
 } else {
  FUNC_3(VAR_5, VAR_1, VAR_7, VAR_8);
 }
}
