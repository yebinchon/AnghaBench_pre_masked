
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u16 ;
struct sdma_txreq {size_t num_desc; scalar_t__ desc_limit; int * descp; int descs; int * coalesce_buf; } ;
struct hfi1_devdata {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct sdma_txreq*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hfi1_devdata*,int *) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(
 struct hfi1_devdata *VAR_1,
 struct sdma_txreq *VAR_2)
{
 u16 VAR_3;

 if (VAR_2->num_desc) {
  u8 VAR_4 = 0, VAR_5 = FUNC_1(VAR_2);


  FUNC_3(VAR_1, &VAR_2->descp[0]);

  if (VAR_5 > VAR_0)
   VAR_4 = VAR_5 >> 1;
  for (VAR_3 = 1 + VAR_4; VAR_3 < VAR_2->num_desc; VAR_3++)
   FUNC_3(VAR_1, &VAR_2->descp[VAR_3]);
  VAR_2->num_desc = 0;
 }
 FUNC_2(VAR_2->coalesce_buf);
 VAR_2->coalesce_buf = ((void*)0);

 if (FUNC_4(VAR_2->desc_limit > FUNC_0(VAR_2->descs))) {
  VAR_2->desc_limit = FUNC_0(VAR_2->descs);
  FUNC_2(VAR_2->descp);
 }
}
