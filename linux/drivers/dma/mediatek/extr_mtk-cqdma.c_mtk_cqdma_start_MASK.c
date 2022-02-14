
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_cqdma_vdesc {int src; int dest; int len; int ch; } ;
struct mtk_cqdma_pchan {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct mtk_cqdma_pchan*,int) ;
 int FUNC_3 (struct mtk_cqdma_pchan*,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct mtk_cqdma_pchan *VAR_11,
       struct mtk_cqdma_vdesc *VAR_12)
{

 if (FUNC_2(VAR_11, 1) < 0)
  FUNC_1(FUNC_0(FUNC_4(VAR_12->ch)), "cqdma wait transaction timeout\n");


 FUNC_3(VAR_11, VAR_7, VAR_10);
 if (FUNC_2(VAR_11, 1) < 0)
  FUNC_1(FUNC_0(FUNC_4(VAR_12->ch)), "cqdma warm reset timeout\n");


 FUNC_3(VAR_11, VAR_8, VAR_12->src & VAR_1);



 FUNC_3(VAR_11, VAR_9, 0);



 FUNC_3(VAR_11, VAR_2, VAR_12->dest & VAR_1);



 FUNC_3(VAR_11, VAR_3, 0);



 FUNC_3(VAR_11, VAR_6, VAR_12->len);


 FUNC_3(VAR_11, VAR_4, VAR_5);
}
