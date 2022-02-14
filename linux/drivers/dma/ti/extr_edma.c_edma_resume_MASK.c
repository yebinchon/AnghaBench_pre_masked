
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edma_chan {int ecc; int ch_num; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct edma_chan *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1->ch_num);

 FUNC_3(VAR_1->ecc, VAR_0,
     FUNC_2(VAR_2),
     FUNC_0(VAR_2));
}
