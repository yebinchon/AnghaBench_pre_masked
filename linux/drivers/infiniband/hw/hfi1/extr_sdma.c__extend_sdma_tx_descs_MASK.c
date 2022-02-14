
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdma_txreq {int num_desc; int desc_limit; int * descs; int * descp; scalar_t__ coalesce_idx; scalar_t__ coalesce_buf; scalar_t__ tlen; } ;
struct sdma_desc {int dummy; } ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hfi1_devdata*,struct sdma_txreq*) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int * FUNC_2 (int,int,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct hfi1_devdata *VAR_3, struct sdma_txreq *VAR_4)
{
 int VAR_5;


 if (FUNC_3((VAR_4->num_desc == (VAR_2 - 1)))) {

  if (!VAR_4->tlen) {
   VAR_4->desc_limit = VAR_2;
  } else if (!VAR_4->coalesce_buf) {

   VAR_4->coalesce_buf = FUNC_1(VAR_4->tlen + sizeof(u32),
         VAR_1);
   if (!VAR_4->coalesce_buf)
    goto enomem;
   VAR_4->coalesce_idx = 0;
  }
  return 0;
 }

 if (FUNC_3(VAR_4->num_desc == VAR_2))
  goto enomem;

 VAR_4->descp = FUNC_2(
   VAR_2,
   sizeof(struct sdma_desc),
   VAR_1);
 if (!VAR_4->descp)
  goto enomem;


 VAR_4->desc_limit = VAR_2 - 1;

 for (VAR_5 = 0; VAR_5 < VAR_4->num_desc; VAR_5++)
  VAR_4->descp[VAR_5] = VAR_4->descs[VAR_5];
 return 0;
enomem:
 FUNC_0(VAR_3, VAR_4);
 return -VAR_0;
}
